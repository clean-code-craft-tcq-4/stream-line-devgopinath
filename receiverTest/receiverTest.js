const { expect } = require('chai');
const sender = require('../receiver/receiver');
let senderReadings="temperature:36,charge-rate:83,temperature:15,charge-rate:77,temperature:35,charge-rate:93,temperature:42,charge-rate:86,temperature:21,charge-rate:49,temperature:27,charge-rate:62,temperature:9,charge-rate:90,temperature:26,charge-rate:63,temperature:26,charge-rate:40,temperature:36,charge-rate:72,temperature:18,charge-rate:11,";
describe('reading calculation', () => {
  
    it('should exists', () => {
        expect(sender.reading(senderReadings)).to.exist;
    });
});

describe('findAverage', () => {
    it('should exists', () => {
        expect(sender.findAverage).to.exist;
    });
    it('should return exect value', () => {
        expect(sender.findAverage).to.exist;
    });
});

describe('findMax', () => {
    it('should exists', () => {
        expect(sender.maxmin).to.exist;
    });

});

