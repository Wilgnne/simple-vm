def psh(args: [int]) -> int:
    if len(args) == 1:
        return 0
    else:
        raise Exception("A instrução PSH aceita apenas 1 argumento!")

def add(args: [int]) -> int:
    if len(args) == 0:
        return 1
    else:
        raise Exception("A instrução ADD aceita apenas 1 argumento!")

def pop(args: [int]) -> int:
    if len(args) == 0:
        return 2
    else:
        raise Exception("A instrução POP não aceita argumentos!")

def hlt(args: [int]) -> int:
    if len(args) == 0:
        return 3
    else:
        raise Exception("A instrução HLT não aceita argumentos!")


instructionsHash = {
    'psh': psh,
    'add': add,
    'pop': pop,
    'hlt': hlt
}