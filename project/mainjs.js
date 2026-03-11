// Intersection Observer for fade-in animations
const observer = new IntersectionObserver((entries) => {
    entries.forEach(entry => {
        if (entry.isIntersecting) {
            entry.target.classList.add('visible');
        }
    });
}, { threshold: 0.1 });

document.querySelectorAll('.fade-in').forEach(el => observer.observe(el));

// Form submit handler
function handleSubmit(e) {
    e.preventDefault();
    const btn = e.target;
    btn.textContent = '✓ Надіслано! Ми зв\'яжемось з вами.';
    btn.style.background = '#20bf6b';
    setTimeout(() => {
        btn.innerHTML = 'Надіслати запит <svg width="16" height="16" viewBox="0 0 16 16" fill="none"><path d="M3 8h10M9 4l4 4-4 4" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"/></svg>';
        btn.style.background = '';
    }, 3000);
}

// Nav active link highlight on scroll
const sections = document.querySelectorAll('section[id]');
const navLinks = document.querySelectorAll('.nav-links a');
window.addEventListener('scroll', () => {
    let current = '';
    sections.forEach(s => {
        if (window.scrollY >= s.offsetTop - 100) current = s.id;
    });
    navLinks.forEach(a => {
        a.style.color = a.getAttribute('href') === '#' + current ? 'var(--accent)' : '';
    });
});