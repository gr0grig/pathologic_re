include item_equip_base.sci

// CONSTANTS
const float c_fHitToArmor = 0.75;
// CONSTANTS

var int m_iLastArmorMod;
var int m_iLastArmorFireMod;
var int m_iLastArmorPhysMod;
var int m_iLastArmorBulletMod;
var int m_iLastArmorDiseaseMod;
var int m_iLastVisibilityMod;

void UpdateProperties(int iDurability) {
	m_iLastArmorMod = ChangeProperty("armor", m_iLastArmorMod, iDurability, c_iArmorIncrease);
	m_iLastArmorFireMod = ChangeProperty("armor_fire", m_iLastArmorFireMod, iDurability, c_iArmorFireIncrease);
	m_iLastArmorPhysMod = ChangeProperty("armor_phys", m_iLastArmorPhysMod, iDurability, c_iArmorPhysIncrease);
	m_iLastArmorBulletMod = ChangeProperty("armor_bullet", m_iLastArmorBulletMod, iDurability, c_iArmorPhysIncrease);
	m_iLastArmorDiseaseMod = ChangeProperty("armor_disease", m_iLastArmorDiseaseMod, iDurability, c_iArmorDiseaseIncrease);
}

int ChangeProperty(string prop, int iLastVal, int iDurability, int iAmount) {
	int iNewVal = iAmount * (iDurability / 100.0);
	if (iNewVal != iLastVal) {
		ModPropertyI(prop, iNewVal - iLastVal);
	}
	return iNewVal;
}

void OnHit(object actor, int iHitType, float fDamage, float fHit)
{
	if (iHitType == c_iHitTypeDisease) {
	}
	else {
		int iArmor = m_iLastArmorMod;
		if (iHitType == c_iHitTypeFire) {
			iArmor += m_iLastArmorFireMod;
		}
		else if (iHitType == c_iHitTypeBullet) {
			iArmor += m_iLastArmorBulletMod;
		}
		else  {
			iArmor += m_iLastArmorPhysMod;
		}
		int iSumArmor;
		@GetProperty("armor", iSumArmor);
		float k;
		if (!iSumArmor) {
			k = 1;
		}
		else {
			k = (float)iArmor / iSumArmor;
		}
		k *= c_fHitToArmor;

		if (k > 0) {
			int iItem;
			@GetItemPosByID(iItem, ItemID1, ItemID2, Container);
			if (iItem != -1) {
				object item;
				@GetItem(item, iItem, Container);
				bool bHas;
				item->HasProperty(bHas, "durability");
				if (bHas) {
					int iUpdateAmount = (int)(k * fHit * 100.0);

					int iDurability;
					item->GetProperty(iDurability, "durability");
					iDurability = clampi(iDurability - iUpdateAmount, 0, 100);
					item->SetProperty("durability", iDurability);
					@SetItem(item, 1, iItem, Container);

					UpdateProperties(iDurability);
				}
			}
		}		
	}
}

void OnHit2(object actor, int iHitType, float fDamage, float fHit, Vector vPos, Vector vDir)
{
	OnHit(actor, iHitType, fDamage, fHit);
}

task TBaseEffect : TEquippable
{
	var bool m_bStop;

	void init(void) {
		m_bStop = false;
		m_iLastArmorMod = 0;
		m_iLastArmorFireMod = 0;
		m_iLastArmorPhysMod = 0;
		m_iLastArmorBulletMod = 0;
		m_iLastArmorDiseaseMod = 0;
		m_iLastVisibilityMod = 0;

		super.init();

		SetInitProperties();

		float fLastTime;
		@GetGameTime(fLastTime);
		
		const float fUpdateTime = c_fDecayTime * 24.0 / 100;

		for (;;) {
			float fTime;
			@GetGameTime(fTime);
			
			float fDeltaTime = fTime - fLastTime;
			int iUpdateAmount = fDeltaTime / fUpdateTime;
			if (iUpdateAmount > 0) {
				fLastTime = fTime - fDeltaTime % fUpdateTime;

				int iItem;
				@GetItemPosByID(iItem, ItemID1, ItemID2, Container);
				if (iItem != -1) {
					object item;
					@GetItem(item, iItem, Container);
					bool bHas;
					item->HasProperty(bHas, "durability");
					int iDurability;
					if (bHas) {
						item->GetProperty(iDurability, "durability");
						iDurability = clampi(iDurability - iUpdateAmount, 0, 100);
					}
					else {
						iDurability = 100;
					}
					item->SetProperty("durability", iDurability);
					@SetItem(item, 1, iItem, Container);

					UpdateProperties(iDurability);
				}
			}
			@sync();
			if (m_bStop)
				break;
		}
	}
	
	void OnDispose(void) {
		ModPropertyI("armor", -m_iLastArmorMod);
		ModPropertyI("armor_fire", -m_iLastArmorFireMod);
		ModPropertyI("armor_phys", -m_iLastArmorPhysMod);
		ModPropertyI("armor_bullet", -m_iLastArmorBulletMod);
		ModPropertyI("armor_disease", -m_iLastArmorDiseaseMod);

		m_bStop = true;
	}
	
	void SetInitProperties(void) {
		int iItem;
		@GetItemPosByID(iItem, ItemID1, ItemID2, Container);
		if (iItem != -1) {
			object item;
			@GetItem(item, iItem, Container);
			bool bHas;
			item->HasProperty(bHas, "durability");
			int iDurability;
			if (!bHas) {
				iDurability = 100;
				item->SetProperty("durability", iDurability);
				@SetItem(item, 1, iItem, Container);
			}
			else {
				item->GetProperty(iDurability, "durability");
			}

			UpdateProperties(iDurability);
		}
	}
}
