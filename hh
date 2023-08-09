local function callback(Text)
 if Text == "Yea" then
  print ("loadstring(game:HttpGet('https://pastebin.com/raw/Wqxzdi1q'))()")
elseif Text == ("No") then
 print ("No")
 end
end

local NotificationBindable = Instance.new("BindableFunction")
NotificationBindable.OnInvoke = callback
--
game.StarterGui:SetCore("SendNotification",  {
 Title = "Anti Ban Script";
 Text = "Loads Anti Ban Script";
 Icon = "";
 Duration = 5;
 Button1 = "Yes";
 Button2 = "No";
 Callback = NotificationBindable;
})
