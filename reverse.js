function reverse(A) {
    let copyA = new Array(A.length); 

    let j = 0;
    for (let i = A.length - 1; i >= 0; i--) {
        copyA[j] = A[i];
        j++;
    }

    return copyA;
}



// tests
let a = [1, 4, 5, 6];
console.log(reverse(a));