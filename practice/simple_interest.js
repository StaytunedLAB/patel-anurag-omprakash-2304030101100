const readline = require('readline');

function ask(question) {
  const rl = readline.createInterface({ input: process.stdin, output: process.stdout });
  return new Promise(resolve => rl.question(question, ans => { rl.close(); resolve(ans); }));
}

(async function() {
  const p = await ask('Enter principal amount: ');
  const principal = parseFloat(p);
  const r = await ask('Enter annual interest rate (percent): ');
  const rate = parseFloat(r);
  const t = await ask('Enter time (years): ');
  const time = parseFloat(t);

  if (Number.isNaN(principal) || Number.isNaN(rate) || Number.isNaN(time)) {
    console.log('Invalid input.');
    process.exit(0);
  }

  const simpleInterest = (principal * rate * time) / 100.0;
  const amountCompound = principal * Math.pow(1 + rate / 100.0, time);
  const compoundInterest = amountCompound - principal;

  console.log(`\nSimple Interest: ${simpleInterest.toFixed(2)}`);
  console.log(`Compound Interest: ${compoundInterest.toFixed(2)}`);
  console.log(`Amount after ${time.toFixed(2)} years (compound): ${amountCompound.toFixed(2)}`);
})();