import os
import openai

# Set your API key (retrieved from environment variable)
openai.api_key = os.getenv("OPENAI_API_KEY")

prompt = input("Enter your prompt: ")

response = openai.chat.completions.create(
    model="gpt-3.5-turbo",
    messages=[
        {"role": "system", "content": "You are a helpful coding assistant."},
        {"role": "user", "content": prompt}
    ],
    temperature=0.5,
    max_tokens=500
)

print("\nGenerated Code:\n")
print(response.choices[0].message.content.strip())
