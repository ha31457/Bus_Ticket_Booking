Here is your complete, step-by-step **Video Recording Flow & Script** tailored for your hackathon submission (Target duration: **3:30 – 4:30 minutes**).

---

# 📹 IntentGate Demo Video Flow & Script

---

## 🎬 Section 1: The Hook & Market Problem (0:00 - 0:45)

**[ON SCREEN]**: Title Slide or Camera / Full Screen Dashboard (`http://localhost:3000`)
**[ACTION]**: Show the dashboard landing page with glowing metrics.

> 🎙️ **Voiceover**:
> *"We are entering the era of Delegated AI Commerce — where AI shopping assistants don't just recommend products; they autonomously execute financial payments on behalf of users.*
>
> *But giving probabilistic AI agents financial authority creates massive real-world risks:*
> * 1. **Consumer Credit Risk**: If an agent overspends beyond the user's budget and the transaction bounces, it triggers bank penalties and directly degrades the user's **CIBIL credit score**.*
> * 2. **Infrastructure Strain**: Unchecked AI retries and failed calls flood gateways like **Razorpay** and issuing banks with unnecessary traffic.*
> * 3. **Legal Liability**: If an agent spends ₹15,000 more than approved, the AI company faces immediate lawsuits and customer loss.*
>
> *Meet **IntentGate**: The Trust, Verification & Policy Infrastructure for Delegated AI Commerce."*

---

## 🛡️ Section 2: Introducing IntentGate (0:45 - 1:15)

**[ON SCREEN]**: Click on **Intent Firewall Pipeline** tab.

> 🎙️ **Voiceover**:
> *"IntentGate operates on a simple principle: **LLMs propose. Policies constrain. APIs execute. Audit remembers.**
>
> *It sits between probabilistic AI agents and payment APIs like Razorpay, acting as a zero-trust cryptographic firewall."*

---

## ⚡ Section 3: Live Demo — Happy Path & Live Razorpay Checkout (1:15 - 2:30)

**[ON SCREEN]**: **Intent Firewall Pipeline** screen.
**[ACTION]**: 
1. Click **Sample: ₹70k Laptop** button.
2. Click **Extract Intent & Generate HMAC Fingerprint**.

> 🎙️ **Voiceover**:
> *"Let's test it live. The user asks the agent: 'Find me a programming laptop under ₹70,000. Buy it if it meets my requirements.'
> 
> *Google Gemini 3.5 Flash extracts the structured intent, and IntentGate immediately generates a **Salted HMAC-SHA256 Fingerprint**. This locks the canonical identity of the user's intent to prevent prompt tampering.*
> 
> *Notice our **Assumption Ledger**: hard constraints like max budget ₹70,000 are enforced strictly, while soft inferences like preferred RAM are tracked as advisory metadata."*

**[ACTION]**:
1. Leave selected product as **DevBook Pro 15 (₹68,999)**.
2. Click **Evaluate IntentGate Policy Engine & Execute Transaction**.

> 🎙️ **Voiceover**:
> *"Now the agent submits the purchase proposal for ₹68,999. IntentGate evaluates budget drift, catalog freshness, idempotency, and agent trust.
> 
> *The decision is **ALLOW**! An authentic **Razorpay Order ID** (`order_TXz...`) is generated live via Razorpay's API."*

**[ACTION]**:
1. Click the glowing **`[ 💳 Open Razorpay Payment UI ]`** button.
2. Show the official **Razorpay Standard Checkout Modal** popping up on screen!

> 🎙️ **Voiceover**:
> *"Because IntentGate seamlessly integrates with Razorpay's Checkout SDK, we can trigger the official Razorpay payment modal live on screen with the created order ID!"*

---

## 🧪 Section 4: Chaos Lab & Blocking Budget Drift (2:30 - 3:45)

**[ACTION]**:
1. Close the modal, go to **Chaos Lab** tab in navigation.
2. Enable **Agent Price Surge / Budget Drift** scenario toggle.
3. Switch back to **Intent Firewall Pipeline** tab.
4. Click **Sample: Budget Drift (+₹2,999)** or select **UltraDev X 16 (₹74,999)**.
5. Click **Evaluate IntentGate Policy Engine & Execute Transaction**.

> 🎙️ **Voiceover**:
> *"Now let's simulate an attack or AI hallucination in our **Chaos Lab**. What if the agent tries to buy a laptop for ₹74,999 — exceeding the user's explicit ₹70,000 limit by ₹4,999?
>
> *Watch what happens when we execute: **POLICY DECISION: BLOCK!**
> 
> *IntentGate instantly intercepts the transaction before any money touches Razorpay's API. We prevent the credit score bounce, shield Razorpay and the bank from unnecessary transaction processing, and protect the AI company from financial liability."*

---

## 📜 Section 5: Audit Replay & Agent Passports (3:45 - 4:15)

**[ACTION]**:
1. Click **Transaction Replay** tab.
2. Show the step-by-step cryptographic audit event timeline (`INTENT_VERIFIED`, `POLICY_EVALUATION`, `TRANSACTION_BLOCKED`).
3. Click **Agent Passports** tab.
4. Show Agent Alpha's Trust Score (e.g. 94 Trust Score, Blast Radius Protection).

> 🎙️ **Voiceover**:
> *"Every single decision is logged on an **Immutable Transaction Replay Timeline**, providing auditability for financial disputes. Furthermore, **Agent Passports** track historical compliance, auto-adjusting agent single-transaction limits and trust scores based on behavior."*

---

## 🏁 Section 6: Conclusion (4:15 - 4:30)

**[ON SCREEN]**: Overview Dashboard tab showing summary stats & protected risk exposure.

> 🎙️ **Voiceover**:
> *"IntentGate brings zero-trust cryptographic security to the next decade of agentic AI commerce.
> 
> *Thank you!"*

---

### 💡 Quick Recording Checklist
1. Ensure both **FastAPI backend** (`http://localhost:8000`) and **Next.js frontend** (`http://localhost:3000`) are running.
2. Keep your mouse movements smooth and deliberate when clicking buttons.
3. Have your browser zoomed to ~100% or 110% so text and modal details look crisp.
