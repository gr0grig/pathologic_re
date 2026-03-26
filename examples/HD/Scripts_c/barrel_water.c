// @IMPORTS: SetVisibility/1,Hold/0,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,PlaySound/1,SendWorldWndMessage/1,Sleep/1,CreateIntVector/1,SendWorldWndMessage/2
// @STRINGS: W:bottle_empty|W:Category|A:GetItemCount|A:GetItem|A:GetItemID|A:GetItemAmount|A:RemoveItem|W:bottle_water|A:SetItemName|W:fill|A:add|A:AddItem|A:DropItems
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0xb vars=object
// @PE: 0x0

task_0_event_0(var_0_object)
{
	var_1_int = 0; var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_object = Obj(); var_7_int = 0; var_8_int = 0; var_9_object = Obj(); var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_object = Obj(); var_16_int = 0; var_17_int = 0; var_18_object = Obj();
	GetInvItemByName(var_10_int, "bottle_empty");
	GetInvItemProperty(var_11_int, var_10_int, "Category");
	@@var_0_object:GetItemCount(var_12_int, var_11_int);
	var_14_int = 0;
	
Label_22:
	var_21_bool = var_14_int < var_12_int;
	if(var_21_bool != 0) {
		@@var_0_object:GetItem(var_15_object, var_14_int, var_11_int);
		@@var_15_object:GetItemID(var_16_int);
		var_22_bool = var_16_int == var_10_int;
		if(var_22_bool != 0) {
			@@var_0_object:GetItemAmount(var_17_int, var_14_int, var_11_int);
			(int)0 = (int)0 + var_17_int;
			@@var_0_object:RemoveItem(var_14_int, var_17_int, var_11_int);
			var_12_int = var_12_int + (int)-1;
		} else {
			var_14_int = var_14_int + (int)1;
	}
		var_25_int = var_13_int;
		if(var_25_int != 0) {
			EventDisable(0);
			CreateInvItem(var_18_object);
			@@var_18_object:SetItemName("bottle_water");
			var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0;
			var_0_object = var_27_object;
			var_18_object = var_28_object;
			var_13_int = var_29_int;
			func_95(var_27_object, var_28_object, var_29_int);
			PlaySound("fill");
			SendWorldWndMessage((int)5);
			Sleep((int)1);
			EventEnable(0);
			var_18_object = 0;
		} else {
			var_46_int = 0;
			func_73((int)400);
		}
		var_15_object = 0;
		goto Label_22;
	}
	return 18;
	
}


main()
{
	func_10();
	SetVisibility((bool)1);
	
Label_6:
	Hold();
	goto Label_6;
}
EMIT "Return(); Pop(0)";


func_73(var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj();
	CreateIntVector(var_48_object);
	@@var_48_object:add(var_46_int);
	SendWorldWndMessage((int)200, var_48_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10()
{
	return 0;
}


func_83(var_38_int, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj();
	CreateIntVector(var_41_object);
	@@var_41_object:add(var_38_int);
	@@var_41_object:add(var_39_int);
	SendWorldWndMessage((int)3, var_41_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_95(var_27_object, var_28_object, var_29_int)
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0;
	@@var_28_object:GetItemID(var_33_int);
	GetInvItemProperty(var_34_int, var_33_int, "Category");
	@@var_27_object:AddItem(var_35_bool, var_28_object, var_34_int, var_29_int);
	var_37_bool = var_35_bool == 0; //@nz
	if(var_37_bool != 0) {
		@@var_27_object:DropItems(var_28_object, var_29_int);
	} else {
		var_38_int = 0; var_39_int = 0;
		var_33_int = var_38_int;
		var_29_int = var_39_int;
		func_83(var_38_int, var_39_int);
	}
	return 6;
	
}


