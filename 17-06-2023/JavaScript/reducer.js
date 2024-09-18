let required=84;
let reducers=[500,200,100,50,10,5,2,1];

function reduceBy(required, reducers, map , i){
	let num = Math.floor(required / reducers[i]);
	map[reducers[i]] = num;

	let remaining = (required - (num * reducers[i]));
	
	if(remaining == 0){
		return map;
	}
	
	return reduceBy(remaining, reducers, map, i + 1);
}

function reduceAmount(required, reducers){
	let map={};
  return reduceBy(required, reducers, map, 0);
}

const map=reduceAmount(required,reducers);
console.log(map);