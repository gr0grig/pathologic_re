// @GLOBALS: 0:bool:,1:int:,2:int:,3:int:,4:object:,5:object:,6:object:,7:object:

maintask task_0
{
	void init(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		object var_31_object; int var_32_int; bool var_33_bool; int var_34_int; bool var_35_bool; cvector var_36_cvector; cvector var_37_cvector; int var_38_int; cvector var_39_cvector; cvector var_40_cvector; object var_41_object;
		bool var_42_bool;
		func_3377(var_42_bool);
		if(!var_42_bool) { //@nz
			@Trace("FSM Init failed");
			object var_72_object;
			func_3077(var_72_object);
			@RemoveActor(var_72_object);
			return 22;
		}
		@GetPosition(var_0_cvector);
		@GetDirection(var_1_cvector);
		var_75_int = GlobalVars[2];
		GlobalVars[2] = 0;
		var_76_int = GlobalVars[3];
		GlobalVars[3] = 2;
	
		for(;;) {
			if(true != 0) {
				var_79_int = GlobalVars[2];
				if(0 == var_79_int) {
					TaskCall(9);
					func_2643();
					TaskReturn();
					bool var_87_bool;
					func_3414(var_87_bool, 2);
				} else {
				var_107_int = GlobalVars[2];
				if(7 == var_107_int) {
					object var_109_object;
					var_110_object = GlobalVars[7];
					var_110_object = var_109_object;
					TaskCall(1);
					func_435(var_118_object, var_109_object);
					TaskReturn();
					var_642_int = GlobalVars[2];
					if(7 == var_642_int) {
						TaskCall(7);
						func_2366(1);
						TaskReturn();
						var_662_int = GlobalVars[2];
						if(7 == var_662_int) {
							bool var_664_bool;
							func_3414(var_664_bool, 2);
						}
					}
					goto Label_431;
				}
				var_667_int = GlobalVars[2];
				if(6 == var_667_int) {
					TaskCall(7);
					func_2366(1);
					TaskReturn();
					var_672_int = GlobalVars[2];
					if(6 == var_672_int) {
						object var_674_object;
						var_676_object = GlobalVars[6];
						var_676_object = var_674_object;
						TaskCall(3);
						func_1519(var_674_object, (float)8);
						TaskReturn();
						var_747_int = GlobalVars[2];
						if(6 == var_747_int) {
							TaskCall(7);
							func_2366(1);
							TaskReturn();
							var_752_int = GlobalVars[2];
							if(6 == var_752_int) {
								bool var_754_bool;
								func_3414(var_754_bool, 2);
							}
						}
					}
					goto Label_431;
				}
				var_757_int = GlobalVars[2];
				if(1 == var_757_int) {
					func_3543(true);
					bool var_766_bool;
					TaskCall(6);
					func_2132(var_766_bool);
					TaskReturn();
					var_837_int = GlobalVars[2];
					if(1 == var_837_int) {
						TaskCall(4);
						func_1778();
						TaskReturn();
						var_891_int = GlobalVars[2];
						if(1 == var_891_int) {
							bool var_893_bool;
							TaskCall(5);
							func_1919(var_893_bool, var_0_cvector, var_1_cvector, false);
							TaskReturn();
							var_953_int = GlobalVars[2];
							if(1 == var_953_int) {
								bool var_955_bool;
								func_3414(var_955_bool, 2);
							}
						}
					}
					func_3543(false);
					goto Label_431;
				}
				var_959_int = GlobalVars[2];
				if(2 == var_959_int) {
					bool var_961_bool;
					func_0(var_41_object, var_961_bool);
					if(!var_961_bool) { //@nz
						bool var_970_bool;
						TaskCall(5);
						func_1919(var_970_bool, var_0_cvector, var_1_cvector, false);
						TaskReturn();
					}
					var_976_int = GlobalVars[2];
					if(2 == var_976_int) {
						TaskCall(4);
						func_1778();
						TaskReturn();
						var_979_int = GlobalVars[2];
						if(2 == var_979_int) {
							bool var_981_bool;
							func_3557(var_981_bool);
							if(!var_981_bool) { //@nz
								bool var_989_bool;
								func_3414(var_989_bool, 3);
							} else {
								bool var_991_bool;
								func_3111(var_991_bool, 0.5);
								if(var_991_bool == 0) goto Label_223;
								bool var_995_bool;
								func_3532(var_995_bool);
								var_1002_bool = !var_995_bool; //@nz
								if(var_1002_bool == 0) goto Label_223;
								bool var_1003_bool;
								func_3414(var_1003_bool, 1);
				}
							var_1006_int = GlobalVars[2];
							if(3 == var_1006_int) {
								func_3570(true);
								@GetMainOutdoorScene(var_31_object);
								var_1020_int = GlobalVars[1];
								@irand(var_32_int, var_1020_int);
								bool var_1021_bool;
								func_3111(var_1021_bool, 0.5);
								var_1021_bool = var_33_bool;
								var_34_int = 0;

								for(;;) {
									var_1023_int = GlobalVars[1];
									if(var_34_int < var_1023_int) {
										var_1026_int = GlobalVars[1];
										var_38_int = (var_34_int + var_32_int) % var_1026_int;
										if(var_33_bool != 0) {
											var_1028_int = GlobalVars[1];
											var_38_int = (var_1028_int - 1) - var_38_int;
										}
										string var_1031_string;
										func_3632(var_1031_string);
										var_31_object->GetLocator((var_1031_string + (var_38_int + 1)), var_35_bool, var_36_cvector, var_37_cvector);
										bool var_1035_bool; cvector var_1036_cvector; cvector var_1037_cvector;
										var_36_cvector = var_1036_cvector;
										var_37_cvector = var_1037_cvector;
										TaskCall(5);
										func_1919(var_1035_bool, var_1036_cvector, var_1037_cvector, false);
										TaskReturn();
										var_1041_int = GlobalVars[2];
										if(3 != var_1041_int) {
										} else {
												TaskCall(7);
												func_2366(1);
												TaskReturn();
												var_1052_int = GlobalVars[2];
												if(!(3 != var_1052_int)) goto Label_287;
										}
									}
									for(;;) {
										var_1044_int = GlobalVars[2];
										if(3 == var_1044_int) {
											bool var_1046_bool;
											func_3414(var_1046_bool, 2);
										}
										func_3570(false);
										var_31_object = null;
										goto Label_431;

									}

								Label_287:
									var_34_int += 1;
								}
							}
							var_1056_int = GlobalVars[2];
							if(4 == var_1056_int) {
								var_1058_object = GlobalVars[4];
								var_1058_object->GetPosition(var_39_cvector);
								var_1059_object = GlobalVars[4];
								var_1059_object->GetDirection(var_40_cvector);
								bool var_1060_bool; cvector var_1061_cvector; cvector var_1062_cvector;
								var_39_cvector = var_1061_cvector;
								var_1062_cvector = -var_40_cvector;
								TaskCall(5);
								func_1919(var_1060_bool, var_1061_cvector, var_1062_cvector, true);
								TaskReturn();
								var_1066_int = GlobalVars[2];
								if(4 == var_1066_int) {
									TaskCall(7);
									func_2366(2);
									TaskReturn();
									var_1071_int = GlobalVars[2];
									if(4 == var_1071_int) {
										bool var_1073_bool;
										TaskCall(5);
										func_1919(var_1073_bool, var_0_cvector, var_1_cvector, true);
										TaskReturn();
										var_1079_int = GlobalVars[2];
										if(4 == var_1079_int) {
											@GetMainOutdoorScene(var_41_object);
											string var_1081_string;
											func_3636(var_1081_string);
											object var_1082_object;
											func_3077(var_1082_object);
											@BroadcastMessage(var_1081_string, var_1082_object, var_41_object);
											bool var_1083_bool; cvector var_1084_cvector; cvector var_1085_cvector;
											var_39_cvector = var_1084_cvector;
											var_39_cvector = var_1085_cvector;
											TaskCall(5);
											func_1919(var_1083_bool, var_1084_cvector, var_1085_cvector, true);
											TaskReturn();
											var_1089_int = GlobalVars[2];
											if(4 == var_1089_int) {
												TaskCall(7);
												func_2366(3);
												TaskReturn();
												var_1094_int = GlobalVars[2];
												if(4 == var_1094_int) {
													bool var_1096_bool;
													func_3414(var_1096_bool, 2);
												}
											}
											var_41_object = null;
										}
									}
								}
								goto Label_431;
							}
							var_1099_int = GlobalVars[2];
							if(5 == var_1099_int) {
								TaskCall(7);
								func_2366(1);
								TaskReturn();
								var_1104_int = GlobalVars[2];
								if(5 == var_1104_int) {
									object var_1106_object;
									var_1108_object = GlobalVars[5];
									var_1108_object = var_1106_object;
									TaskCall(3);
									func_1519(var_1106_object, (float)8);
									TaskReturn();
									var_1113_int = GlobalVars[2];
									if(5 == var_1113_int) {
										TaskCall(7);
										func_2366(2);
										TaskReturn();
										var_1118_int = GlobalVars[2];
										if(5 == var_1118_int) {
											bool var_1120_bool;
											func_3414(var_1120_bool, 2);
										}
									}
								}
								goto Label_431;
							}
							@Trace("Unknown FSM state");
			}
						return 22;
					}
				}
			}
		Label_223:
			goto Label_431;
			}
		Label_431:
			@sync();
		}
	
	}

}


task task_1
{
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		object var_22_object;
		if(var_20_bool == 1) {
			@GetMainOutdoorScene(var_22_object);
			string var_25_string;
			func_3634(var_25_string);
			@BroadcastMessage(var_25_string, var_7_float, var_22_object);
			@Trace("helpme timer");
			var_22_object = null;
		}
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool = false;
		bool var_22_bool; object var_23_object;
		var_20_bool = var_23_object;
		func_2706(var_22_bool, var_23_object);
		if(var_22_bool != 0) {
			var_26_object = GlobalVars[7];
			if(var_26_object != var_20_bool)
				var_21_bool = true;
		}
		if(var_21_bool != 0) {
			func_754(var_20_bool);
			bool var_28_bool; object var_29_object;
			var_20_bool = var_29_object;
			func_3514(var_28_bool, var_29_object);
		}
	}

	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_754(var_19_bool);
		bool var_20_bool;
		func_3414(var_20_bool, 0);
	}

}


