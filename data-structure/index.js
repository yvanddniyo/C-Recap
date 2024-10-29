
const bubbleSorts = (arr) => {

let arrLength = arr.length - 1;
let sorted = false;

while(!sorted) {
    sorted = true;
    for(let i = 0; i < arrLength; i++) {
        if(arr[i] > arr[i + 1]) {
            sorted = false;
            [arr[i], arr[i +1 ]] = [arr[i + 1], arr[i]]
        }
    }
}
return arr;
}

const arr= [8, 5, 6, 7, -8, 1, -10];
const result = bubbleSorts(arr);
console.log(result);