# Import the module
import instaloader

# Create an instance of Instaloader class
bot = instaloader.Instaloader()

# Load a profile from an Instagram handle
profile = instaloader.Profile.from_username(bot.context, 'amandhattarwal')

print(type(profile))

print("\n--------------------------------------------------------------------------------")
print("Username: ", profile.username)
print("User ID: ", profile.userid)
print("Number of Posts: ", profile.mediacount)
print("Followers: ", profile.followers)
print("Followees: ", profile.followees)
print("Bio: ", profile.biography,profile.external_url)
print("--------------------------------------------------------------------------------\n")