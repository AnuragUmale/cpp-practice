#include <iostream>
// Solid Rectangle
// Hollow Rectangle
// Half Pyramid Pattern using Stars
// Inverted Half Pyramid
// Half Pyramid after 180 Degree Rotation
// Half Pyramid using Numbers
// Inverted Half Pyramid using Numbers
// Half Pyramid using Numbers - 2
// Inverted Half Pyramid using Numbers - 2
// Floyd's Triangle
// 0-1 Pattern
// Palindromic Pattern
// Diamond using Stars
// Hollow Diamond using Stars
// Hollow Diamond Inscribed in a Rectangle
// Solid Rhombus
// Hollow Rhombus
// Pyramid Pattern for Numbers
// Pyramid Pattern for Numbers - 2
// Solid Butterfly Pattern
// Hollow Butterfly Pattern
// Pascal's Triangle
// Zig-Zag Pattern
// Right Triangle
// Mirror Half Pyramid using Stars
// Inverted Mirrored Half Pyramid
// Numeric Pyramid
// Alphabet Pyramid
// Diamond Pattern inside a Square
// Wave Pattern
// Sandglass Pattern
// Spiral Pattern
// Checkerboard Pattern
// Heart Pattern using Stars
// Cross Pattern
// Christmas Tree Pattern
// Hourglass Pattern
// Diagonal Zig-Zag Pattern



void solidRectangle(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void hollowRectangle(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
}

void halfPyramidStars(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void invertedHalfPyramid(int rows) {
    for (int i = rows; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void halfPyramid180(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            if (j < rows - i - 1)
                std::cout << "  ";
            else
                std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void halfPyramidNumbers(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}

void invertedHalfPyramidNumbers(int rows) {
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}

void halfPyramidNumbers2(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}

void invertedHalfPyramidNumbers2(int rows) {
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}

void floydsTriangle(int rows) {
    int number = 1;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << number << " ";
            number++;
        }
        std::cout << std::endl;
    }
}

void zeroOnePattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0)
                std::cout << "1 ";
            else
                std::cout << "0 ";
        }
        std::cout << std::endl;
    }
}

void palindromicPattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        int j;
        for (j = 1; j <= rows - i; j++) {
            std::cout << "  ";
        }
        int num = i;
        for (; j <= rows; j++) {
            std::cout << num-- << " ";
        }
        num = 2;
        for (; j <= rows + i - 1; j++) {
            std::cout << num++ << " ";
        }
        std::cout << std::endl;
    }
}

void diamondStars(int n) {
    int space = n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < space; j++)
            std::cout << " ";
        for (int j = 0; j <= i; j++)
            std::cout << "* ";
        std::cout << std::endl;
        space--;
    }
    space = 0;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < space; j++)
            std::cout << " ";
        for (int j = 0; j < i; j++)
            std::cout << "* ";
        std::cout << std::endl;
        space++;
    }
}

void hollowDiamondStars(int rows) {
    int n = rows / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) 
            std::cout << "* ";
        for (int j = 0; j < 2 * i; j++) 
            std::cout << "  ";
        for (int j = 0; j < n - i; j++) 
            std::cout << "* ";
        std::cout << std::endl;
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < i; j++) 
            std::cout << "* ";
        for (int j = 0; j < 2 * (n - i); j++) 
            std::cout << "  ";
        for (int j = 0; j < i; j++) 
            std::cout << "* ";
        std::cout << std::endl;
    }
}


void hollowDiamondInRect(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            if (i + j <= rows / 2 - 1 || j - i >= rows / 2 || i - j >= rows / 2 || i + j >= rows + rows / 2 - 1)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
}

void solidRhombus(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) 
            std::cout << " ";
        for (int j = 1; j <= rows; j++)
            std::cout << "* ";
        std::cout << std::endl;
    }
}

void hollowRhombus(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) 
            std::cout << " ";
        for (int j = 1; j <= rows; j++) {
            if (i == 1 || i == rows || j == 1 || j == rows)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
}

void pyramidNumbers(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++)
            std::cout << " ";
        for (int j = 1; j <= i; j++)
            std::cout << j << " ";
        for (int j = i - 1; j >= 1; j--)
            std::cout << j << " ";
        std::cout << std::endl;
    }
}

