# Publishing this Portfolio to GitHub — Step-by-Step Guide

This guide assumes no prior GitHub experience and uses **GitHub Desktop**, the easiest way to publish a folder on Windows without typing Git commands.

---

## Step 0 — Handle secrets first (important)

The `Embedded3` experiments contain hardcoded WiFi SSID/password strings and a ThingSpeak API key directly in the `.ino` files. Once pushed to a public GitHub repository, this history is visible to anyone, forever (even if you edit the file later, the old commit still holds it).

Before continuing:
1. Open each `.ino` file in `Embedded3/` in the Arduino IDE or Notepad.
2. Replace the real WiFi SSID, password, and ThingSpeak API key with placeholders, e.g.:
   ```cpp
   const char* ssid = "YOUR_WIFI_SSID";
   const char* password = "YOUR_WIFI_PASSWORD";
   const char* apiKey = "YOUR_THINGSPEAK_API_KEY";
   ```
3. Save the files.

If you'd rather keep the repository private (visible only to you), you can skip this — see Step 4 for the private option.

---

## Step 1 — Create a GitHub account

1. Go to [github.com](https://github.com) and click **Sign up**.
2. Enter your email, create a password, and choose a username.
3. Verify your email address when GitHub sends the confirmation.

---

## Step 2 — Install GitHub Desktop

1. Download it from [desktop.github.com](https://desktop.github.com).
2. Run the installer — it installs automatically, no configuration needed.
3. Open GitHub Desktop and sign in with the GitHub account from Step 1 (**File → Options → Accounts → Sign in**).

---

## Step 3 — Turn this folder into a repository

1. In GitHub Desktop, go to **File → Add Local Repository**.
2. Click **Choose...** and select your `Portfolio` folder.
3. GitHub Desktop will say this folder is not yet a Git repository and offer to **create a repository here** — click that link.
4. In the creation dialog:
   - **Name**: e.g. `embedded-systems-portfolio`
   - Leave **Git ignore** and **License** as "None" (this folder already has a `.gitignore`)
   - Click **Create Repository**

---

## Step 4 — Publish it to GitHub

1. Back in the main GitHub Desktop window, you'll see all your files listed as changes ready to commit.
2. At the bottom left, type a commit message, e.g. `Initial commit: embedded systems portfolio`.
3. Click **Commit to main**.
4. Click **Publish repository** in the top toolbar.
5. In the publish dialog:
   - Confirm the repository name.
   - **Keep this code private** — check this box if you want the repo visible only to you (recommended if you skipped Step 0). Uncheck it to make the portfolio public.
6. Click **Publish Repository**.

Your portfolio is now live at `https://github.com/<your-username>/embedded-systems-portfolio`.

---

## Step 5 — Making future updates

Whenever you edit or add files in the `Portfolio` folder:
1. Open GitHub Desktop — it automatically detects the changes.
2. Type a short commit message describing what changed.
3. Click **Commit to main**, then click **Push origin** (top toolbar) to upload the changes to GitHub.

---

## Optional — Add a profile-level README

To make this portfolio show up nicely on your GitHub profile page, you can also create a special repository named exactly `<your-username>/<your-username>` with its own `README.md` — GitHub will display it at the top of your profile. Ask if you'd like help setting that up.
