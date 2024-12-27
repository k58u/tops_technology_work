
def log_transaction(transaction_details):
    """Log a transaction to the log file."""
    with open('transactions.log', 'a') as log_file:
        log_file.write(transaction_details + '\n')
