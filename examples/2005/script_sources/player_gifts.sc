include std.sci
include citymanager_base.sci

// CONSTANTS
const float c_fWalkTimerDelay = 0.1;
const float c_fWalkDistance = 50;
// CONSTANTS

void GenerateRandomGood(string name, int iProb, int iTotal, int iMaxAmount)
{
	if (rndbool(iProb, iTotal)) {
		int iAmount;
		@irand(iAmount, iMaxAmount);
		object item;
		@CreateInvItem(item);
		item->SetItemName(name);
		PlayerAddItem(self(), item, iAmount + 1);
	}
}

void GenerateGood(string name, int iAmount)
{
	object item;
	@CreateInvItem(item);
	item->SetItemName(name);
	PlayerAddItem(self(), item, iAmount);
}

const int c_iWalkTimerID = 1;

maintask TPlayerGifts
{
	var object m_PrevScene;
	var Vector m_vPrevPos;
	var float m_fTicks;
	
	
	void init(void) {
		//@SetTimer(c_iWalkTimerID, c_fWalkTimerDelay);
		@GetScene(m_PrevScene);
		@GetPosition(m_vPrevPos); m_vPrevPos.y = 0;
		for (;;) {
			float fDeltaTime;
			@sync(fDeltaTime);
			Tick(fDeltaTime);
		}
	}

	void Tick(float fDeltaTime) {
		object scene, oscene;
		@GetScene(scene);
		@GetMainOutdoorScene(oscene);
		
		if (oscene != scene)
			return;
		Vector vPos;
		@GetPosition(vPos);
		vPos.y = 0;
		float fDist = VectorDist(vPos, m_vPrevPos);
		if (scene != m_PrevScene || fDist > 1000) {
			m_PrevScene = scene;
			m_vPrevPos = vPos;
			return; // special case
		}
		
		float fScale;
		@rand(fScale, 0.5);
		fScale += 0.5;
		m_fTicks += fScale * fDist / 100.0;
		m_vPrevPos = vPos;
		m_PrevScene = scene;
		
		if (m_fTicks > c_fWalkDistance) {
			GenerateGoods(GetActorRegion());
			m_fTicks = 0;
		}
		
		@SetProperty("walk_distance", 1000 * m_fTicks / c_fWalkDistance); // actually we need 100 to be in percents, 1000 is for smooth indicator moving
	}	
	
	void GenerateGoods(int iRegion) {
	
		if (iRegion == c_iRegion7) { 
			// steppe
			GenerateSteppeGoods();
		}
		else
		if (iRegion >= c_iRegion2 && iRegion <= c_iRegion6) { 
			// downtown
			GenerateDowntownGoods();
		}
		else
		if (iRegion == c_iRegion1 || (iRegion >= c_iRegion8 && iRegion <= c_iRegion14)) {
			// middle town
			GenerateMiddletownGoods();
		}
		else 
		if (iRegion == c_iRegion15 || iRegion == c_iRegion16) {
			// up town
			GenerateUptownGoods();
		}
	}
	
	void GenerateSteppeGoods(void) {
		// flower, peanut, hook
		if (rndbool(7.0 / 50.0)) {
			int iVal;
			@irand(iVal, 3);
			if (iVal == 0)
				GenerateRandomGood("flower", 1, 5, 1);
			else
			if (iVal == 1)
				GenerateRandomGood("peanut", 1, 5, 1);
			else
			if (iVal == 2)
				GenerateRandomGood("hook", 1, 5, 1);
		}
	}
	
	void GenerateDowntownGoods(void) {
		if (rndbool(7.0 / 50.0)) {
			int iVal;
			@irand(iVal, 2);
			if (iVal == 0)
				GenerateRandomGood("beads", 1, 9, 1);
			else
			if (iVal == 1)
				GenerateRandomGood("bracelet", 1, 5, 1);
		}
		else {
			if (rndbool(1.0 / 10.0)) {
				int iVal;
				@irand(iVal, 10);
				PlayerAddMoney(self(), iVal + 1);
			}
			else {
				int iVal;
				@irand(iVal, 3);
				PlayerAddMoney(self(), iVal + 1);
			}
		}
	}
	
	void GenerateMiddletownGoods(void) {
		if (rndbool(7.0 / 50.0)) {
			int iVal;
			@irand(iVal, 3);
			if (iVal == 0)
				GenerateRandomGood("silver_ring", 1, 5, 1);
			else
			if (iVal == 1)
				GenerateRandomGood("gold_ring", 1, 10, 1);
			else
			if (iVal == 2)
				GenerateRandomGood("funduk", 1, 5, 1);
		}
		else {
			if (rndbool(1.0 / 10.0)) {
				int iVal;
				@irand(iVal, 10);
				PlayerAddMoney(self(), iVal + 1);
			}
			else {
				int iVal;
				@irand(iVal, 3);
				PlayerAddMoney(self(), iVal + 1);
			}
		}
	}	
	
	void GenerateUptownGoods(void) {
		if (rndbool(7.0 / 50.0)) {
			int iVal;
			@irand(iVal, 2);
			if (iVal == 0)
				GenerateRandomGood("needle", 1, 6, 1);
			else
			if (iVal == 1)
				GenerateRandomGood("razor", 1, 7, 1);
		}
		else {
			if (rndbool(1.0 / 10.0)) {
				int iVal;
				@irand(iVal, 10);
				PlayerAddMoney(self(), iVal + 1);
			}
			else {
				int iVal;
				@irand(iVal, 3);
				PlayerAddMoney(self(), iVal + 1);
			}
		}
	}		
}
