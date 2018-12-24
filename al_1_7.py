from collections import deque
import copy


def bfs(a):
    queue = deque()
    queue.append({"i": 0, "list": [a[0]]})
    queue.append({"i": 0, "list": []})
    res = deque()
    while queue:
        t = queue.popleft()
        i = t['i']
        l = copy.copy(t['list'])
        i += 1
        if i <= len(a):
            if i == len(a):
                j = 1
                while j < len(l):
                    if l[j] <= l[j-1]:
                        break
                    j += 1

                flag = True
                while j < len(l):
                    if l[j] >= l[j - 1]:
                        flag = False
                        break
                    j += 1
                if flag:
                    while res and len(res[-1]) < len(l):
                        res.pop()

                    if res:
                        if len(res[-1]) == len(l):
                            res.append(l)
                    else:
                        res.append(l)
            else:
                if res:
                    if len(res[0]) > len(l) + len(a) - i:
                        continue
                queue.append({"i": i, "list": l})
                c = copy.copy(l)
                c.append(a[i])
                queue.append({"i": i, "list": c})
    return res


def main():
    a = [int(x) for x in input().split()]
    l = bfs(a)
    while l:
        print(" ".join(str(item) for item in l[-1]))
        l.pop()


if __name__ == '__main__':
    main()

