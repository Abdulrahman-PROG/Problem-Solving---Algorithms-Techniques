<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Tower of Hanoi Visualization</title>
<style>
  .peg {
    width: 100px;
    height: 300px;
    background-color: #ccc;
    border-radius: 10px;
    margin: 20px;
    display: inline-block;
  }
  .disk {
    width: 20px;
    height: 20px;
    background-color: #009688;
    border-radius: 50%;
    position: absolute;
    bottom: 10px;
    left: 40px;
    transition: bottom 0.5s;
  }
</style>
</head>
<body>

<div class="peg" id="pegA">
  <div class="disk" id="disk1A"></div>
  <div class="disk" id="disk2A"></div>
  <div class="disk" id="disk3A"></div>
</div>

<div class="peg" id="pegB"></div>

<div class="peg" id="pegC"></div>

<script>
  function moveDisk(source, destination, disk) {
    const sourcePeg = document.getElementById(`peg${source}`);
    const destinationPeg = document.getElementById(`peg${destination}`);
    const diskElement = document.getElementById(`disk${disk}${source}`);
    
    const sourceDiskCount = sourcePeg.childElementCount - 1;
    const destinationDiskCount = destinationPeg.childElementCount - 1;
    
    const newBottom = (destinationDiskCount + 1) * 30;
    
    diskElement.style.bottom = `${newBottom}px`;
    
    destinationPeg.appendChild(diskElement);
  }

  // You can call moveDisk function to simulate the Tower of Hanoi moves.
  // For example:
  // moveDisk('A', 'C', 1); // Move disk 1 from peg A to peg C
</script>

</body>
</html>
