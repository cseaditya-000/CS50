from groq import Groq#API Key 

# client = Groq(api_key="")

user_prompt = input("Prompt: ")
system_prompt = "Limit your answer to one paragraph. Act like my cute dog."

response = client.chat.completions.create(
    model="llama-3.1-8b-instant",
    messages=[
        {"role": "system", "content": system_prompt},
        {"role": "user", "content": user_prompt}
    ]
)

print(response.choices[0].message.content)