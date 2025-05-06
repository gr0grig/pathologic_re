main()
{
	var_0_string = ""; var_1_string = ""; // 0x0 PushV
	RemoveRTEnvelope(); // 0x1 Func
	RemoveEnvelope(); // 0x3 Func
	SetDeathState(); // 0x5 Func
	var_2_string = "animation"; // 0x7 PushS
	GetProperty(var_2_string, var_1_string); // 0x8 Func
	var_3_string = "all"; // 0xa PushS
	LockAnimationEnd(var_3_string, var_1_string); // 0xb Func
	
Label_13:
	Hold(); // 0xd Func
	goto Label_13; // 0xf Jump
}


