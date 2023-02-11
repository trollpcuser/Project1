function submitForm() {
    const username = document.getElementById("username").value;
    const password = document.getElementById("password").value;
    const message = document.getElementById("message");
  
    if (username === "admin" && password === "password") {
      message.innerHTML = "Login successful!";
    } else {
      message.innerHTML = "Login failed. Please try again.";
    }
  }
  