# 🧰 System Utility Tool (Qt)

A lightweight Qt-based system utility for managing packages and basic system security settings on Arch-based and other Linux distributions.

---

## ⚡ Features

- 📦 Install / Remove packages using `pacman`
- 📋 Read package status (installed / not installed)
- 🔐 Disable PAM account lockout (faillock)
- 🔄 Restore PAM defaults
- 🧠 Reset failed login attempts
- 📊 Real-time status updates in status bar
- 🔒 Runs privileged operations using `pkexec`

---

## 🖥️ Supported Systems

This tool is designed for:

- CachyOS (primary target)
- Arch Linux (and Arch-based distributions using pacman + systemd + PAM faillock)
- Manjaro (partial support, depending on PAM configuration)

---

## ⚠️ NB! Important Notice

**This application does NOT currently support all Linux distributions.**


---

## 🔐 PAM Features

The tool can manage:

### Disable lockout
```bash
deny = 0