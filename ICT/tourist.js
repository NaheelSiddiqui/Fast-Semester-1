// Function to toggle the visibility of the details of each tourist site
function toggleDetails(id) {
  const detailsDiv = document.getElementById(id);
  if (detailsDiv.style.display === "block") {
    detailsDiv.style.display = "none";
  } else {
    detailsDiv.style.display = "block";
  }
}

function hideDiv(id) {
  const div = document.getElementById(id);
  if (div.style.display === "none") {
    div.style.display = "block";
  } else {
    div.style.display = "none";
  }
}