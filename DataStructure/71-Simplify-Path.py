class Solution:
    def simplifyPath(self, path: str) -> str:
        stack = []
        path = path + \/\
        result = \\
        for i in path:
            if i == '/':
                if result == \..\:
                    if stack: stack.pop()
                elif result != \.\ and result != \\:
                    stack.append(result)
                result = \\
            else:
                result += i
                # stack.append(temp)
        print(stack)
        return \/\ + \/\.join(stack)
