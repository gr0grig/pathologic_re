// @IMPORTS: SetVisibility/1,SetTimeEvent/2,Hold/0,SetUsable/1,StopGroup0/0,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,PlaySound/1,SendWorldWndMessage/1,Sleep/1,CreateIntVector/1,SendWorldWndMessage/2
// @STRINGS: W:bottle_empty|W:Category|A:GetItemCount|A:GetItem|A:GetItemID|A:GetItemAmount|A:RemoveItem|W:bottle_water|A:SetItemName|W:fill|A:add|A:AddItem|A:DropItems
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_9: op=0x13 vars=int,float
// @EVENT_0: op=0x1c vars=object
// @PE: 0x0,0x13

task_0_event_9(var_0_bool, var_1_int, var_2_float)
{
	var_4_bool = var_1_int == (int)0;
	if(var_4_bool != 0) {
		StopGroup0();
		var_0_bool = true;
	}
	return 0;
}


task_0_event_0(var_0_bool, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_int = 0; var_9_int = 0; var_10_object = Obj(); var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_object = Obj();
	GetInvItemByName(var_11_int, "bottle_empty");
	GetInvItemProperty(var_12_int, var_11_int, "Category");
	@@var_1_object:GetItemCount(var_13_int, var_12_int);
	var_15_int = 0;
	
Label_39:
	var_22_bool = var_15_int < var_13_int;
	if(var_22_bool != 0) {
		@@var_1_object:GetItem(var_16_object, var_15_int, var_12_int);
		@@var_16_object:GetItemID(var_17_int);
		var_23_bool = var_17_int == var_11_int;
		if(var_23_bool != 0) {
			@@var_1_object:GetItemAmount(var_18_int, var_15_int, var_12_int);
			(int)0 = (int)0 + var_18_int;
			@@var_1_object:RemoveItem(var_15_int, var_18_int, var_12_int);
			var_13_int = var_13_int + (int)-1;
		} else {
			var_15_int = var_15_int + (int)1;
	}
		var_26_int = var_14_int;
		if(var_26_int != 0) {
			EventDisable(0);
			CreateInvItem(var_19_object);
			@@var_19_object:SetItemName("bottle_water");
			var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0;
			var_1_object = var_28_object;
			var_19_object = var_29_object;
			var_14_int = var_30_int;
			func_112(var_28_object, var_29_object, var_30_int);
			PlaySound("fill");
			SendWorldWndMessage((int)5);
			Sleep((int)1);
			EventEnable(0);
			var_19_object = 0;
		} else {
			var_47_int = 0;
			func_90((int)400);
		}
		var_16_object = 0;
		goto Label_39;
	}
	return 18;
	
}


main(var_0_bool)
{
	func_27();
	SetVisibility((bool)1);
	SetTimeEvent((int)0, (int)24);
	var_0_bool = false;
	
Label_11:
	Hold();
	var_4_bool = var_0_bool == 0; //@nz
	if(var_4_bool == 1) goto Label_11;
	SetUsable((bool)0);
	return 0;
}


func_112(var_28_object, var_29_object, var_30_int)
{
	var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0;
	@@var_29_object:GetItemID(var_34_int);
	GetInvItemProperty(var_35_int, var_34_int, "Category");
	@@var_28_object:AddItem(var_36_bool, var_29_object, var_35_int, var_30_int);
	var_38_bool = var_36_bool == 0; //@nz
	if(var_38_bool != 0) {
		@@var_28_object:DropItems(var_29_object, var_30_int);
	} else {
		var_39_int = 0; var_40_int = 0;
		var_34_int = var_39_int;
		var_30_int = var_40_int;
		func_100(var_39_int, var_40_int);
	}
	return 6;
	
}


func_90(var_47_int)
{
	var_48_object = Obj(); var_49_object = Obj();
	CreateIntVector(var_49_object);
	@@var_49_object:add(var_47_int);
	SendWorldWndMessage((int)200, var_49_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_27()
{
	return 0;
}


func_100(var_39_int, var_40_int)
{
	var_41_object = Obj(); var_42_object = Obj();
	CreateIntVector(var_42_object);
	@@var_42_object:add(var_39_int);
	@@var_42_object:add(var_40_int);
	SendWorldWndMessage((int)3, var_42_object);
	return 2;
}
EMIT "Stack[-1] = 0";