task task_2
{
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		object var_22_object;
		if(var_20_bool == 2) {
			@GetMainOutdoorScene(var_22_object);
			string var_25_string;
			func_3634(var_25_string);
			@BroadcastMessage(var_25_string, var_3_int, var_22_object);
			@Trace("helpme timer");
		} else {
			int var_27_int;
			var_20_bool = var_27_int;
			func_1312(Obj(), var_27_int);
		}
	
	}

	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_1326(var_19_bool);
		bool var_24_bool;
		func_3414(var_24_bool, 0);
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool = false;
		if(var_1_cvector == var_20_bool) {
			if(!var_2_object) //@nz
				var_21_bool = true;
		}
		if(var_21_bool != 0) {
			var_2_object = true;
			object var_24_object;
			var_20_bool = var_24_object;
			func_3025(var_24_object);
		}
	}

	// @pe
	void OnStopSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool = false;
		if(var_1_cvector == var_20_bool) {
			if(var_2_object != 0)
				var_21_bool = true;
		}
		if(var_21_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		@RequestClearPath(var_20_bool);
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, object var_16_object, bool var_17_bool, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		func_1326(var_20_bool);
		object var_25_object;
		var_20_bool = var_25_object;
		func_3624();
	}

}


task task_3
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_1751(var_19_bool);
		var_2_object = true;
		bool var_21_bool;
		func_3414(var_21_bool, 0);
	}

	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, string var_18_string, bool var_19_bool, bool var_20_bool, bool var_21_bool)
	{
		object var_23_object;
		var_20_bool = var_23_object;
		bool var_22_bool;
		string var_24_string;
		func_3238(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0)
			func_1751(var_24_string);
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3312(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			var_2_object = true;
			func_1751(var_22_object);
		}
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3363(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			var_2_object = true;
			func_1751(var_22_object);
		}
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		func_1751(var_20_bool);
		var_2_object = true;
		bool var_22_bool; object var_23_object;
		var_20_bool = var_23_object;
		func_3514(var_22_bool, var_23_object);
	}

	// @pe
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, int var_17_int, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		if(var_20_bool == 3) {
			func_1751(var_20_bool);
			var_2_object = true;
		}
		int var_24_int;
		func_1729(var_19_bool, var_24_int, var_24_int);
	}

	// @pe
	void OnCollision(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		@RequestClearPath(var_20_bool);
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		func_1751(var_20_bool);
		object var_22_object;
		var_20_bool = var_22_object;
		func_3624();
	}

}


task task_4
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_1914();
		bool var_20_bool;
		func_3414(var_20_bool, 0);
	}

	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, string var_18_string, bool var_19_bool, bool var_20_bool, bool var_21_bool)
	{
		object var_23_object;
		var_20_bool = var_23_object;
		string var_24_string;
		var_21_bool = var_24_string;
		bool var_22_bool;
		func_3238(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0)
			func_1914();
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		object var_22_object;
		var_20_bool = var_22_object;
		bool var_21_bool;
		func_3312(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_1914();
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		object var_22_object;
		var_20_bool = var_22_object;
		bool var_21_bool;
		func_3363(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_1914();
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, bool var_19_bool, bool var_20_bool)
	{
		func_1914();
		bool var_21_bool; object var_22_object;
		var_20_bool = var_22_object;
		func_3514(var_21_bool, var_22_object);
	}

}


task task_5
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_2112(var_19_bool);
		bool var_21_bool;
		func_3414(var_21_bool, 0);
	}

	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, string var_19_string, bool var_20_bool, bool var_21_bool)
	{
		object var_23_object;
		var_20_bool = var_23_object;
		bool var_22_bool;
		string var_24_string;
		func_3238(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0)
			func_2112(var_24_string);
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3312(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_2112(var_22_object);
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, bool var_19_bool, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3363(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_2112(var_22_object);
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, bool var_19_bool, bool var_20_bool)
	{
		func_2112(var_20_bool);
		bool var_22_bool; object var_23_object;
		var_20_bool = var_23_object;
		func_3514(var_22_bool, var_23_object);
	}

	// @pe
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, int var_18_int, bool var_19_bool, bool var_20_bool)
	{
		if(var_20_bool != 0)
			return 0;
		bool var_23_bool;
		func_1986(var_23_bool);
		if(!var_23_bool) //@nz
			var_0_cvector = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, bool var_19_bool, bool var_20_bool)
	{
		@RequestClearPath(var_20_bool);
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, object var_18_object, bool var_19_bool, bool var_20_bool)
	{
		func_2112(var_20_bool);
		object var_22_object;
		var_20_bool = var_22_object;
		func_3624();
	}

}


task task_6
{
	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, string var_20_string, bool var_21_bool)
	{
		object var_23_object;
		var_20_string = var_23_object;
		bool var_22_bool;
		string var_24_string;
		func_3238(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0)
			func_2346(var_24_string);
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3312(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_2346(var_22_object);
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		bool var_21_bool; object var_22_object;
		func_3363(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			func_2346(var_22_object);
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		func_2346(var_20_bool);
		bool var_22_bool; object var_23_object;
		var_20_bool = var_23_object;
		func_3514(var_22_bool, var_23_object);
	}

	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_2346(var_19_bool);
		bool var_21_bool;
		func_3414(var_21_bool, 0);
	}

	// @pe
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, int var_19_int, bool var_20_bool)
	{
		if(var_20_bool != 0)
			return 0;
		bool var_23_bool;
		func_2220(var_23_bool);
		if(!var_23_bool) //@nz
			var_0_cvector = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		@RequestClearPath(var_20_bool);
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		func_2346(var_20_bool);
		object var_22_object;
		var_20_bool = var_22_object;
		func_3624();
	}

}


task task_7
{
	// @pe
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		func_2457();
		var_0_cvector = true;
		bool var_20_bool;
		func_3414(var_20_bool, 0);
	}

	// @pe
	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, string var_21_string)
	{
		object var_23_object;
		var_20_object = var_23_object;
		string var_24_string;
		var_21_string = var_24_string;
		bool var_22_bool;
		func_3238(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0) {
			func_2457();
			var_0_cvector = true;
		}
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
	{
		object var_22_object;
		var_20_object = var_22_object;
		bool var_21_bool;
		func_3312(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			func_2457();
			var_0_cvector = true;
		}
	}

	// @pe
	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
	{
		object var_22_object;
		var_20_object = var_22_object;
		bool var_21_bool;
		func_3363(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			func_2457();
			var_0_cvector = true;
		}
	}

	// @pe
	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
	{
		func_2457();
		bool var_21_bool; object var_22_object;
		var_20_object = var_22_object;
		func_3514(var_21_bool, var_22_object);
	}

}


task task_8
{
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		object var_20_object;
		func_3077(var_20_object);
		@RemoveActor(var_20_object);
		@Hold();
	}

	void OnUse(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
	{
		bool var_22_bool;
		@IsOverrideActive(var_22_bool);
		if(!var_22_bool) { //@nz
			object var_24_object;
			var_20_object = var_24_object;
			func_3217(var_24_object);
		}
	}

	// @pe
	void OnHit(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, int var_21_int, float var_22_float, float var_23_float)
	{
	}

	// @pe
	void OnPropertyChange(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, string var_21_string)
	{
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
	{
	}

}


task task_9
{
	// @pe
	void OnTrigger(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, string var_20_string)
	{
		if(var_20_string == "cleanup") {
			object var_23_object;
			func_3077(var_23_object);
			@RemoveActor(var_23_object);
			@Hold();
		}
	}

	void OnLoad(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool)
	{
		@StopGroup0();
		@sync();
	}

}


// @pe
void OnTrigger(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, string var_20_string)
{
	if(var_20_string == "cleanup") {
		var_23_bool = GlobalVars[0];
		GlobalVars[0] = true;
	}
}


// @pe
void OnHit(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, int var_21_int, float var_22_float, float var_23_float)
{
	object var_24_object;
	var_20_object = var_24_object;
	int var_25_int;
	var_21_int = var_25_int;
	float var_26_float;
	var_22_float = var_26_float;
	func_2927(var_24_object, var_25_int, var_26_float);
}


// @pe
void OnHit2(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, int var_21_int, float var_22_float, float var_23_float, cvector var_24_cvector, cvector var_25_cvector)
{
	object var_26_object;
	var_20_object = var_26_object;
	int var_27_int;
	var_21_int = var_27_int;
	float var_28_float;
	var_22_float = var_28_float;
	cvector var_29_cvector;
	var_24_cvector = var_29_cvector;
	cvector var_30_cvector;
	var_25_cvector = var_30_cvector;
	func_2995(var_28_float, var_29_cvector, var_30_cvector);
}


void OnPropertyChange(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object, string var_21_string)
{
	float var_23_float;
	if(var_21_string == "health") {
		@GetProperty("health", var_23_float);
		if(var_23_float <= 0)
			@SignalDeath(var_20_object);
	}
}


// @pe
void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, bool var_6_bool, float var_7_float, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool, bool var_17_bool, bool var_18_bool, bool var_19_bool, object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	TaskCall(8);
	func_2462(var_21_object);
	TaskReturn();
}


void func_0(cvector var_0_cvector, bool var_961_bool)
{
	cvector var_965_cvector;
	@GetPosition(var_965_cvector);
	var_961_bool = ((var_965_cvector - var_0_cvector) | (var_965_cvector - var_0_cvector)) < 40000;
}


void func_3077(object var_72_object)
{
	object var_74_object;
	@self(var_74_object);
	var_74_object = var_72_object;
}
EMIT "Stack[-1] = 0";


void func_3083(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_61_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_61_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_61_float;
}


// @pe
void func_3093(float var_549_float, float var_550_float, float var_551_float)
{
	if(var_550_float < var_551_float)
		var_550_float = var_549_float;
	else
		var_551_float = var_549_float;
	
}


// @pe
void func_3100(float var_559_float, float var_560_float, float var_561_float, float var_562_float)
{
	if(var_560_float < var_561_float) {
		var_561_float = var_559_float;
		return 0;
	}
	if(var_560_float > var_562_float) {
		var_562_float = var_559_float;
		return 0;
	}
	var_560_float = var_559_float;
}


