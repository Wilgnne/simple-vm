from instr import instructionsHash

def SplitUpcodeArg(code):
    upcodes = [*map(lambda x: x[0], code)]
    args = [*map(lambda x: x[1], code)]
    return upcodes, args

def decodeInstr(upcode: str, args: [int]) -> int:
    return instructionsHash[upcode](args)

def convertStrNumber(arg: str) -> int:
    if arg[0] == '#':
        if arg[-1].isnumeric():
            return int(arg[1:])
        elif arg[-1] == 'h':
            return int(arg[1:-1], 16)
        else:
            raise Exception("Argumentos numericos precisam estar na base 10 ou 16h")
    else:
        raise Exception("Argumentos numericos precisam ser acompanhados de #")

def decodeArgs(args):
    return [*map( lambda x: [*map(convertStrNumber, x)] ,args)]

def decode(code):
    upcodes, args = SplitUpcodeArg(code)
    args = decodeArgs(args)
    upcodes = [*map(lambda x: decodeInstr(x[1], args[x[0]]), enumerate(upcodes))]

    binaryCode = []
    for index, upcode in enumerate(upcodes):
        binaryCode.append(upcode)
        for arg in args[index]:
            binaryCode.append(arg)

    return binaryCode

if __name__ == "__main__":
    code = [['psh', ['#5']], ['psh', ['#10']], ['add', []], ['pop', []], ['hlt', []]]
    print(code)
    decode(code)