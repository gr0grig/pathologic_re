include rat_base.sci

const float c_fDamageAmount = 0.025;
const float c_fRetreatStopDist = 1500;
const float c_fDeathRepChange = 0;

void RatDamage(object victim)
{
	float fDamage = Damage(victim, c_fDamageAmount, c_iDamageTypePhysical);
	@ReportHit(victim, c_iHitTypeRat, fDamage, c_fDamageAmount);
}

void HandleUse(object actor)
{
	object item;
	@CreateInvItem(item);
	item->SetItemName("rat");
	float fQuality;
	@rand(fQuality, 0.25, 0.5);
	item->SetProperty("quality", fQuality);
	PlayerPutItem(actor, item, 1);

	@RemoveActor(self());	
}