void func_1058(cvector var_0_cvector, bool var_412_bool)
{
	cvector var_418_cvector; cvector var_419_cvector;
	bool var_423_bool = true;
	bool var_424_bool;
	func_2859(var_424_bool, var_0_cvector);
	var_426_bool = !var_424_bool; //@nz
	if(var_426_bool != 1) {
		if(var_4_int != 1)
			var_423_bool = false;
	}
	if(var_423_bool != 0) {
		var_412_bool = false;
		return 10;
	}
	bool var_428_bool;
	float var_422_float;
	func_1153(var_422_float, var_428_bool);
	if(var_428_bool != 0) {
		var_0_cvector->GetPFPosition(var_418_cvector); //@t
		@GetPFPosition(var_419_cvector);
		var_0_cvector->GetAttackDistance(var_422_float); //@t
		var_412_bool = ((var_418_cvector - var_419_cvector) | (var_418_cvector - var_419_cvector)) <= ((var_422_float + 50) * (var_422_float + 50));
		return 10;
	}
	var_412_bool = false;
}


void func_3111(bool var_991_bool, float var_992_float)
{
	float var_994_float;
	@rand(var_994_float);
	var_991_bool = var_994_float < var_992_float;
}


// @pe
void func_3116(bool var_52_bool, object var_53_object, float var_54_float)
{
	if(!var_53_object) { //@nz
		var_52_bool = false;
		return 0;
	}
	if(var_54_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_54_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_63_float;
		var_54_float = var_63_float;
		func_3168(var_63_float);
		bool var_67_bool; object var_68_object; float var_70_float;
		var_53_object = var_68_object;
		var_54_float = var_70_float;
		func_2723(var_67_bool, var_68_object, "reputation", var_70_float, (float)0, (float)1);
		var_52_bool = true;
		return 0;

	}
	
	var_52_bool = false;
}


void func_3632(string var_59_string)
{
	var_59_string = "pt_d9q02_patrol";
}


void func_3634(string var_55_string)
{
	var_55_string = "d9q02_helpme";
}


// @pe
void func_2611(string var_117_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_118_string;
	var_117_string = var_118_string;
	func_3036(var_118_string);
	@PlayAnimation("all", var_117_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_117_string);
	@RemoveEnvelope();
}


void func_3636(string var_1081_string)
{
	var_1081_string = "d9q02_corpse";
}


void func_3638(string var_760_string)
{
	var_760_string = "pt_d9q02_center";
}


void func_3640(int var_987_int)
{
	var_987_int = 2;
}


void func_3642(void)
{
	bool var_48_bool;
	@AddItem(var_48_bool, "Rifle", 0, 1);
	bool var_52_bool; object var_53_object;
	object var_55_object;
	func_2699(var_55_object);
	var_55_object = var_53_object;
	func_3116(var_52_bool, var_53_object, -0.03);
}


