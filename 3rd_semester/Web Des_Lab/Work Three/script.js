document.addEventListener("DOMContentLoaded", function() {
    const button = document.getElementById("movingButton");

    button.addEventListener("mouseenter", function() {
        const x = Math.floor(Math.random() * (window.innerWidth - button.clientWidth));
        const y = Math.floor(Math.random() * (window.innerHeight - button.clientHeight));
        button.style.left = x + 'px';
        button.style.top = y + 'px';
    });
});