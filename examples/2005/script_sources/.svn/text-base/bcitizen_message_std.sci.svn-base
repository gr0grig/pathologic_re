include std.sci

int citFilterMessage(string strMessage, object actor)
{
	if (strMessage == "killme") {
		return citFilterKillmeMessage(actor);
	}
	
	return 0;
}

void citHandleMessage(string strMessage, object actor)
{
	if (strMessage == "killme") {
		citHandleKillmeMessage(actor);
		return;
	}
}