void func_2112(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_1092(bool var_410_bool)
{
	bool var_411_bool = false;
	bool var_412_bool;
	func_1058(var_411_bool, var_412_bool);
	if(var_412_bool != 0) {
		bool var_431_bool;
		func_1108(var_410_bool, var_411_bool, var_431_bool);
		if(var_431_bool != 0)
			var_411_bool = true;
	}
	if(var_411_bool != 0) {
		var_410_bool = true;
		return 0;
	}
	var_410_bool = false;
}


void func_3151(float var_567_float)
{
	object var_569_object;
	@CreateFloatVector(var_569_object);
	var_569_object->add(var_567_float);
	if(var_567_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_569_object);
}
EMIT "Stack[-1] = 0";


void func_2128(string var_941_string)
{
	var_941_string = "walk";
}


void func_2130(string var_942_string)
{
	var_942_string = "run";
}


void func_2643(void)
{
	var_81_bool = GlobalVars[0];
	if(var_81_bool != 0) {
		object var_82_object;
		func_3077(var_82_object);
		@RemoveActor(var_82_object);
		@Hold();
	}
	for(;;) {
		bool var_83_bool;
		func_3020(var_83_bool);
		var_86_bool = !var_83_bool; //@nz
		if(var_86_bool == 0) goto Label_2660;
		@Hold();
	}
	
Label_2660:
}


void func_2132(bool var_766_bool)
{
	object var_773_object;
	@GetMainOutdoorScene(var_773_object);
	string var_776_string;
	func_3638(var_776_string);
	bool var_772_bool;
	cvector var_774_cvector;
	cvector var_775_cvector;
	var_773_object->GetLocator(var_776_string, var_772_bool, var_774_cvector, var_775_cvector);
	if(!var_772_bool) //@nz
		var_766_bool = false;
	bool var_778_bool; cvector var_779_cvector; cvector var_780_cvector;
	var_774_cvector = var_779_cvector;
	var_775_cvector = var_780_cvector;
	func_2196(var_778_bool, var_779_cvector, var_780_cvector, false);
	var_778_bool = var_766_bool;
}
EMIT "Stack[-3] = 0";


void func_1108(cvector var_0_cvector, bool var_5_bool, bool var_431_bool)
{
	object var_437_object; float var_439_float; cvector var_440_cvector; cvector var_441_cvector;
	@GetScene(var_437_object);
	bool var_438_bool = false;
	
	for(;;) {
		cvector var_442_cvector;
		func_2692(var_442_cvector, var_0_cvector);
		var_448_int = -var_442_cvector;
		@FindDirLength(var_439_float, var_448_int, var_5_bool);
		if(var_439_float < var_5_bool) {
		} else {
				@Face(var_0_cvector);
				@PlayAnimation("all", "bjump");
				var_0_cvector->GetPFPosition(var_440_cvector); //@t
				@GetPFPosition(var_441_cvector);
				@WaitForAnimEnd();
				func_1196(var_441_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_438_bool = true;
				bool var_453_bool;
				func_1058(var_441_cvector, var_453_bool);
				var_454_bool = !var_453_bool; //@nz
				if(var_454_bool == 0) goto Label_1149;
		}
		for(;;) {
			var_438_bool = var_431_bool;

		}

	Label_1149:
	}
}
EMIT "Stack[-5] = 0";


void func_1627(cvector var_0_cvector, cvector var_1_cvector, bool var_688_bool, object var_689_object, float var_690_float, float var_691_float, bool var_692_bool, bool var_693_bool)
{
	bool var_702_bool; object var_704_object; cvector var_705_cvector; cvector var_706_cvector; float var_708_float; object var_709_object;
	var_0_cvector = false;
	var_1_cvector = var_689_object;
	bool var_703_bool;
	var_693_bool = var_703_bool;
	
	for(;;) {
		bool var_710_bool; object var_711_object;
		var_689_object = var_711_object;
		func_1767(var_710_bool, var_711_object);
		if(!var_710_bool) { //@nz
			var_688_bool = false;
			return 16;
		}
		var_689_object->GetPosition(var_705_cvector);
		@GetPosition(var_706_cvector);
		var_708_float = (var_705_cvector - var_706_cvector) | (var_705_cvector - var_706_cvector);
		bool var_715_bool = false;
		if(var_691_float > 0) {
			if(var_708_float > (var_691_float * var_691_float))
				var_715_bool = true;
		}
		if(var_715_bool != 0) {
			@Stop();
			var_688_bool = false;
			return 16;
		}
		if(var_708_float > (var_690_float * var_690_float)) {
			var_689_object->GetPFPosition(var_705_cvector);
			@FindPathTo(var_709_object, var_705_cvector);
			if(var_709_object != null) {
				var_709_object = var_704_object;
				var_709_object = null;
			}
			if(var_704_object != null) {
				if(var_703_bool == 0) goto Label_1680;
				var_703_bool = false;
				@RotatePath(var_704_object, var_702_bool);
				if(!var_702_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_728_string;
						func_1774(var_728_string);
						string var_729_string;
						func_1776(var_729_string);
						@FollowPath(var_704_object, var_692_bool, var_702_bool, var_728_string, var_729_string);
						if(!var_702_bool) { //@nz
							if(var_0_cvector == 0) goto Label_1699;
							var_704_object = null;
						}
					EMIT "GOTO 0x6a4";

					Label_1699:
						} else {
					var_704_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_702_bool);
					if(!var_702_bool) { //@nz
						if(var_0_cvector != 0) {
							var_704_object = null;
							goto Label_1727;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1727;
		}
			var_709_object = null;
			goto Label_1725;

		Label_1725:
			var_704_object = null;

		}
	Label_1727:
		for(;;) {
			var_688_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


void func_3168(float var_63_float)
{
	object var_65_object;
	@CreateFloatVector(var_65_object);
	var_65_object->add(var_63_float);
	@SendWorldWndMessage(16, var_65_object);
}
EMIT "Stack[-1] = 0";


void func_3178(object var_216_object)
{
	bool var_218_bool;
	@IsPlayerActor(var_216_object, var_218_bool);
	if(var_218_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_3187(string var_861_string, int var_862_int)
{
	string var_864_string = "idle";
	if(var_862_int != 0)
		var_864_string += var_862_int;
	var_864_string = var_861_string;
}


// @pe
void func_2678(string var_539_string, int var_540_int)
{
	if(var_540_int == 2) {
		var_539_string = "fire";
		return 0;
	EMIT "GOTO 0xa82";
	}
	if(var_540_int == 1) {
		var_539_string = "bullet";
		return 0;
	}
	var_539_string = "phys";
}


void func_3194(int var_855_int)
{
	int var_858_int; bool var_859_bool;
	var_858_int = 0;
	
	for(;;) {
		string var_861_string; int var_862_int;
		var_858_int = var_862_int;
		func_3187(var_861_string, var_862_int);
		@HasAnimation(var_859_bool, "all", var_861_string);
		if(!var_859_bool) //@nz
			break;
		var_858_int += 1;
	}
	var_858_int = var_855_int;
}


void func_1153(cvector var_0_cvector, bool var_360_bool)
{
	bool var_362_bool;
	var_365_bool = IsFuncExist(var_0_cvector, "IsAttacking", 1);
	if(var_365_bool != 0) {
		var_0_cvector->IsAttacking(var_362_bool); //@t
		var_362_bool = var_360_bool;
	}
	var_360_bool = false;
}


void func_2692(cvector var_442_cvector, object var_443_object)
{
	cvector var_446_cvector;
	@GetPosition(var_446_cvector);
	cvector var_447_cvector;
	var_443_object->GetPosition(var_447_cvector);
	var_442_cvector = var_447_cvector - var_446_cvector;
}


void func_3211(int var_25_int)
{
	int var_27_int;
	@GetVariable("branch", var_27_int);
	var_27_int = var_25_int;
}


void func_1164(object var_2_object, bool var_6_bool)
{
	int var_480_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_6_bool != 0) {
		if((var_6_bool + -1) > 0)
			return 4;
	}
	float var_479_float;
	@rand(var_479_float);
	float var_486_float;
	func_1212(var_486_float);
	if(var_479_float < var_486_float) {
		@irand(var_480_int, var_2_object);
		@Speak("attack" + (var_480_int + 1));
		int var_491_int;
		func_1210(var_491_int);
		var_6_bool = var_491_int;
	}
}


void func_2699(object var_55_object)
{
	object var_57_object;
	@FindActor(var_57_object, "player");
	var_57_object = var_55_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3217(object var_24_object)
{
	int var_25_int;
	func_3211(var_25_int);
	if(var_25_int == 1)
		@WorkWithCorpse(var_24_object);
	else
		@Barter(var_24_object);
	
}


void func_2706(bool var_258_bool, object var_259_object)
{
	bool var_261_bool;
	@IsPlayerActor(var_259_object, var_261_bool);
	var_261_bool = var_258_bool;
}


// @pe
void func_2196(bool var_778_bool, cvector var_779_cvector, cvector var_780_cvector, bool var_781_bool)
{
	var_782_float = GetByIndex(var_779_cvector, 1);
	SetByIndex(var_779_cvector, 1) = (var_782_float + 30);
	bool var_784_bool; cvector var_785_cvector; cvector var_786_cvector; bool var_789_bool;
	var_779_cvector = var_785_cvector;
	var_780_cvector = var_786_cvector;
	func_2222(var_789_bool, var_784_bool, var_785_cvector, var_786_cvector, (float)100, (float)4000, var_789_bool, true);
	var_784_bool = var_778_bool;
}


void func_2711(bool var_202_bool, object var_203_object, string var_204_string)
{
	var_209_bool = IsFuncExist(var_203_object, "HasProperty", 2);
	if(!var_209_bool) { //@nz
		var_202_bool = false;
		return 2;
	}
	bool var_206_bool;
	var_203_object->HasProperty(var_204_string, var_206_bool);
	var_206_bool = var_202_bool;
}


void func_2723(bool var_67_bool, object var_68_object, string var_69_string, float var_70_float, float var_71_float, float var_72_float)
{
	object var_76_object;
	var_68_object = var_76_object;
	string var_77_string;
	var_69_string = var_77_string;
	bool var_75_bool;
	func_2711(var_75_bool, var_76_object, var_77_string);
	if(!var_75_bool) //@nz
		var_67_bool = false;
	float var_74_float;
	var_68_object->GetProperty(var_69_string, var_74_float);
	float var_85_float; float var_87_float; float var_88_float;
	var_71_float = var_87_float;
	var_72_float = var_88_float;
	func_3100(var_85_float, (var_74_float + var_70_float), var_87_float, var_88_float);
	var_68_object->SetProperty(var_69_string, var_85_float);
	var_67_bool = true;
}


void func_3238(bool var_22_bool, object var_23_object, string var_24_string)
{
	cvector var_33_cvector; cvector var_34_cvector;
	object var_41_object;
	func_3077(var_41_object);
	if(var_23_object == var_41_object) {
		var_22_bool = false;
		return 16;
	}
	string var_45_string;
	func_3636(var_45_string);
	if(var_24_string == var_45_string) {
		bool var_47_bool; object var_48_object;
		func_3478(var_47_bool, var_48_object);
		if(var_47_bool != 0) {
			var_22_bool = true;
			return 16;
		}
	} else {
			string var_55_string;
			func_3634(var_55_string);
			if(!(var_24_string == var_55_string)) goto Label_3281;
			var_48_object->GetPosition(var_33_cvector);
			@GetPosition(var_34_cvector);
			if(((var_33_cvector - var_34_cvector) | (var_33_cvector - var_34_cvector)) < 4000000.0) {
				bool var_59_bool; object var_60_object;
				var_23_object = var_60_object;
				func_3514(var_59_bool, var_60_object);
				if(var_59_bool != 0) {
					var_22_bool = true;
					return 16;
				}
			}
	}
Label_3310:
	for(;;) {
		var_22_bool = false;
		return 16;

	}
	
Label_3281:
	if(!(var_24_string == "player_shot")) goto Label_3310;
	cvector var_37_cvector;
	var_23_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	float var_40_float = (var_37_cvector - var_38_cvector) | (var_37_cvector - var_38_cvector);
	if(var_40_float < 360000.0) {
		bool var_71_bool; object var_72_object;
		var_23_object = var_72_object;
		func_3514(var_71_bool, var_72_object);
		if(var_71_bool != 0) {
			var_22_bool = true;
			return 16;
		}
	}
	if(!(var_40_float < 12250000.0)) goto Label_3310;
	bool var_75_bool; object var_76_object;
	var_23_object = var_76_object;
	func_3478(var_75_bool, var_76_object);
	if(var_75_bool == 0) goto Label_3310;
	var_22_bool = true;
}


void func_1196(cvector var_0_cvector)
{
	func_3178(var_0_cvector);
}


void func_2220(bool var_807_bool)
{
	var_807_bool = true;
}


void func_2222(cvector var_0_cvector, bool var_784_bool, cvector var_785_cvector, cvector var_786_cvector, float var_787_float, float var_788_float, bool var_789_bool, bool var_790_bool)
{
	bool var_799_bool; object var_801_object; cvector var_802_cvector; cvector var_803_cvector; float var_805_float; object var_806_object;
	var_0_cvector = false;
	bool var_800_bool;
	var_790_bool = var_800_bool;
	
	for(;;) {
		bool var_807_bool;
		func_2220(var_807_bool);
		if(!var_807_bool) { //@nz
			var_784_bool = false;
			return 16;
		}
		var_785_cvector = var_802_cvector;
		@GetPosition(var_803_cvector);
		var_805_float = (var_802_cvector - var_803_cvector) | (var_802_cvector - var_803_cvector);
		bool var_809_bool = false;
		if(var_788_float > 0) {
			if(var_805_float > (var_788_float * var_788_float))
				var_809_bool = true;
		}
		if(var_809_bool != 0) {
			@Stop();
			var_784_bool = false;
			return 16;
		}
		if(var_805_float > (var_787_float * var_787_float)) {
			@FindPathTo(var_806_object, var_802_cvector);
			if(var_806_object != null) {
				var_806_object = var_801_object;
				var_806_object = null;
			}
			if(var_801_object != null) {
				if(var_800_bool == 0) goto Label_2270;
				var_800_bool = false;
				@RotatePath(var_801_object, var_799_bool);
				if(!var_799_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_825_string;
						func_2362(var_825_string);
						string var_826_string;
						func_2364(var_826_string);
						@FollowPath(var_801_object, var_789_bool, var_799_bool, var_825_string, var_826_string);
						if(!var_799_bool) { //@nz
							if(var_0_cvector == 0) goto Label_2289;
							var_801_object = null;
						}
					EMIT "GOTO 0x8f2";

					Label_2289:
						} else {
					var_801_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_799_bool);
					if(!var_799_bool) { //@nz
						if(var_0_cvector != 0) {
							var_801_object = null;
							goto Label_2317;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_2317;
		}
			var_806_object = null;
			goto Label_2315;

		Label_2315:
			var_801_object = null;

		}
	Label_2317:
		for(;;) {
			if(!var_0_cvector) { //@nz
				var_821_float = GetByIndex(var_786_cvector, 0);
				var_822_float = GetByIndex(var_786_cvector, 2);
				@RotateAsync(var_821_float, var_822_float);
			}
			var_784_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


void func_1201(void)
{
	func_3036("attack_stay");
}


// @pe
void func_1206(void)
{
}


void func_1208(bool var_603_bool)
{
	var_603_bool = true;
}


void func_2745(float var_511_float, object var_512_object, float var_513_float, int var_514_int)
{
	int var_524_int; int var_526_int;
	object var_531_object;
	var_512_object = var_531_object;
	bool var_530_bool;
	func_2711(var_530_bool, var_531_object, "health");
	if(!var_530_bool) //@nz
		var_511_float = 0.0;
	bool var_534_bool; object var_535_object;
	func_2711(var_534_bool, var_535_object, "armor");
	if(!var_534_bool) //@nz
		var_524_int = 0;
	else
		var_535_object->GetProperty("armor", var_524_int);
	string var_539_string; int var_540_int;
	var_514_int = var_540_int;
	func_2678(var_539_string, var_540_int);
	string var_525_string = "armor_" + var_539_string;
	bool var_545_bool; object var_546_object; string var_547_string;
	var_512_object = var_546_object;
	func_2711(var_545_bool, var_546_object, var_547_string);
	if(!var_545_bool) //@nz
		var_526_int = 0;
	else
		var_512_object->GetProperty(var_547_string, var_526_int);

	float var_549_float;
	func_3093(var_549_float, ((var_524_int + var_526_int) / 100.0), (float)1);
	float var_527_float;
	var_549_float = var_527_float;
	float var_528_float;
	var_512_object->GetProperty("health", var_528_float);
	float var_529_float = var_513_float * (1 - var_527_float);
	float var_559_float;
	func_3100(var_559_float, (var_528_float - var_529_float), (float)0, (float)1);
	var_512_object->SetProperty("health", var_559_float);
	bool var_565_bool; object var_566_object;
	var_512_object = var_566_object;
	func_2706(var_565_bool, var_566_object);
	if(var_565_bool != 0) {
		float var_567_float = -var_529_float;
		func_3151(var_567_float);
	}
	var_529_float = var_511_float;
	
}


void func_1210(int var_491_int)
{
	var_491_int = 1;
}


void func_1212(float var_486_float)
{
	var_486_float = 0.5;
}


void func_1214(int var_3_int, bool var_223_bool, object var_224_object, float var_225_float, float var_226_float, bool var_227_bool, bool var_228_bool)
{
	var_3_int = var_224_object;
	@SetTimer(2, 2);
	bool var_237_bool; object var_238_object; float var_239_float; float var_240_float; bool var_241_bool; bool var_242_bool;
	var_224_object = var_238_object;
	var_225_float = var_239_float;
	var_226_float = var_240_float;
	var_227_bool = var_241_bool;
	var_228_bool = var_242_bool;
	bool var_234_bool;
	func_1263(var_234_bool, var_237_bool, var_238_object, var_239_float, var_240_float, var_241_bool, var_242_bool);
	var_237_bool = var_234_bool;
	@KillTimer(2);
	var_234_bool = var_223_bool;
}


// @pe
void func_1729(cvector var_0_cvector, cvector var_1_cvector, int var_24_int)
{
	if(var_24_int != 0)
		return 0;
	bool var_27_bool;
	func_1767(var_27_bool, var_1_cvector);
	if(!var_27_bool) //@nz
		var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_1751(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1767(bool var_710_bool, object var_711_object)
{
	object var_713_object;
	var_711_object = var_713_object;
	bool var_712_bool;
	func_2859(var_712_bool, var_713_object);
	var_712_bool = var_710_bool;
}


void func_1774(string var_728_string)
{
	var_728_string = "walk";
}


void func_1263(object var_2_object, bool var_237_bool, object var_238_object, float var_239_float, float var_240_float, bool var_241_bool, bool var_242_bool)
{
	object var_247_object;
	func_3178(var_247_object);
	@SetTimer(1, 5);
	bool var_245_bool;
	@CanSee(var_245_bool, var_247_object);
	if(var_245_bool != 0) {
		var_2_object = true;
		object var_251_object;
		var_238_object = var_251_object;
		func_3025(var_251_object);
	} else {
		var_2_object = false;
	}
	bool var_258_bool; object var_259_object;
	func_2706(var_258_bool, var_259_object);
	if(var_258_bool != 0) {
		object var_262_object;
		func_3077(var_262_object);
		@SendPlayerEnemy(var_259_object, var_262_object);
	}
	bool var_263_bool; object var_264_object; float var_265_float; float var_266_float; bool var_267_bool; bool var_268_bool;
	var_238_object = var_264_object;
	var_239_float = var_265_float;
	var_240_float = var_266_float;
	var_241_bool = var_267_bool;
	var_242_bool = var_268_bool;
	bool var_246_bool;
	func_1368(var_245_bool, var_246_bool, var_263_bool, var_264_object, var_265_float, var_266_float, var_267_bool, var_268_bool);
	var_263_bool = var_246_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_246_bool = var_237_bool;
	
}


// @pe
void func_3312(bool var_21_bool, object var_22_object)
{
	bool var_23_bool = false;
	var_26_bool = IsFuncExist(var_22_object, "IsDead", 1);
	if(var_26_bool != 0) {
		bool var_27_bool; object var_28_object;
		var_22_object = var_28_object;
		func_2818(var_27_bool, var_28_object);
		if(var_27_bool != 0)
			var_23_bool = true;
	}
	if(var_23_bool != 0) {
		bool var_31_bool; object var_32_object; string var_33_string;
		string var_34_string;
		func_3636(var_34_string);
		var_34_string = var_33_string;
		func_2711(var_31_bool, var_32_object, var_33_string);
		if(var_31_bool != 0) {
			var_21_bool = false;
			return 0;
		}
		string var_41_string;
		func_3636(var_41_string);
		var_32_object->SetProperty(var_41_string, 1);
		bool var_43_bool; object var_44_object;
		var_22_object = var_44_object;
		func_3460(var_43_bool, var_44_object);
		var_43_bool = var_21_bool;
		return 0;
	EMIT "GOTO 0xd21";
	}
	bool var_51_bool; object var_52_object;
	var_22_object = var_52_object;
	func_2706(var_51_bool, var_52_object);
	if(var_51_bool != 0) {
		bool var_55_bool; object var_56_object;
		var_22_object = var_56_object;
		func_3514(var_55_bool, var_56_object);
		var_55_bool = var_21_bool;
		return 0;
	}
	var_21_bool = false;
}


void func_1776(string var_729_string)
{
	var_729_string = "run";
}


// @pe
void func_1778(void)
{
	func_1833();
}


void func_754(int var_4_int)
{
	@Stop();
	@StopAnimation();
	@StopGroup0();
	var_4_int = true;
}


void func_762(cvector var_1_cvector, object var_2_object, bool var_5_bool)
{
	bool var_149_bool; bool var_150_bool; cvector var_151_cvector;
	var_1_cvector = 0;
	
	for(;;) {
		@HasAnimation(var_149_bool, "all", ("attack_begin" + (var_1_cvector + 1)));
		if(!var_149_bool) { //@nz
		} else {
			var_1_cvector += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_150_bool, ("attack" + (var_2_object + 1)));
			if(!var_150_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_151_cvector, "all", "bjump");
		var_165_float = GetByIndex(var_151_cvector, 2);
		var_5_bool = -var_165_float;

	}
}


void func_2818(bool var_195_bool, object var_196_object)
{
	bool var_198_bool;
	var_196_object->IsDead(var_198_bool);
	var_198_bool = var_195_bool;
}


void func_2823(bool var_184_bool, object var_185_object)
{
	if(var_185_object == null) {
		var_184_bool = false;
		return 4;
	}
	bool var_191_bool = false;
	var_194_bool = IsFuncExist(var_185_object, "IsDead", 1);
	if(var_194_bool != 0) {
		bool var_195_bool; object var_196_object;
		var_185_object = var_196_object;
		func_2818(var_195_bool, var_196_object);
		if(var_195_bool != 0)
			var_191_bool = true;
	}
	if(var_191_bool != 0) {
		var_184_bool = false;
		return 4;
	}
	object var_188_object;
	@GetScene(var_188_object);
	if(var_188_object == null) {
		var_184_bool = false;
		return 4;
	}
	object var_189_object;
	var_185_object->GetScene(var_189_object);
	if(var_188_object != var_189_object) {
		var_184_bool = false;
		return 4;
	}
	var_184_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_797(cvector var_0_cvector, float var_497_float, int var_498_int)
{
	object var_502_object; float var_503_float; float var_504_float;
	@GetVictim((var_497_float * 0.9), var_502_object);
	@ReportAttack(var_0_cvector);
	if(var_502_object == var_0_cvector) {
		float var_508_float; object var_509_object; int var_510_int;
		var_502_object = var_509_object;
		var_498_int = var_510_int;
		func_451(var_510_int);
		var_508_float = var_503_float;
		float var_511_float; object var_512_object; float var_513_float; int var_514_int;
		var_502_object = var_512_object;
		int var_515_int; object var_516_object; int var_517_int;
		var_502_object = var_516_object;
		var_498_int = var_517_int;
		func_454(var_517_int);
		var_515_int = var_514_int;
		func_2745(var_511_float, var_512_object, var_513_float, var_514_int);
		var_511_float = var_504_float;
		int var_576_int;
		func_457(var_576_int);
		@ReportHit(var_0_cvector, var_576_int, var_504_float, var_513_float);
		object var_577_object; float var_578_float;
		var_502_object = var_577_object;
		var_504_float = var_578_float;
		func_1206();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_1312(cvector var_1_cvector, int var_27_int)
{
	if(var_27_int == 1) {
		func_3178(var_1_cvector);
	} else {
		int var_35_int;
		func_1470(var_22_object, var_35_int, var_35_int);
	}
	
}


// @pe
void func_3363(bool var_21_bool, object var_22_object)
{
	object var_24_object;
	var_22_object = var_24_object;
	bool var_23_bool;
	func_2706(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		bool var_27_bool; object var_28_object;
		var_22_object = var_28_object;
		func_3496(var_27_bool, var_28_object);
		var_27_bool = var_21_bool;
		return 0;
	}
	var_21_bool = false;
}


void func_1833(void)
{
	int var_848_int; int var_849_int; bool var_850_bool; float var_851_float; bool var_852_bool;
	@WaitForAnimEnd();
	bool var_853_bool;
	func_3020(var_853_bool);
	if(!var_853_bool) //@nz
		return 14;
	int var_855_int;
	func_3194(var_855_int);
	int var_846_int;
	var_855_int = var_846_int;
	int var_847_int = 0;
	
	for(;;) {
		bool var_868_bool = false;
		if(var_847_int < 5) {
			bool var_871_bool;
			func_3020(var_871_bool);
			if(var_871_bool != 0)
				var_868_bool = true;
		}
		if(var_868_bool != 0) {
			@irand(var_848_int, 3);
			if(var_848_int == 0) {
				if(var_846_int == 0) goto Label_1880;
				@irand(var_849_int, var_846_int);
				string var_877_string; int var_878_int;
				var_849_int = var_878_int;
				func_3187(var_877_string, var_878_int);
				@PlayAnimation("all", var_877_string);
				@WaitForAnimEnd(var_850_bool);
				if(!var_850_bool) { //@nz
				} else {
			} else {
			if(var_848_int == 1) {
				@rand(var_851_float, 4);
				@Sleep((var_851_float + 1), var_852_bool);
				if(!var_852_bool) { //@nz
					goto Label_1909;
				}
			} else if(var_847_int != 0) {
				goto Label_1909;
			}
			}
					bool var_880_bool;
					func_1912(var_880_bool);
					var_881_bool = !var_880_bool; //@nz
					if(var_881_bool == 0) goto Label_1904;
			}
		}
	Label_1909:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1904:
		@ResetAAS();
		var_847_int += 1;
	}
	
}


void func_2346(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_2859(bool var_180_bool, object var_181_object)
{
	object var_185_object;
	var_181_object = var_185_object;
	bool var_184_bool;
	func_2823(var_184_bool, var_185_object);
	if(!var_184_bool) { //@nz
		var_180_bool = false;
		return 2;
	}
	bool var_202_bool; object var_203_object;
	func_2711(var_202_bool, var_203_object, "noaccess");
	if(!var_202_bool) { //@nz
		var_180_bool = true;
		return 2;
	}
	int var_183_int;
	var_203_object->GetProperty("noaccess", var_183_int);
	var_180_bool = var_183_int == 0;
}


void func_1326(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1492(var_20_bool);
}


void func_3377(bool var_42_bool)
{
	object var_50_object; cvector var_52_cvector; cvector var_53_cvector; bool var_54_bool;
	@GetMainOutdoorScene(var_50_object);
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	float var_55_float = 4000000;
	int var_56_int = 0;
	var_57_int = GlobalVars[1];
	GlobalVars[1] = 0;
	
	for(;;) {
		if(true != 0) {
			string var_59_string;
			func_3632(var_59_string);
			var_60_int = GlobalVars[1];
			var_50_object->GetLocator((var_59_string + (var_60_int + 1)), var_54_bool, var_52_cvector, var_53_cvector);
			if(!var_54_bool) { //@nz
			} else {
				var_68_int = GlobalVars[1];
				GlobalVars[1] = (var_68_int + 1);
			}
		}
		var_66_int = GlobalVars[1];
		@Trace("Pantrol point count: " + var_66_int);
		var_42_bool = true;

	}
}
EMIT "Stack[-7] = 0";


void func_2362(string var_825_string)
{
	var_825_string = "walk";
}


void func_2364(string var_826_string)
{
	var_826_string = "run";
}


void func_2366(int var_644_int)
{
	int var_647_int = 0;
	
	for(;;) {
		if(var_647_int < var_644_int) {
			func_2436("hunt");
			if(var_0_cvector != 0) {
			} else {
				var_647_int += 1;
			}
		}

	}
}


void func_2883(object var_37_object)
{
	string var_51_string;
	if(var_37_object == null)
		return 14;
	bool var_45_bool;
	@IsDead(var_45_bool);
	if(var_45_bool != 0)
		return 14;
	int var_46_int;
	@GetSecondaryAnimationType(var_46_int);
	if(var_46_int < 0)
		return 14;
	cvector var_47_cvector;
	var_37_object->GetPosition(var_47_cvector);
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	@GetDirection(var_49_cvector);
	cvector var_50_cvector = var_48_cvector - var_47_cvector;
	var_56_float = GetByIndex(var_50_cvector, 0);
	var_57_float = GetByIndex(var_49_cvector, 0);
	var_59_float = GetByIndex(var_50_cvector, 2);
	var_60_float = GetByIndex(var_49_cvector, 2);
	if(((var_56_float * var_57_float) + (var_59_float * var_60_float)) >= 0)
		var_51_string = "fhit";
	else
		var_51_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_51_string + "1"), (var_51_string + "2"), -10);
	
}


void func_836(cvector var_0_cvector, cvector var_1_cvector, bool var_462_bool, float var_463_float)
{
	string var_471_string;
	func_1196(var_471_string);
	int var_468_int;
	@irand(var_468_int, var_1_cvector);
	@Face(var_0_cvector);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + (var_468_int + 1)));
	@WaitForAnimEnd();
	int var_470_int;
	func_1164(var_470_int, var_471_string);
	bool var_492_bool = true;
	bool var_493_bool;
	func_2859(var_493_bool, var_0_cvector);
	var_495_bool = !var_493_bool; //@nz
	if(var_495_bool != 1) {
		if(var_4_int != 1)
			var_492_bool = false;
	}
	if(var_492_bool != 0) {
		@StopAsync();
		var_462_bool = false;
		return 8;
	}
	float var_497_float; int var_498_int;
	var_463_float = var_497_float;
	var_468_int = var_498_int;
	func_797(var_471_string, var_497_float, var_498_int);
	bool var_469_bool;
	@HasAnimation(var_469_bool, "all", ("attack_middle" + var_468_int));
	if(var_469_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_468_int));
		@WaitForAnimEnd();
		func_1196(var_471_string);
		bool var_586_bool = true;
		bool var_587_bool;
		func_2859(var_587_bool, var_0_cvector);
		var_589_bool = !var_587_bool; //@nz
		if(var_589_bool != 1) {
			if(var_4_int != 1)
				var_586_bool = false;
		}
		if(var_586_bool != 0) {
			@StopAsync();
			var_462_bool = false;
			return 8;
		}
		float var_591_float; int var_592_int;
		var_463_float = var_591_float;
		func_797(var_471_string, var_591_float, var_592_int);
		var_470_int = 1;

		for(;;) {
			var_471_string = (("attack_middle" + var_592_int) + "_") + var_470_int;
			@HasAnimation(var_469_bool, "all", var_471_string);
			if(!var_469_bool) { //@nz
			} else {
				@PlayAnimation("all", var_471_string);
				@WaitForAnimEnd();
				func_1196(var_471_string);
				bool var_614_bool = true;
				bool var_615_bool;
				func_2859(var_615_bool, var_0_cvector);
				var_617_bool = !var_615_bool; //@nz
				if(var_617_bool != 1) {
					if(var_4_int != 1)
						var_614_bool = false;
				}
				if(var_614_bool != 0) {
					@StopAsync();
					var_462_bool = false;
					return 8;
				}
				float var_619_float; int var_620_int;
				var_463_float = var_619_float;
				var_468_int = var_620_int;
				func_797(var_471_string, var_619_float, var_620_int);
				var_470_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_468_int));
		bool var_603_bool;
		func_1208(var_603_bool);
		if(var_603_bool != 0) {
			bool var_604_bool;
			func_982(var_604_bool, 0.75);
			@StopAsync();
		}
		var_462_bool = true;
		return 8;

	}
}


// @pe
void func_3414(bool var_87_bool, int var_88_int)
{
	var_89_int = GlobalVars[2];
	if(var_88_int == var_89_int) {
		var_87_bool = false;
		return 0;
	}
	if(var_88_int == 0) {
		var_93_int = GlobalVars[3];
		var_94_int = GlobalVars[2];
		var_94_int = var_93_int;
		GlobalVars[3] = var_93_int;
		@Trace("changing state to c_iStateWaitForLoad");
	} else if(var_88_int == 1) {
			@Trace("changing state to c_iStateHeatHands");
	}

	for(;;) {
		var_96_int = GlobalVars[2];
		var_88_int = var_96_int;
		GlobalVars[2] = var_96_int;
		var_87_bool = true;
		return 0;

	}
	
	if(var_88_int == 2) {
		@Trace("changing state to c_iStateIdle");
	} else if(var_88_int == 3) {
		@Trace("changing state to c_iStatePatrol");
	}
	var_87_bool = false;
}


void func_1368(cvector var_0_cvector, cvector var_1_cvector, bool var_263_bool, object var_264_object, float var_265_float, float var_266_float, bool var_267_bool, bool var_268_bool)
{
	bool var_277_bool; object var_279_object; cvector var_280_cvector; cvector var_281_cvector; float var_283_float; object var_284_object;
	var_0_cvector = false;
	var_1_cvector = var_264_object;
	bool var_278_bool;
	var_268_bool = var_278_bool;
	
	for(;;) {
		bool var_285_bool; object var_286_object;
		var_264_object = var_286_object;
		func_1508(var_285_bool, var_286_object);
		if(!var_285_bool) { //@nz
			var_263_bool = false;
			return 16;
		}
		var_264_object->GetPosition(var_280_cvector);
		@GetPosition(var_281_cvector);
		var_283_float = (var_280_cvector - var_281_cvector) | (var_280_cvector - var_281_cvector);
		bool var_290_bool = false;
		if(var_266_float > 0) {
			if(var_283_float > (var_266_float * var_266_float))
				var_290_bool = true;
		}
		if(var_290_bool != 0) {
			@Stop();
			var_263_bool = false;
			return 16;
		}
		if(var_283_float > (var_265_float * var_265_float)) {
			var_264_object->GetPFPosition(var_280_cvector);
			@FindPathTo(var_284_object, var_280_cvector);
			if(var_284_object != null) {
				var_284_object = var_279_object;
				var_284_object = null;
			}
			if(var_279_object != null) {
				if(var_278_bool == 0) goto Label_1421;
				var_278_bool = false;
				@RotatePath(var_279_object, var_277_bool);
				if(!var_277_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_303_string;
						func_1515(var_303_string);
						string var_304_string;
						func_1517(var_304_string);
						@FollowPath(var_279_object, var_267_bool, var_277_bool, var_303_string, var_304_string);
						if(!var_277_bool) { //@nz
							if(var_0_cvector == 0) goto Label_1440;
							var_279_object = null;
						}
					EMIT "GOTO 0x5a1";

					Label_1440:
						} else {
					var_279_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_277_bool);
					if(!var_277_bool) { //@nz
						if(var_0_cvector != 0) {
							var_279_object = null;
							goto Label_1468;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1468;
		}
			var_284_object = null;
			goto Label_1466;

		Label_1466:
			var_279_object = null;

		}
	Label_1468:
		for(;;) {
			var_263_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


void func_2927(object var_24_object, int var_25_int, float var_26_float)
{
	cvector var_36_cvector; object var_37_object; int var_38_int; bool var_39_bool; cvector var_40_cvector; cvector var_41_cvector;
	bool var_45_bool = false;
	bool var_46_bool = false;
	if(var_24_object != 0) {
		if(var_25_int != 4)
			var_46_bool = true;
	}
	if(var_46_bool != 0) {
		if(var_25_int != 5)
			var_45_bool = true;
	}
	if(var_45_bool != 0) {
		cvector var_52_cvector; cvector var_53_cvector;
		cvector var_54_cvector; object var_55_object;
		var_24_object = var_55_object;
		func_2692(var_54_cvector, var_55_object);
		var_54_cvector = var_53_cvector;
		func_3083(var_52_cvector, var_53_cvector);
		var_52_cvector = var_36_cvector;
		@CreateVectorVector(var_37_object);
		var_38_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_38_int), var_39_bool, var_40_cvector, var_41_cvector);
			if(!var_39_bool) { //@nz
				break;
			Label_2989:
				var_37_object = null;
	}
			object var_114_object;
			var_24_object = var_114_object;
			func_2883(var_114_object);
		}
		if((var_41_cvector | var_36_cvector) >= 0.70710677)
			var_37_object->add(var_40_cvector);
		var_38_int += 1;
	}
	int var_42_int;
	var_37_object->size(var_42_int);
	if(var_42_int == 0) goto Label_2989;
	int var_43_int;
	@irand(var_43_int, var_42_int);
	cvector var_44_cvector;
	var_37_object->get(var_44_cvector, var_43_int);
	object var_69_object; int var_70_int; float var_71_float; cvector var_72_cvector; cvector var_73_cvector;
	var_24_object = var_69_object;
	var_25_int = var_70_int;
	var_26_float = var_71_float;
	var_44_cvector = var_72_cvector;
	var_73_cvector = -var_36_cvector;
	func_2995(var_71_float, var_72_cvector, var_73_cvector);
}


void func_1912(bool var_880_bool)
{
	var_880_bool = true;
}


void func_1914(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1919(bool var_893_bool, cvector var_894_cvector, cvector var_895_cvector, bool var_896_bool)
{
	var_898_float = GetByIndex(var_894_cvector, 1);
	SetByIndex(var_894_cvector, 1) = (var_898_float + 30);
	bool var_900_bool; cvector var_901_cvector; cvector var_902_cvector; bool var_905_bool;
	var_894_cvector = var_901_cvector;
	var_895_cvector = var_902_cvector;
	func_1988(var_905_bool, var_900_bool, var_901_cvector, var_902_cvector, (float)100, (float)4000, var_905_bool, true);
	var_900_bool = var_893_bool;
}


void func_2436(string var_649_string)
{
	@WaitForAnimEnd();
	bool var_654_bool;
	func_3020(var_654_bool);
	if(!var_654_bool) //@nz
		return 4;
	bool var_652_bool;
	@HasAnimation(var_652_bool, "all", var_649_string);
	if(!var_652_bool) //@nz
		return 4;
	@PlayAnimation("all", var_649_string);
	bool var_653_bool;
	@WaitForAnimEnd(var_653_bool);
}


// @pe
void func_3460(bool var_43_bool, object var_44_object)
{
	var_45_int = GlobalVars[2];
	if(var_45_int == 4)
		var_43_bool = false;
	var_48_int = GlobalVars[2];
	GlobalVars[2] = 4;
	@Trace("changing state to c_iStateAware");
	var_50_object = GlobalVars[4];
	var_44_object = var_50_object;
	GlobalVars[4] = var_50_object;
	var_43_bool = true;
}


// @pe
void func_3478(bool var_47_bool, object var_48_object)
{
	var_49_int = GlobalVars[2];
	if(var_49_int == 5)
		var_47_bool = false;
	var_52_int = GlobalVars[2];
	GlobalVars[2] = 5;
	@Trace("changing state to c_iStateSearchEnemy");
	var_54_object = GlobalVars[5];
	var_48_object = var_54_object;
	GlobalVars[5] = var_54_object;
	var_47_bool = true;
}


void func_2457(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2462(object var_21_object)
{
	var_23_int = GlobalVars[2];
	if(1 == var_23_int)
		func_3543(false);
	var_33_int = GlobalVars[2];
	if(3 == var_33_int)
		func_3570(false);
	func_3642();
	object var_94_object;
	var_21_object = var_94_object;
	func_2495(var_94_object);
}


// @pe
void func_3496(bool var_27_bool, object var_28_object)
{
	var_29_int = GlobalVars[2];
	if(var_29_int == 6)
		var_27_bool = false;
	var_32_int = GlobalVars[2];
	GlobalVars[2] = 6;
	@Trace("changing state to c_iStateHearEnemy");
	var_34_object = GlobalVars[6];
	var_28_object = var_34_object;
	GlobalVars[6] = var_34_object;
	var_27_bool = true;
}


// @pe
void func_435(float var_7_float, object var_109_object)
{
	var_7_float = var_109_object;
	@SetTimer(1, 1);
	object var_121_object;
	func_504(var_114_bool, var_115_bool, var_116_float, var_117_int, var_118_object, var_121_object, var_121_object, true, 150.0);
	@KillTimer(1);
}


void func_2995(object var_26_object, cvector var_29_cvector, cvector var_30_cvector)
{
	object var_33_object;
	@GetScene(var_33_object);
	object var_34_object;
	@AddActorByType(var_34_object, "scripted", var_33_object, var_29_cvector, var_30_cvector, "blood_dir.xml");
	object var_37_object;
	var_26_object = var_37_object;
	func_2883(var_37_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3514(bool var_21_bool, object var_22_object)
{
	var_23_int = GlobalVars[2];
	if(var_23_int == 7)
		var_21_bool = false;
	var_26_int = GlobalVars[2];
	GlobalVars[2] = 7;
	@Trace("changing state to c_iStateAttack");
	var_28_object = GlobalVars[7];
	var_22_object = var_28_object;
	GlobalVars[7] = var_28_object;
	var_21_bool = true;
}


// @pe
void func_1470(cvector var_0_cvector, cvector var_1_cvector, int var_35_int)
{
	if(var_35_int != 0)
		return 0;
	bool var_38_bool;
	func_1508(var_38_bool, var_1_cvector);
	if(!var_38_bool) //@nz
		var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_2495(object var_94_object)
{
	object var_95_object;
	var_94_object = var_95_object;
	func_2520(var_95_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_3009(object var_341_object)
{
	cvector var_345_cvector;
	var_341_object->GetPosition(var_345_cvector);
	cvector var_346_cvector;
	@GetPosition(var_346_cvector);
	cvector var_347_cvector = var_345_cvector - var_346_cvector;
	var_348_float = GetByIndex(var_347_cvector, 0);
	var_349_float = GetByIndex(var_347_cvector, 2);
	@RotateAsync(var_348_float, var_349_float);
}


void func_1986(bool var_923_bool)
{
	var_923_bool = true;
}


// @pe
void func_451(float var_508_float)
{
	var_508_float = 0.1;
}


void func_1988(cvector var_0_cvector, bool var_900_bool, cvector var_901_cvector, cvector var_902_cvector, float var_903_float, float var_904_float, bool var_905_bool, bool var_906_bool)
{
	bool var_915_bool; object var_917_object; cvector var_918_cvector; cvector var_919_cvector; float var_921_float; object var_922_object;
	var_0_cvector = false;
	bool var_916_bool;
	var_906_bool = var_916_bool;
	
	for(;;) {
		bool var_923_bool;
		func_1986(var_923_bool);
		if(!var_923_bool) { //@nz
			var_900_bool = false;
			return 16;
		}
		var_901_cvector = var_918_cvector;
		@GetPosition(var_919_cvector);
		var_921_float = (var_918_cvector - var_919_cvector) | (var_918_cvector - var_919_cvector);
		bool var_925_bool = false;
		if(var_904_float > 0) {
			if(var_921_float > (var_904_float * var_904_float))
				var_925_bool = true;
		}
		if(var_925_bool != 0) {
			@Stop();
			var_900_bool = false;
			return 16;
		}
		if(var_921_float > (var_903_float * var_903_float)) {
			@FindPathTo(var_922_object, var_918_cvector);
			if(var_922_object != null) {
				var_922_object = var_917_object;
				var_922_object = null;
			}
			if(var_917_object != null) {
				if(var_916_bool == 0) goto Label_2036;
				var_916_bool = false;
				@RotatePath(var_917_object, var_915_bool);
				if(!var_915_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_941_string;
						func_2128(var_941_string);
						string var_942_string;
						func_2130(var_942_string);
						@FollowPath(var_917_object, var_905_bool, var_915_bool, var_941_string, var_942_string);
						if(!var_915_bool) { //@nz
							if(var_0_cvector == 0) goto Label_2055;
							var_917_object = null;
						}
					EMIT "GOTO 0x808";

					Label_2055:
						} else {
					var_917_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_915_bool);
					if(!var_915_bool) { //@nz
						if(var_0_cvector != 0) {
							var_917_object = null;
							goto Label_2083;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_2083;
		}
			var_922_object = null;
			goto Label_2081;

		Label_2081:
			var_917_object = null;

		}
	Label_2083:
		for(;;) {
			if(!var_0_cvector) { //@nz
				var_937_float = GetByIndex(var_902_cvector, 0);
				var_938_float = GetByIndex(var_902_cvector, 2);
				@RotateAsync(var_937_float, var_938_float);
			}
			var_900_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


// @pe
void func_454(int var_515_int)
{
	var_515_int = 0;
}


void func_457(int var_576_int)
{
	var_576_int = 0;
}


void func_3532(bool var_995_bool)
{
	string var_998_string;
	func_3638(var_998_string);
	int var_997_int;
	@GetVariable((var_998_string + "_locked"), var_997_int);
	var_995_bool = var_997_int != 0;
}


void func_3020(bool var_83_bool)
{
	bool var_85_bool;
	@IsLoaded(var_85_bool);
	var_85_bool = var_83_bool;
}


void func_3025(object var_251_object)
{
	float var_254_float;
	var_251_object->GetEyesHeight(var_254_float);
	cvector var_255_cvector = [0.0, 0.0, 0.0];
	var_256_float = GetByIndex(var_255_cvector, 1);
	var_254_float = var_256_float;
	SetByIndex(var_255_cvector, 1) = var_256_float;
	@LookAsync(var_251_object, "head", var_255_cvector);
}


void func_1492(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_982(bool var_604_bool, float var_605_float)
{
	float var_608_float; bool var_609_bool;
	@rand(var_608_float);
	if(var_608_float < var_605_float) {

		for(;;) {
			@IsAnimationPlaying(var_609_bool);
			if(!var_609_bool) { //@nz
			} else {
				bool var_612_bool;
				func_1092(var_612_bool);
				if(var_612_bool != 0) {
					var_604_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_604_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1196(var_609_bool);
}


// @pe
void func_3543(bool var_759_bool)
{
	string var_760_string;
	func_3638(var_760_string);
	if(var_759_bool != 0)
		var_764_int = 1;
	else
		var_765_int = 0; //@pi
	@SetVariable((var_760_string + "_locked"), var_764_int);
	
}


void func_2520(object var_95_object)
{
	cvector var_106_cvector; cvector var_107_cvector; cvector var_108_cvector; cvector var_109_cvector; string var_110_string; object var_111_object; bool var_112_bool; bool var_113_bool; float var_114_float; cvector var_115_cvector;
	if(var_95_object == null) {
		func_2611("fdie");
	} else {
		var_95_object->GetPosition(var_106_cvector);
		@GetPosition(var_107_cvector);
		@GetDirection(var_108_cvector);
		var_109_cvector = var_107_cvector - var_106_cvector;
		var_149_float = GetByIndex(var_109_cvector, 0);
		var_150_float = GetByIndex(var_108_cvector, 0);
		var_152_float = GetByIndex(var_109_cvector, 2);
		var_153_float = GetByIndex(var_108_cvector, 2);
		if(((var_149_float * var_150_float) + (var_152_float * var_153_float)) >= 0)
			var_110_string = "fdie";
		else
			var_110_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_95_object = var_111_object;
		var_160_bool = IsFuncExist(var_95_object, "GetScriptProperty", 2);
		if(var_160_bool != 0) {
			var_95_object->HasScriptProperty(var_112_bool, "Owner");
			if(var_112_bool != 0) {
				var_95_object->GetScriptProperty(var_111_object, "Owner");
				if(var_111_object == null)
					var_95_object = var_111_object;
			}
		}
		var_167_bool = IsFuncExist(var_111_object, "@GetEyesHeight", 1);
		if(var_167_bool != 0) {
			var_111_object->GetEyesHeight(var_114_float);
			var_115_cvector = [0.0, 0.0, 0.0];
			var_168_float = GetByIndex(var_115_cvector, 1);
			var_114_float = var_168_float;
			SetByIndex(var_115_cvector, 1) = var_168_float;
			@LookAsync(var_95_object, "head", var_115_cvector);
			var_113_bool = true;
		} else {
			var_113_bool = false;

		}
		string var_170_string;
		var_110_string = var_170_string;
		func_3036(var_170_string);
		@PlayAnimation("all", var_110_string);
		@WaitForAnimEnd();
		if(var_113_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_110_string);
		@RemoveEnvelope();
		var_111_object = null;
	}
	
}


void func_3036(string var_366_string)
{
	bool var_375_bool; int var_376_int; bool var_377_bool; int var_378_int; bool var_379_bool; float var_380_float; cvector var_381_cvector; cvector var_382_cvector;
	@IsExisting3DSound(var_375_bool, var_366_string);
	if(!var_375_bool) { //@nz
		var_376_int = 0;

		for(;;) {
			@IsExisting3DSound(var_377_bool, (var_366_string + (var_376_int + 1)));
			if(!var_377_bool) { //@nz
				break;
			Label_3056:
				@irand(var_378_int, var_376_int);
				var_366_string += (var_378_int + 1);
	}
			@Is3DSoundLoaded(var_379_bool, var_366_string);
			if(var_379_bool != 0) {
				@GetEyesHeight(var_380_float);
				@GetDirection(var_381_cvector);
				var_382_cvector = var_381_cvector * 50;
				var_393_float = GetByIndex(var_382_cvector, 1);
				SetByIndex(var_382_cvector, 1) = (var_393_float + var_380_float);
				@PlayGlobalSound(var_366_string, var_382_cvector);
			}
		}
		var_376_int += 1;
	}
	var_388_bool = !var_376_int; //@nz
	if(var_388_bool == 0) goto Label_3056;
}


// @pe
void func_1508(bool var_285_bool, object var_286_object)
{
	object var_288_object;
	var_286_object = var_288_object;
	bool var_287_bool;
	func_2859(var_287_bool, var_288_object);
	var_287_bool = var_285_bool;
}


void func_3557(bool var_981_bool)
{
	string var_984_string;
	func_3632(var_984_string);
	int var_983_int;
	@GetVariable((var_984_string + "_locked"), var_983_int);
	int var_987_int;
	func_3640(var_987_int);
	var_981_bool = var_983_int >= var_987_int;
}


void func_1515(string var_303_string)
{
	var_303_string = "walk";
}


void func_1517(string var_304_string)
{
	var_304_string = "run";
}


// @pe
void func_1519(object var_674_object, float var_675_float)
{
	object var_681_object;
	var_674_object = var_681_object;
	bool var_680_bool;
	func_2859(var_680_bool, var_681_object);
	if(!var_680_bool) { //@nz
		bool var_683_bool;
		func_3414(var_683_bool, 2);
		return 0;
	}
	if(var_675_float > 0) {
		@SetTimer(3, var_675_float);
		bool var_688_bool; object var_689_object;
		func_1627(var_689_object, var_675_float, var_688_bool, var_689_object, 350.0, (float)6000, true, true);
		@KillTimer(3);
	} else {
		bool var_740_bool; object var_741_object;
		func_1627(var_741_object, var_675_float, var_740_bool, var_741_object, 350.0, (float)6000, true, true);
	}
	
}


void func_1009(cvector var_0_cvector, bool var_397_bool, float var_398_float)
{
	bool var_404_bool; cvector var_405_cvector; cvector var_406_cvector; cvector var_407_cvector; float var_408_float;
	
	for(;;) {
		@IsAnimationPlaying(var_404_bool);
		if(!var_404_bool) //@nz
			break;
		bool var_410_bool;
		func_1092(var_410_bool);
		if(var_410_bool != 0) {
			var_397_bool = true;
			return 10;
		}
		bool var_455_bool = true;
		bool var_456_bool;
		func_2859(var_456_bool, var_0_cvector);
		var_458_bool = !var_456_bool; //@nz
		if(var_458_bool != 1) {
			if(var_4_int != 1)
				var_455_bool = false;
		}
		if(var_455_bool != 0) {
			var_397_bool = false;
			return 10;
		}
		var_0_cvector->GetPFPosition(var_405_cvector); //@t
		@GetPFPosition(var_406_cvector);
		var_407_cvector = var_405_cvector - var_406_cvector;
		var_408_float = var_407_cvector | var_407_cvector;
		if(var_408_float < (var_398_float * var_398_float)) {
			bool var_462_bool; float var_463_float;
			var_398_float = var_463_float;
			func_836(var_407_cvector, var_408_float, var_462_bool, var_463_float);
			var_397_bool = true;
			return 10;
		}
		@sync();
	}
	func_1196(var_408_float);
	var_397_bool = false;
}


void func_3570(bool var_1008_bool)
{
	string var_1011_string;
	func_3632(var_1011_string);
	int var_1010_int;
	@GetVariable((var_1011_string + "_locked"), var_1010_int);
	if(var_1008_bool != 0)
		var_1010_int += 1;
	else
		var_1010_int += -1;
	string var_1016_string;
	func_3632(var_1016_string);
	@SetVariable((var_1016_string + "_locked"), var_1010_int);
	
}


void func_504(cvector var_0_cvector, int var_3_int, int var_4_int, bool var_6_bool, object var_121_object, bool var_122_bool, float var_123_float, bool var_229_bool, bool var_335_bool)
{
	float var_135_float; cvector var_136_cvector; cvector var_137_cvector; bool var_139_bool; float var_142_float; cvector var_143_cvector; bool var_144_bool; float var_145_float;
	func_762(var_143_cvector, var_144_bool, var_145_float);
	var_6_bool = 0;
	var_170_bool = IsFuncExist(var_121_object, "@GetAttackDistance", 1);
	if(var_170_bool != 0) {
		var_121_object->GetAttackDistance(var_135_float);
		var_135_float += 50;
	} else {
						var_123_float = var_135_float;
	}
	if(var_135_float >= 150)
		var_135_float = 150;
	var_0_cvector = var_121_object;
	bool var_138_bool;
	@IsPlayerActor(var_0_cvector, var_138_bool);
	if(var_138_bool != 0)
		@PlayGlobalMusic("attack");
	if(var_122_bool != 0)
		var_139_bool = false;
	else
		var_139_bool = true;

	
Label_539:
	for(;;) {
		bool var_178_bool = false;
		bool var_179_bool = false;
		bool var_180_bool;
		func_2859(var_180_bool, var_0_cvector);
		if(var_180_bool != 0) {
			if(!false) //@nz
				var_179_bool = true;
		}
		if(var_179_bool != 0) {
			if(!var_4_int) //@nz
				var_178_bool = true;
		}
		if(var_178_bool != 0) {
			func_1196(var_145_float);
			var_0_cvector->GetPFPosition(var_136_cvector); //@t
			@GetPFPosition(var_137_cvector);
			var_142_float = (var_136_cvector - var_137_cvector) | (var_136_cvector - var_137_cvector);
			if(var_142_float >= ((300.0 + var_135_float) * (300.0 + var_135_float))) {
				bool var_223_bool; float var_225_float;
				var_135_float = var_225_float;
				TaskCall(2);
				func_1214(var_232_object, var_223_bool, var_0_cvector, var_225_float, 2000.0, true, false);
				TaskReturn();
				if(!var_229_bool) { //@nz
					var_3_int = true;
				} else {
					var_139_bool = false;
			} else {
			if(var_142_float >= (var_123_float * var_123_float)) {
				var_0_cvector->GetPFPosition(var_143_cvector); //@t
				@CanReachByPF(var_144_bool, var_143_cvector);
				if(!var_144_bool) { //@nz
					bool var_329_bool; float var_331_float;
					var_135_float = var_331_float;
					TaskCall(2);
					func_1214(var_338_object, var_329_bool, var_0_cvector, var_331_float, 2000.0, true, false);
					TaskReturn();
					if(!var_335_bool) { //@nz
						var_3_int = true;
						goto Label_731;
					}
					var_139_bool = false;
					goto Label_539;
				}
				if(!var_139_bool) { //@nz
					func_3009(var_0_cvector);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1196(var_145_float);
					@StopAsync();
					var_139_bool = true;
					bool var_352_bool = true;
					bool var_353_bool;
					func_2859(var_353_bool, var_0_cvector);
					var_355_bool = !var_353_bool; //@nz
					if(var_355_bool != 1) {
						if(var_4_int != 1)
							var_352_bool = false;
					}
					if(var_352_bool != 0) {
						goto Label_731;
					}
				}
				@rand(var_145_float);
				bool var_357_bool;
				var_359_bool = var_145_float < 0.6;
				if(var_359_bool != 1) {
					bool var_360_bool;
					func_1153(true, var_360_bool);
					if(var_360_bool != 1)
						var_357_bool = false;
				}
				if(var_357_bool != 0) {
					@Face(var_0_cvector);
					func_1201();
					@PlayAnimation("all", "attack_stay");
					bool var_397_bool; float var_398_float;
					func_1009(var_145_float, var_397_bool, var_398_float);
					@StopAsync();
				} else {
					@Face(var_0_cvector);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1196(var_145_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_625_bool;
					func_1153(var_145_float, var_625_bool);
					var_626_bool = !var_625_bool; //@nz
					if(var_626_bool == 0) goto Label_721;
					bool var_627_bool = true;
					bool var_628_bool;
					func_2859(var_628_bool, var_0_cvector);
					var_630_bool = !var_628_bool; //@nz
					if(var_630_bool != 1) {
						if(var_4_int != 1)
							var_627_bool = false;
					}
					if(var_627_bool != 0) {
						goto Label_731;
					}
					var_0_cvector->GetPFPosition(var_136_cvector); //@t
					@GetPFPosition(var_137_cvector);
					if(!(((var_136_cvector - var_137_cvector) | (var_136_cvector - var_137_cvector)) < (var_398_float * var_398_float))) goto Label_721;
					bool var_634_bool; float var_635_float;
					var_123_float = var_635_float;
					func_836(var_144_bool, var_145_float, var_634_bool, var_635_float);
					var_636_bool = !var_634_bool; //@nz
					if(var_636_bool == 0) goto Label_721;
					goto Label_731;
			}
				bool var_637_bool; float var_638_float;
				var_123_float = var_638_float;
				func_836(var_144_bool, var_145_float, var_637_bool, var_638_float);
				if(!var_637_bool) { //@nz
					goto Label_731;
				}
				var_139_bool = true;

			}
		Label_721:
			goto Label_730;
			}
			Label_730:
			}
		}
	Label_731:
		@WaitForAnimEnd();
		bool var_319_bool = true;
		if(var_3_int != 1) {
			if(var_4_int != 1)
				var_319_bool = false;
		}
		if(var_319_bool != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_138_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


