
bool HasHealth() {
	bool bHasHealth;
	@HasProperty("health", bHasHealth);
	return bHasHealth;
}

bool HasHunger() {
	bool bHasHunger;
	@HasProperty("hunger", bHasHunger);
	return bHasHunger;
}

bool HasImmunity() {
	bool bHasImmunity;
	@HasProperty("immunity", bHasImmunity);
	return bHasImmunity;
}

bool HasTiredness() {
	bool bHasTiredness;
	@HasProperty("tiredness", bHasTiredness);
	return bHasTiredness;
}

void SetHealth(float fHealth)
{
	if (fHealth > 1)
		@SetProperty("health", 1);
	else
	if (fHealth < 0)
		@SetProperty("health", 0);
	else
		@SetProperty("health", fHealth);
}

void SetHunger(float fHunger)
{
	if (fHunger > 1)
		@SetProperty("hunger", 1);
	else
	if (fHunger < 0)
		@SetProperty("hunger", 0);
	else
		@SetProperty("hunger", fHunger);
}

float GetHealth() 
{
	float fHealth;
	@GetProperty("health", fHealth);
	return fHealth;
}

float GetHunger() 
{
	float fHunger;
	@GetProperty("hunger", fHunger);
	return fHunger;
}


maintask TItemActionBase
{
	void init(void) {
		PerformItemInit();
	}
}
