import sys, os
from decoder import decode

def splitSegment(string: str, init: str, end: str) -> str:
    return string.split(init)[1].split(end)[0]

def splitInst(line: str):
    nline = line.split(' ')
    return [nline[0], nline[1:]]

def splitInsts(lines: []):
    nlines = map(splitInst, lines)
    return list(nlines)

def removeEmpity(iterable: [str]) -> [str]:
    new = filter(lambda x: not x.isspace() and x != '', iterable)
    return list(new)

def removeComment(iterable: [str]) -> [str]:
    new = map(lambda x: x.split(';')[0].strip(), iterable)
    return list(new)

def main():
    if (len(sys.argv) > 1):
        filePath = os.path.abspath(sys.argv[1])
        fileName = os.path.basename(filePath)

        file = open(filePath, 'r').read().lower()
        
        code = splitSegment(file, '.code', '.endcode')
        code = removeEmpity(code.split('\n'))
        code = removeComment(code)
        code = splitInsts(code)
        
        binaryCode = bytearray(decode(code))

        binaryFileName = fileName.split('.')[0] + '.hex'
        binaryFile = open(binaryFileName, 'wb')

        binaryFile.write(binaryCode)
        
        binaryFile.close()

if __name__ == "__main__":
    main()