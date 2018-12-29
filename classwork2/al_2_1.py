import sys
def pow_mod(a, b, c):
    outcome = 1
    for i in range(b):
        outcome = outcome * a % c
    print(outcome)


if __name__ == '__main__':
    # pow_mod(450, 768, 51)
    num = input()
    for line in sys.stdin:
        arr = [int(n) for n in line.split(' ')]
        pow_mod(arr[0], arr[1], arr[2])
