include game_ext.sci

const float c_fRatio = 3;

void ProcessRepair(object actor)
{
	object items = CreateObjectVector();
	object item_container, item_index;
	@CreateIntVector(item_container);
	@CreateIntVector(item_index);
	object prices;
	@CreateIntVector(prices);
	
	int iContainerCount;
	actor->GetSubContainerCount(iContainerCount);
	for (int n = 0; n < iContainerCount; ++n) {
		int iCount;
		actor->GetItemCount(iCount, n);
		for (int i = 0; i < iCount; ++i) {
			object item;
			actor->GetItem(item, i, n);
			int id;
			item->GetItemID(id);
			bool bHasDurability;
			@HasInvItemProperty(bHasDurability, id, "HasDurability");
			if (bHasDurability) {
				item->HasProperty(bHasDurability, "durability");
				if (bHasDurability) {
					int iDurability;
					item->GetProperty(iDurability, "durability");
					if (iDurability < 100 && FilterRepairItem(item)) {
						items->add(item);
						item_container->add(n);
						item_index->add(i);
						float fItemPrice = GetItemPrice(item, 0);
						int iPrice = fItemPrice * (1.0 + (c_fRatio - 1) * iDurability / 100.0) * (100 - iDurability) / 300;
						if (!iPrice)
							iPrice = 1;
						prices->add(iPrice);
					}
				}
			}
		}
	}

	object sel;
	@CreateIntVector(sel);
	@ChooseItem(items, sel, prices, "repair.xml");

	int iCount;
	sel->size(iCount);
	if (!iCount)
		return;

	int iTotalSum = 0;
	for (int i = 0; i < iCount; ++i) {
		int iSelIndex;
		sel->get(iSelIndex, i);
		int iPrice;
		prices->get(iPrice, iSelIndex);
		iTotalSum += iPrice;
	}

	int iMoney;
	actor->GetProperty("money", iMoney);
	
	iMoney -= iTotalSum;
	if (iMoney < 0)
		return;

	actor->SetProperty("money", iMoney);

	for (int i = 0; i < iCount; ++i) {
		int iSelIndex;
		sel->get(iSelIndex, i);
		int iContainer, iIndex;
		item_container->get(iContainer, iSelIndex);
		item_index->get(iIndex, iSelIndex);

		object item;
		actor->GetItem(item, iIndex, iContainer);
		item->SetProperty("durability", 100);
		actor->SetItem(item, 1, iIndex, iContainer);
	}
}