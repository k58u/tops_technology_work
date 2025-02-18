        button_frame = tk.LabelFrame(self.root, text="Bill Menu", font=("Arial", 12, "bold"), bg="#074463", fg="gold")
        button_frame.place(x=0, rely=0.83, relwidth=1, height=100)  # Adjusted 'rely' for proper alignment at the bottom.

        tk.Button(button_frame, text="Total", command=self.calculate_total, font=("Arial", 12, "bold"), bg="white", width=15).grid(row=0, column=0, padx=20, pady=10)
        tk.Button(button_frame, text="Generate Bill", command=self.generate_bill, font=("Arial", 12, "bold"), bg="white", width=15).grid(row=0, column=1, padx=20, pady=10)
        tk.Button(button_frame, text="Clear", command=self.clear_data, font=("Arial", 12, "bold"), bg="white", width=15).grid(row=0, column=2, padx=20, pady=10)
        tk.Button(button_frame, text="Exit", command=self.root.quit, font=("Arial", 12, "bold"), bg="white", width=15).grid(row=0, column=3, padx=20, pady=10)
