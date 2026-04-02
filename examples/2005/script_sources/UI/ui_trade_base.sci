include ui_std.sci

const int c_iTradeSlotsNumber = 18;

int GetLeftSlotByMessage(int iMessage, string strSender) {
	for (int i = 0; i < c_iTradeSlotsNumber; ++i) {
		if (strSender == GetLeftTradeSlotWndName(i)) {
			return i;
		}
	}
	return -1;
}

int GetRightSlotByMessage(int iMessage, string strSender) {
	for (int i = 0; i < c_iTradeSlotsNumber; ++i) {
		if (strSender == GetRightTradeSlotWndName(i)) {
			return i;
		}
	}
	return -1;
}

float GetTradeSellFactor(object actor, int iDay, int iTradeType) {
	if (iTradeType != 0)
		return 1;
	float sell_factor = 1;
	for (int i = 1; i <= iDay; ++i) {
		bool bHas;
		actor->HasProperty("sellf" + i, bHas);
		if (bHas)
			actor->GetProperty("sellf" + i, sell_factor);
	}
	return sell_factor / 100;
}

float GetTradeBuyFactor(object actor, int iDay, int iTradeType) {
	if (iTradeType != 0)
		return 1;
	float buy_factor = 1;	
	for (int i = 1; i <= iDay; ++i) {
		bool bHas;
		actor->HasProperty("buyf" + i, bHas);
		if (bHas)
			actor->GetProperty("buyf" + i, buy_factor);
	}
	return buy_factor / 100;
}

int GetTradeType() {
	object container;
	@GetContainer(container);
	bool bHas;
	container->HasProperty("barter", bHas);
	if (!bHas) return 0;
	int iType;
	container->GetProperty("barter", iType);
	return iType;
}