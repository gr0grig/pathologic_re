include std.sci

bool EgoistClass(object actor)
{
	if (!HasProperty(actor, "class"))
		return false;
		
	string strCheck;
	@GetProperty("class", strCheck);
	string strClass;
	actor->GetProperty("class", strClass);
	return strClass == strCheck;
}

bool LawEnforcerClass(object actor, bool bDefence)
{
	if (!HasProperty(actor, "class"))
		return false;

	string strClass;
	actor->GetProperty("class", strClass);
	if (strClass == "patrol" || strClass == "sanitar" || strClass == "soldier" || strClass == "woman" ||
		   strClass == "wasted_girl" || strClass == "vaxxabitka" || strClass == "vaxxabit" ||
		   strClass == "little_girl" || strClass == "girl" || strClass == "dohodyaga" || strClass == "nudegirl")
	{
		return true;
	}
	if (bDefence)
		return false;
	return strClass == "worker" || strClass == "butcher" || strClass == "boy" || strClass == "unosha" ||
		   strClass == "wasted_male" || strClass == "alkash" || strClass == "morlok";
}

bool RobocopClass(object actor, bool bDefense)
{
	if (!HasProperty(actor, "class"))
		return false;
		
	string strCheck;
	@GetProperty("class", strCheck);
	string strClass;
	actor->GetProperty("class", strClass);
	
	// always protect NPC from same class
	if (!bDefense && strCheck == strClass)
		return true;

	if (strClass == "rat" )
		return false;
	else
	if (strClass == "rat_big" )
		return false;
	else
	if (strClass == "dog" )
		return false;
	else
	if (strClass == "grabitel") { 
		return false;	
	}
	else
	if (strClass == "bomber") { 
		return false;	
	}
	else
	if (strClass == "sanitar") { 
		return false;	
	}
	else
	if (strClass == "hunter") { 
		return false;	
	}
	else
	if (strClass == "soldier") { 
		return false;	
	}
	return true;
}