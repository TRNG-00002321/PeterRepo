import pandas as pd

import pandas as pd
df = pd.read_json('data.json')
# print(df.to_string())
print(df)
print(df.head(12))

new_df = df.dropna()
df.dropna(inplace = True)
print(df)
print(new_df)