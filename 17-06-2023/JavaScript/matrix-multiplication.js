const matrixA = [
	[1, 2, 3, 4, 5],
	[6, 7, 8, 9, 10],
	[11, 12, 13, 14, 15],
	[16, 17, 18, 19, 20],
	[21, 22, 23, 24, 2]
];

const matrixB = [
	[25, 24, 23, 22, 21],
	[20, 19, 18, 17, 16],
	[15, 14, 13, 12, 11],
	[10, 9, 8, 7, 6],
	[5, 4, 3, 2, 1]
];


function addMatrix(matrixA, matrixB, size){
	let sum=[];
	for (let i=0; i<size; i++){
		let row=[];
		for(let j=0; j<size; j++){
	    row.push(matrixA[i][j] + matrixB[i][j]);
		}
		sum.push(row);
	}
	return sum;
}

function printMatrix(matrix){
	for (let i = 0; i < matrix.length; i++) {
			console.log(matrix[i].join(' '));
	}
}
function activateDiagonals(matrix, size){
	for (let i=0; i<size; i++){
		for(let j=0; j<size; j++){
			if(i==j){
				if(matrix[i][j] < 10){
					matrix[i][j] = 0;
				}
			}
		}
	}
	return matrix;
}

function activateBoundaryElements(matrix,size){
	for (let i=0; i<size; i++){
		for(let j=0; j<size; j++){
			if(i==0 || i==(size - 1) || j==0 || j==(size - 1)){
					matrix[i][j]=matrix[i][j] * matrix[i][j];
			}
		}
	}
	return matrix;
}

let sumMatrix=addMatrix(matrixA,matrixB,5);
let diagonalActivatedMatrix=activateDiagonals(sumMatrix,5);
let activatedMatrix=activateBoundaryElements(diagonalActivatedMatrix,5);
printMatrix(activatedMatrix,5);


