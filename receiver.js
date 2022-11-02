let temperatureReadings=[];
let chargeRateReadings=[];
function reading(readings){
    let splitvalues = readings.split(',');
    let tempValue;
    let chargeRateValue;
    splitvalues.forEach((number,i) => {
        if (i % 2 === 0) {
            tempValue=splitvalues[i].substring(12);
            temperatureReadings.push(Number(tempValue));
        }else{
            chargeRateValue=splitvalues[i].substring(12);
        chargeRateReadings.push(Number(chargeRateValue)); 
        }
        
      });
    findMax(temperatureReadings,'Max Temperature');
    findMin(temperatureReadings,'Min Temperature');
    findMax(chargeRateReadings,'Max ChargeRate');
    findMin(chargeRateReadings,'Min ChargeRate');
    findAverage(temperatureReadings,'Average Temperature');
    findAverage(chargeRateReadings,'Average ChargeRate');
    }

    function findMax(readings,commandLine){
       let max = Math.max( ...readings );
        printStatement(commandLine+ max)
        return max;
    }
    function findMin(readings,commandLine){
        let min = Math.min( ...readings );
        printStatement(commandLine+ min)
        return min;
    }

    function findAverage(readings,commandLine){
       let lastFiveValues = readings.slice(-5)
       let total=0;
       for(let i=0;i<lastFiveValues.length;i++){
        total=total+lastFiveValues[i];
       }
       let average=total/5;
       printStatement(commandLine+ average);
    }

  function printStatement(statement){
        console.log(statement)
    }

    module.exports = {
        findMax,
        findMin,
        findAverage,
        printStatement,
        reading
    };

   