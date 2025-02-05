def create_matrix(n):
    # 숫자를 저장할 리스트 초기화
    matrix = []

    # 숫자를 1부터 9까지 반복하여 행렬 생성
    for i in range(n):
        row = []
        for j in range(n):
            # 현재 숫자를 계산 (1~9로 제한)
            num = (i * n + j) % 9 + 1
            row.append(num)
        matrix.append(row)

    return matrix

def print_matrix(matrix):
    # 행렬 출력
    for row in matrix:
        print(" ".join(map(str, row)))

# 사용자 입력
n = int(input())
matrix = create_matrix(n)
print_matrix(matrix)