void pyramidNumbers2(int rows) {
    int count = 0;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++)
            std::cout << " ";
        for (int j = 1; j <= i; j++)
            std::cout << ++count << " ";
        std::cout << std::endl;
    }
}

void solidButterfly(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++)
            std::cout << "* ";
        for (int j = 1; j <= 2 * (rows - i); j++)
            std::cout << "  ";
        for (int j = 1; j <= i; j++)
            std::cout << "* ";
        std::cout << std::endl;
    }
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            std::cout << "* ";
        for (int j = 1; j <= 2 * (rows - i); j++)
            std::cout << "  ";
        for (int j = 1; j <= i; j++)
            std::cout << "* ";
        std::cout << std::endl;
    }
}

void hollowButterfly(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        for (int j = 1; j <= 2 * (rows - i); j++)
            std::cout << "  ";
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        for (int j = 1; j <= 2 * (rows - i); j++)
            std::cout << "  ";
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
}

void pascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < rows - i - 1; k++)
            std::cout << " ";
        int val = 1;
        for (int j = 0; j <= i; j++) {
            std::cout << val << " ";
            val = val * (i - j) / (j + 1);
        }
        std::cout << std::endl;
    }
}

void zigZagPattern(int n) {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
}

void rightTriangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void mirrorHalfPyramidStars(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if (j <= rows - i)
                std::cout << "  ";
            else
                std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void invertedMirroredHalfPyramid(int rows) {
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= rows; j++) {
            if (j <= rows - i)
                std::cout << "  ";
            else
                std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void numericPyramid(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}

void alphabetPyramid(int rows) {
    char ch;
    for (int i = 1; i <= rows; i++) {
        ch = 'A';
        for (int j = 1; j <= rows - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            std::cout << ch++ << " ";
        }
        std::cout << std::endl;
    }
}

void diamondInSquare(int size) {
    int n = 2 * size - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == size - 1 || j - i == size - 1 || i - j == size - 1 || i + j == 3 * size - 3)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
}

void wavePattern(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j % 2 == 0)
                std::cout << i + 1 << " ";
            else
                std::cout << rows - i << " ";
        }
        std::cout << std::endl;
    }
}

void sandglassPattern(int rows) {
    for (int i = rows; i >= 1; i--) {
        for (int j = 0; j < rows - i; j++)
            std::cout << " ";
        for (int j = 0; j < 2 * i - 1; j++)
            std::cout << "* ";
        std::cout << std::endl;
    }
    for (int i = 2; i <= rows; i++) {
        for (int j = 0; j < rows - i; j++)
            std::cout << " ";
        for (int j = 0; j < 2 * i - 1; j++)
            std::cout << "* ";
        std::cout << std::endl;
    }
}

void spiralPattern(int n) {
    int arr[n][n], num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
            arr[top][i] = num++;
        top++;

        for (int i = top; i <= bottom; i++)
            arr[i][right] = num++;
        right--;

        for (int i = right; i >= left; i--)
            arr[bottom][i] = num++;
        bottom--;

        for (int i = bottom; i >= top; i--)
            arr[i][left] = num++;
        left++;
    }

    // Print the spiral pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            std::cout << arr[i][j] << "\t";
        std::cout << std::endl;
    }
}

void checkerboardPattern(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i + j) % 2 == 0)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
}

void heartPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= 2 * n; j++) {
            if ((i == 0 && j % (n / 2) == 0) || (i == n - 1 && j % 2 == 0) || (i < n / 2 && j == n) || (j <= i || j >= 2 * n - i))
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
}

void crossPattern(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j || j == (size - i - 1))
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
}

void christmasTreePattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            std::cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    for (int i = 1; i <= n / 2; i++) {
        for (int k = 1; k <= n - 2; k++) {
            std::cout << "  ";
        }
        std::cout << "* *\n";
    }
}

void hourglassPattern(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--)
            std::cout << " ";
        for (int j = 1; j < (i * 2); j++)
            std::cout << "*";
        std::cout << std::endl;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = n; j > i; j--)
            std::cout << " ";
        for (int j = 1; j < (i * 2); j++)
            std::cout << "*";
        std::cout << std::endl;
    }
}

void diagonalZigZagPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (((j + i) % 2 == 0 && j >= i) || ((i + j) % 2 == 0 && i >= j))
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
}


void testPatterns() {
    std::cout << "Testing Solid Rectangle:\n";
    solidRectangle(4, 5);

    std::cout << "\nTesting Hollow Rectangle:\n";
    hollowRectangle(4, 5);

    std::cout << "\nTesting Half Pyramid Pattern using Stars:\n";
    halfPyramidStars(5);

    std::cout << "\nTesting Inverted Half Pyramid:\n";
    invertedHalfPyramid(5);

    std::cout << "\nTesting Half Pyramid after 180 Degree Rotation:\n";
    halfPyramid180(5);

    std::cout << "\nTesting Half Pyramid using Numbers:\n";
    halfPyramidNumbers(5);

    std::cout << "\nTesting Inverted Half Pyramid using Numbers:\n";
    invertedHalfPyramidNumbers(5);

    std::cout << "\nTesting Half Pyramid using Numbers - 2:\n";
    halfPyramidNumbers2(5);

    std::cout << "\nTesting Inverted Half Pyramid using Numbers - 2:\n";
    invertedHalfPyramidNumbers2(5);

    std::cout << "\nTesting Floyd's Triangle:\n";
    floydsTriangle(5);

    std::cout << "\nTesting 0-1 Pattern:\n";
    zeroOnePattern(5);

    std::cout << "\nTesting Palindromic Pattern:\n";
    palindromicPattern(5);

    std::cout << "\nTesting Diamond using Stars:\n";
    diamondStars(5);

    std::cout << "\nTesting Hollow Diamond using Stars:\n";
    hollowDiamondStars(5);

    std::cout << "\nTesting Hollow Diamond Inscribed in a Rectangle:\n";
    hollowDiamondInRect(5);

    std::cout << "\nTesting Solid Rhombus:\n";
    solidRhombus(5);

    std::cout << "\nTesting Hollow Rhombus:\n";
    hollowRhombus(5);

    std::cout << "\nTesting Pyramid Pattern for Numbers:\n";
    pyramidNumbers(5);

    std::cout << "\nTesting Pyramid Pattern for Numbers - 2:\n";
    pyramidNumbers2(5);

    std::cout << "\nTesting Solid Butterfly Pattern:\n";
    solidButterfly(5);

    std::cout << "\nTesting Hollow Butterfly Pattern:\n";
    hollowButterfly(5);

    std::cout << "\nTesting Pascal's Triangle:\n";
    pascalsTriangle(5);

    std::cout << "\nTesting Zig-Zag Pattern:\n";
    zigZagPattern(9);

    std::cout << "\nTesting Right Triangle:\n";
    rightTriangle(5);

    std::cout << "\nTesting Mirror Half Pyramid using Stars:\n";
    mirrorHalfPyramidStars(5);

    std::cout << "\nTesting Inverted Mirrored Half Pyramid:\n";
    invertedMirroredHalfPyramid(5);

    std::cout << "\nTesting Numeric Pyramid:\n";
    numericPyramid(5);

    std::cout << "\nTesting Alphabet Pyramid:\n";
    alphabetPyramid(5);

    std::cout << "\nTesting Diamond Pattern inside a Square:\n";
    diamondInSquare(5);

    std::cout << "\nTesting Wave Pattern:\n";
    wavePattern(5, 10);

    std::cout << "\nTesting Sandglass Pattern:\n";
    sandglassPattern(5);

    std::cout << "\nTesting Spiral Pattern:\n";
    spiralPattern(5);

    std::cout << "\nTesting Checkerboard Pattern:\n";
    checkerboardPattern(5, 5);

    std::cout << "\nTesting Heart Pattern using Stars:\n";
    heartPattern(5);

    std::cout << "\nTesting Cross Pattern:\n";
    crossPattern(5);

    std::cout << "\nTesting Christmas Tree Pattern:\n";
    christmasTreePattern(5);

    std::cout << "\nTesting Hourglass Pattern:\n";
    hourglassPattern(5);

    std::cout << "\nTesting Diagonal Zig-Zag Pattern:\n";
    diagonalZigZagPattern(5);
}


int main() {
    testPatterns();
    return 0;
}
