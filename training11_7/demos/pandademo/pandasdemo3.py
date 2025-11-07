import pandas as pd
df = pd.read_csv('data.csv')
print(df.to_string())
print(df)

# # pd.options.display.max_rows = 9999
# df = pd.read_csv('data.csv')
# print(df)
print(df.duplicated())
# new_df = df.dropna()
# df.dropna(inplace = True)
# print(df)
# print(new_df)