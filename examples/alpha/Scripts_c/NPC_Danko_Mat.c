// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
		func_2216();
		bool var_6_bool;
		func_1564(var_6_bool);
		if(!var_6_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_1629("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool)
	{
		object var_6_object;
		var_5_bool = var_6_object;
		func_2220(var_6_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool)
	{
		object var_7_object;
		var_5_bool = var_7_object;
		bool var_6_bool;
		func_1552(var_6_bool, var_7_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int)
	{
		if(1 != 0) {
			func_1647();
			if(var_6_int == 14805) {
				object var_11_object; object var_12_object;
				var_11_object = var_1_object;
				var_12_object = var_0_object;
				func_1737();
			}
			if(var_6_int == 14811) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_1746();
				object var_71_object = var_1_object;
				func_1845(var_0_object);
			}
			if(var_6_int == 14812) {
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_1769();
			}
			if(var_6_int == 14816) {
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_1775();
			}
			if(var_6_int == 13511) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_1785();
			}
			if(var_6_int == 13526) {
				object var_130_object; object var_131_object;
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_1791();
			}
			if(var_6_int == 13517) {
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_1797();
			}
			if(var_6_int == 14996) {
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_1803();
			}
			if(var_6_int == 15004) {
				object var_148_object; object var_149_object;
				var_148_object = var_1_object;
				var_149_object = var_0_object;
				func_1775();
			}
			if(var_6_int == 14817) {
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_object;
				func_1809();
			}
			if(var_6_int == 15002) {
				object var_158_object; object var_159_object;
				var_158_object = var_1_object;
				var_159_object = var_0_object;
				func_1775();
			}
			if(var_6_int == 15007) {
				object var_162_object = var_1_object;
				func_1839(var_0_object);
				object var_168_object; object var_169_object;
				var_168_object = var_1_object;
				var_169_object = var_0_object;
				func_1723();
				object var_172_object; object var_173_object;
				var_172_object = var_1_object;
				var_173_object = var_0_object;
				func_1821();
				object var_185_object; object var_186_object;
				var_185_object = var_1_object;
				var_186_object = var_0_object;
				func_1729();
			}
			if(var_6_int == 15010) {
				object var_189_object; object var_190_object;
				var_189_object = var_1_object;
				var_190_object = var_0_object;
				func_1830();
			}
			if(var_5_int == 14737) {
				bool var_204_bool = false;
				bool var_205_bool;
				func_1861(var_1_object);
				if(var_205_bool != 0) {
					bool var_213_bool;
					func_1873(var_1_object);
					if(var_213_bool != 0)
						var_204_bool = true;
				}
				if(var_204_bool != 0) {
					object var_219_object; object var_220_object;
					var_219_object = var_1_object;
					var_220_object = var_0_object;
					func_1731();
					object var_223_object; object var_224_object;
					var_223_object = var_1_object;
					var_224_object = var_0_object;
					func_1815();
					func_349(var_6_int, "Neutral");
					var_0_object->SetMessage(13496); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13504, 14773, 14746); //@t
					var_0_object->AddReply(13505, 14748, 14747); //@t
					return 0;
				}
				object var_249_object; object var_250_object;
				var_249_object = var_1_object;
				var_250_object = var_0_object;
				func_1815();
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(12350); //@t
				var_0_object->ClearReplies(); //@t
				bool var_253_bool = false;
				bool var_254_bool = false;
				bool var_255_bool;
				func_1885(var_1_object);
				if(var_255_bool != 0) {
					bool var_261_bool;
					func_1897(var_261_bool, var_1_object);
					if(var_261_bool != 0)
						var_254_bool = true;
				}
				if(var_254_bool != 0) {
					bool var_270_bool;
					func_1908(var_1_object);
					if(var_270_bool != 0)
						var_253_bool = true;
				}
				if(var_253_bool != 0)
					var_0_object->AddReply(13563, 14813, 14812); //@t
				bool var_279_bool;
				func_1920(var_1_object);
				if(var_279_bool != 0)
					var_0_object->AddReply(12352, 13512, 13511); //@t
				bool var_288_bool;
				func_1932(var_1_object);
				if(var_288_bool != 0)
					var_0_object->AddReply(12366, 13527, 13526); //@t
				bool var_297_bool;
				func_1944(var_1_object);
				if(var_297_bool != 0)
					var_0_object->AddReply(12357, 13518, 13517); //@t
				bool var_306_bool = false;
				bool var_307_bool;
				func_1956(var_1_object);
				if(var_307_bool != 0) {
					bool var_313_bool;
					func_1980(var_1_object);
					if(var_313_bool != 0)
						var_306_bool = true;
				}
				if(var_306_bool != 0)
					var_0_object->AddReply(13752, 14997, 14996); //@t
				bool var_322_bool = false;
				bool var_323_bool;
				func_1968(var_1_object);
				if(var_323_bool != 0) {
					bool var_329_bool;
					func_1992(var_1_object);
					if(var_329_bool != 0)
						var_322_bool = true;
				}
				if(var_322_bool != 0)
					var_0_object->AddReply(13568, 14818, 14817); //@t
				bool var_338_bool = false;
				bool var_339_bool;
				func_2004(var_1_object);
				if(var_339_bool != 0) {
					bool var_345_bool;
					func_2016(var_345_bool, var_1_object);
					if(var_345_bool != 0)
						var_338_bool = true;
				}
				if(var_338_bool != 0)
					var_0_object->AddReply(13766, 15006, 15005); //@t
				bool var_353_bool = false;
				bool var_354_bool;
				func_2004(var_1_object);
				if(var_354_bool != 0) {
					bool var_356_bool;
					func_2016(var_356_bool, var_1_object);
					if(!var_356_bool) //@nz
						var_353_bool = true;
				}
				if(var_353_bool != 0)
					var_0_object->AddReply(13769, 15009, 15008); //@t
				var_0_object->AddReply(12351, -1, 13510); //@t
				return 0;
			}
			if(var_5_int == 15009) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13770); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13771, -1, 15010); //@t
				return 0;
			}
			if(var_5_int == 15006) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13767); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13768, -1, 15007); //@t
				return 0;
			}
			if(var_5_int == 14818) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13569); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13570, 14820, 14819); //@t
				return 0;
			}
			if(var_5_int == 14820) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13571); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13572, 15001, 14821); //@t
				return 0;
			}
			if(var_5_int == 15001) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13757); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13758, -1, 15002); //@t
				return 0;
			}
			if(var_5_int == 14997) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13754, 14999, 14998); //@t
				return 0;
			}
			if(var_5_int == 14999) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13755); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13756, 15003, 15000); //@t
				return 0;
			}
			if(var_5_int == 15003) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13759); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13760, -1, 15004); //@t
				return 0;
			}
			if(var_5_int == 13518) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(12358); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12359, 13520, 13519); //@t
				var_0_object->AddReply(13497, 14739, 14738); //@t
				return 0;
			}
			if(var_5_int == 14739) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13498); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13499, 14741, 14740); //@t
				return 0;
			}
			if(var_5_int == 14741) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13500); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13501, 14743, 14742); //@t
				return 0;
			}
			if(var_5_int == 14743) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13502); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13503, 13524, 14744); //@t
				return 0;
			}
			if(var_5_int == 13520) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(12360); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12361, 13522, 13521); //@t
				return 0;
			}
			if(var_5_int == 13522) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(12362); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12363, 13524, 13523); //@t
				return 0;
			}
			if(var_5_int == 13524) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(12364); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12365, -1, 13525); //@t
				return 0;
			}
			if(var_5_int == 13527) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(12367); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12368, 13529, 13528); //@t
				return 0;
			}
			if(var_5_int == 13529) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(12369); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12370, 13531, 13530); //@t
				return 0;
			}
			if(var_5_int == 13531) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(12371); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12372, -1, 13532); //@t
				return 0;
			}
			if(var_5_int == 13512) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(12353); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13529, 14775, 14774); //@t
				return 0;
			}
			if(var_5_int == 14775) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13530); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13531, 14777, 14776); //@t
				return 0;
			}
			if(var_5_int == 14777) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13532); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13533, 14779, 14778); //@t
				var_0_object->AddReply(13536, 14782, 14781); //@t
				return 0;
			}
			if(var_5_int == 14782) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13537); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13538, 14784, 14783); //@t
				return 0;
			}
			if(var_5_int == 14784) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13540, 14786, 14785); //@t
				return 0;
			}
			if(var_5_int == 14786) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13541); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13542, -1, 14787); //@t
				return 0;
			}
			if(var_5_int == 14779) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13534); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13535, 14788, 14780); //@t
				return 0;
			}
			if(var_5_int == 14788) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13543); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13544, 14790, 14789); //@t
				return 0;
			}
			if(var_5_int == 14790) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13546, -1, 14791); //@t
				return 0;
			}
			if(var_5_int == 14813) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13564); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13565, 14815, 14814); //@t
				return 0;
			}
			if(var_5_int == 14815) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13566); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13567, -1, 14816); //@t
				return 0;
			}
			if(var_5_int == 14748) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13506); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13507, 14750, 14749); //@t
				var_0_object->AddReply(13513, 14756, 14755); //@t
				return 0;
			}
			if(var_5_int == 14756) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13514); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13515, 14758, 14757); //@t
				var_0_object->AddReply(13517, 14760, 14759); //@t
				return 0;
			}
			if(var_5_int == 14760) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13518); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13520, 14750, 14763); //@t
				return 0;
			}
			if(var_5_int == 14758) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13516); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13519, 14750, 14761); //@t
				return 0;
			}
			if(var_5_int == 14750) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13508); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13521, 14766, 14765); //@t
				var_0_object->AddReply(13509, 14752, 14751); //@t
				return 0;
			}
			if(var_5_int == 14752) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13510); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13511, 14754, 14753); //@t
				return 0;
			}
			if(var_5_int == 14754) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13547, 14773, 14792); //@t
				return 0;
			}
			if(var_5_int == 14766) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13522); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13523, 14769, 14767); //@t
				var_0_object->AddReply(13524, 14769, 14768); //@t
				return 0;
			}
			if(var_5_int == 14769) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13525); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13526, 14773, 14770); //@t
				var_0_object->AddReply(13527, -1, 14772); //@t
				return 0;
			}
			if(var_5_int == 14773) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13528); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13548, 14796, 14795); //@t
				return 0;
			}
			if(var_5_int == 14796) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13549); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13550, 14800, 14797); //@t
				var_0_object->AddReply(13551, 14799, 14798); //@t
				return 0;
			}
			if(var_5_int == 14799) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13552); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13554, 14800, 14801); //@t
				return 0;
			}
			if(var_5_int == 14800) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13553); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13556, -1, 14805); //@t
				var_0_object->AddReply(13557, 14807, 14806); //@t
				return 0;
			}
			if(var_5_int == 14807) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13558); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13559, 14810, 14808); //@t
				var_0_object->AddReply(13560, -1, 14809); //@t
				return 0;
			}
			if(var_5_int == 14810) {
				func_349(var_6_int, "Neutral");
				var_0_object->SetMessage(13561); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13562, -1, 14811); //@t
				return 0;
			}
			var_3_string = true;
			bool var_703_bool;
			func_1721(var_703_bool);
			if(var_703_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x16e";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_1797(void)
{
	@SetVariable("ood8Mat5", 1);
}


// @pe
void func_1803(void)
{
	@SetVariable("ood8Mat6", 1);
}


void func_1552(bool var_6_bool, object var_7_object)
{
	cvector var_12_cvector;
	var_7_object->GetPosition(var_12_cvector);
	cvector var_13_cvector;
	@GetPosition(var_13_cvector);
	cvector var_14_cvector = var_12_cvector - var_13_cvector;
	var_16_float = GetByIndex(var_14_cvector, 0);
	var_17_float = GetByIndex(var_14_cvector, 2);
	bool var_15_bool;
	@Rotate(var_16_float, var_17_float, var_15_bool);
	var_15_bool = var_6_bool;
}


// @pe
void func_1809(void)
{
	@SetVariable("ood8Mat7", 1);
}


void func_2069(object var_48_object)
{
	object var_51_object; object var_52_object;
	@GetMainOutdoorScene(var_51_object);
	if(var_51_object == null) {
		@Trace("Can't find main outdoor scene");
		var_52_object = null;
		var_52_object = var_48_object;
	}
	var_51_object->GetMap(var_52_object);
	var_52_object = var_48_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1815(void)
{
	@SetVariable("d8TalkToMat", 1);
}


void func_1564(bool var_6_bool)
{
	bool var_8_bool;
	@IsLoaded(var_8_bool);
	var_8_bool = var_6_bool;
}


// @pe
void func_1821(void)
{
	@SetVariable("d8q02", 1000);
	func_2184();
}


void func_1569(bool var_26_bool, object var_27_object)
{
	cvector var_37_cvector;
	var_27_object->GetPosition(var_37_cvector);
	float var_36_float;
	var_27_object->GetEyesHeight(var_36_float);
	var_44_float = GetByIndex(var_37_cvector, 1);
	SetByIndex(var_37_cvector, 1) = (var_44_float + var_36_float);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	@GetEyesHeight(var_36_float);
	var_45_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_45_float + var_36_float);
	cvector var_39_cvector = var_37_cvector - var_38_cvector;
	var_46_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (float)0;
	var_48_float = sqrt(var_39_cvector | var_39_cvector);
	var_39_cvector /= var_48_float;
	cvector var_40_cvector = -var_39_cvector;
	cvector var_51_cvector;
	func_1654(var_51_cvector, (var_40_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_41_cvector = ((var_39_cvector * 70) + (var_51_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_43_bool;
	@IsOverrideActive(var_43_bool);
	if(var_43_bool != 0)
		var_26_bool = false;
	@StopWorld();
	@CameraTransit((var_38_cvector + var_41_cvector), var_40_cvector);
	var_64_float = GetByIndex(var_41_cvector, 0);
	var_65_float = GetByIndex(var_41_cvector, 2);
	@Rotate(var_64_float, var_65_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
}


// @pe
void func_1830(void)
{
	@SetVariable("d8q02", -1);
	func_2200();
}


void func_2086(object var_73_object, string var_74_string, float var_75_float)
{
	object var_83_object;
	@GetMainOutdoorScene(var_83_object);
	if(var_83_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_81_cvector;
	cvector var_82_cvector;
	bool var_84_bool;
	var_83_object->GetLocator(var_74_string, var_84_bool, var_81_cvector, var_82_cvector);
	if(!var_84_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_74_string) + " doesnt exist");
	var_83_object->GetMap(var_73_object);
	if(var_73_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_94_float = GetByIndex(var_81_cvector, 0);
	var_95_float = GetByIndex(var_81_cvector, 2);
	var_73_object->SetMapParams(var_94_float, var_95_float, var_75_float);
}
EMIT "Stack[-2] = 0";


void func_1839(object var_162_object)
{
	int var_165_int;
	var_162_object->RemoveItemByType(var_165_int, "feromicin", 1);
}


void func_49(object var_0_object, int var_15_int, object var_16_object)
{
	var_0_object = var_16_object;
	bool var_26_bool; object var_27_object;
	var_16_object = var_27_object;
	func_1569(var_26_bool, var_27_object);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_67_int;
	func_1717(var_67_int);
	var_22_object->SetNPCName(var_67_int);
	string var_68_string;
	func_1719(var_68_string);
	var_22_object->SetPhoto(var_68_string);
	int var_69_int;
	func_2119(var_69_int);
	var_22_object->SetPlayerName(var_69_int);
	bool var_23_bool;
	@IsOverrideActive(var_23_bool);
	if(var_23_bool != 0) {
		var_15_int = -2;
		return 8;
	}
	@DoDialog(var_22_object);
	object var_78_object; object var_79_object;
	var_16_object = var_78_object;
	var_22_object = var_79_object;
	TaskCall(3);
	func_112(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object);
	TaskReturn();
	bool var_25_bool;
	var_22_object->IsDialogEnd(var_25_bool);
	
	for(;;) {
		var_254_bool = !var_25_bool; //@nz
		if(var_254_bool == 0) goto Label_101;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_101:
	object var_255_object;
	var_16_object = var_255_object;
	func_1625();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1845(object var_72_object)
{
	object var_76_object;
	func_2069(var_76_object);
	object var_73_object;
	var_76_object = var_73_object;
	func_2086(var_73_object, "pt_map_d8q01_toyhouse", (float)2);
	object var_96_object;
	func_2069(var_96_object);
	var_72_object->ShowMap(var_96_object);
}


// @pe
void func_1861(bool var_205_bool)
{
	int var_207_int;
	func_1664(var_207_int, "d8q01");
	if(var_207_int == 1)
		var_205_bool = true;
	var_205_bool = false;
}


void func_2119(int var_69_int)
{
	int var_71_int;
	@GetVariable("player", var_71_int);
	if(var_71_int == 0) {
		var_69_int = 200001;
		return 2;
	EMIT "GOTO 0x856";
	}
	if(var_71_int == 1) {
		var_69_int = 200002;
		return 2;
	}
	var_69_int = 200003;
}


// @pe
void func_1873(bool var_213_bool)
{
	int var_215_int;
	func_1664(var_215_int, "ood8Mat1");
	if(var_215_int == 0) {
		var_213_bool = true;
		return 0;
	}
	var_213_bool = false;
}


void func_2136(void)
{
	@Trace("Adding diary entry");
	object var_16_object;
	@CreateDiaryEntry(var_16_object, 179, 1, 15441);
	bool var_21_bool; object var_22_object;
	var_16_object = var_22_object;
	func_2040(var_21_bool, var_22_object, 175);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1625(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_349(object var_2_object, string var_227_string)
{
	bool var_228_bool;
	func_1721(var_228_bool);
	if(!var_228_bool) //@nz
		return 0;
	if(var_227_string == var_2_object)
		return 0;
	string var_231_string;
	func_1629(var_231_string);
	var_2_object = var_231_string;
}


// @pe
void func_1885(bool var_255_bool)
{
	int var_257_int;
	func_1664(var_257_int, "d8q01MatBringToy");
	if(var_257_int == 1)
		var_255_bool = true;
	var_255_bool = false;
}


void func_1629(string var_10_string)
{
	@Trace("playing " + var_10_string);
	float var_13_float;
	float var_14_float;
	@lshGetAnimTimes(var_10_string, var_13_float, var_14_float);
	@lshPlayAnimation(var_13_float, var_14_float);
	@Trace("start: " + var_13_float);
	@Trace("end: " + var_14_float);
}


void func_2152(void)
{
	@Trace("Adding diary entry");
	object var_63_object;
	@CreateDiaryEntry(var_63_object, 180, 1, 15442);
	bool var_68_bool; object var_69_object;
	var_63_object = var_69_object;
	func_2040(var_68_bool, var_69_object, 175);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1897(bool var_261_bool, object var_262_object)
{
	object var_264_object;
	var_262_object = var_264_object;
	bool var_263_bool;
	func_1669(var_263_bool, var_264_object, "toy_horse");
	if(var_263_bool != 0) {
		var_261_bool = true;
		return 0;
	}
	var_261_bool = false;
}


void func_1647(void)
{
	bool var_8_bool;
	func_1721(var_8_bool);
	if(var_8_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_78_object, object var_79_object)
{
	var_0_object = var_79_object;
	var_1_object = var_78_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_85_bool = false;
		bool var_86_bool;
		func_1861(var_1_object);
		if(var_86_bool != 0) {
			bool var_94_bool;
			func_1873(var_1_object);
			if(var_94_bool != 0)
				var_85_bool = true;
		}
		if(var_85_bool != 0) {
			object var_100_object; object var_101_object;
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_1731();
			object var_104_object; object var_105_object;
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_1815();
			func_349(var_79_object, "Neutral");
			var_0_object->SetMessage(13496); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(13504, 14773, 14746); //@t
			var_0_object->AddReply(13505, 14748, 14747); //@t
		} else {
					object var_138_object; object var_139_object;
					var_138_object = var_1_object;
					var_139_object = var_0_object;
					func_1815();
					func_349(var_79_object, "Neutral");
					var_0_object->SetMessage(12350); //@t
					var_0_object->ClearReplies(); //@t
					bool var_142_bool = false;
					bool var_143_bool = false;
					bool var_144_bool;
					func_1885(var_1_object);
					if(var_144_bool != 0) {
						bool var_150_bool;
						func_1897(var_150_bool, var_1_object);
						if(var_150_bool != 0)
							var_143_bool = true;
					}
					if(var_143_bool != 0) {
						bool var_159_bool;
						func_1908(var_1_object);
						if(var_159_bool != 0)
							var_142_bool = true;
					}
					if(var_142_bool != 0)
						var_0_object->AddReply(13563, 14813, 14812); //@t
					bool var_168_bool;
					func_1920(var_1_object);
					if(var_168_bool != 0)
						var_0_object->AddReply(12352, 13512, 13511); //@t
					bool var_177_bool;
					func_1932(var_1_object);
					if(var_177_bool != 0)
						var_0_object->AddReply(12366, 13527, 13526); //@t
					bool var_186_bool;
					func_1944(var_1_object);
					if(var_186_bool != 0)
						var_0_object->AddReply(12357, 13518, 13517); //@t
					bool var_195_bool = false;
					bool var_196_bool;
					func_1956(var_1_object);
					if(var_196_bool != 0) {
						bool var_202_bool;
						func_1980(var_1_object);
						if(var_202_bool != 0)
							var_195_bool = true;
					}
					if(var_195_bool != 0)
						var_0_object->AddReply(13752, 14997, 14996); //@t
					bool var_211_bool = false;
					bool var_212_bool;
					func_1968(var_1_object);
					if(var_212_bool != 0) {
						bool var_218_bool;
						func_1992(var_1_object);
						if(var_218_bool != 0)
							var_211_bool = true;
					}
					if(var_211_bool != 0)
						var_0_object->AddReply(13568, 14818, 14817); //@t
					bool var_227_bool = false;
					bool var_228_bool;
					func_2004(var_1_object);
					if(var_228_bool != 0) {
						bool var_234_bool;
						func_2016(var_234_bool, var_1_object);
						if(var_234_bool != 0)
							var_227_bool = true;
					}
					if(var_227_bool != 0)
						var_0_object->AddReply(13766, 15006, 15005); //@t
					bool var_242_bool = false;
					bool var_243_bool;
					func_2004(var_1_object);
					if(var_243_bool != 0) {
						bool var_245_bool;
						func_2016(var_245_bool, var_1_object);
						if(!var_245_bool) //@nz
							var_242_bool = true;
					}
					if(var_242_bool != 0)
						var_0_object->AddReply(13769, 15009, 15008); //@t
					var_0_object->AddReply(12351, -1, 13510); //@t
		}
	}
	for(;;) {
		bool var_130_bool;
		func_1721(var_130_bool);
		if(var_130_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_1629(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_348;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_348:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x74";


// @pe
void func_1908(bool var_270_bool)
{
	int var_272_int;
	func_1664(var_272_int, "ood8Mat2");
	if(var_272_int == 0) {
		var_270_bool = true;
		return 0;
	}
	var_270_bool = false;
}


void func_1654(cvector var_51_cvector, cvector var_52_cvector)
{
	float var_55_float = sqrt(var_52_cvector | var_52_cvector);
	if(var_55_float < 0.000001)
		var_51_cvector = [0.0, 0.0, 0.0];
	var_51_cvector = var_52_cvector / var_55_float;
}


void func_2168(void)
{
	@Trace("Adding diary entry");
	object var_108_object;
	@CreateDiaryEntry(var_108_object, 181, 1, 15443);
	bool var_113_bool; object var_114_object;
	var_108_object = var_114_object;
	func_2040(var_113_bool, var_114_object, 175);
}
EMIT "Stack[-1] = 0";


void func_1664(int var_207_int, string var_208_string)
{
	int var_210_int;
	@GetVariable(var_208_string, var_210_int);
	var_210_int = var_207_int;
}


// @pe
void func_1920(bool var_279_bool)
{
	int var_281_int;
	func_1664(var_281_int, "ood8Mat3");
	if(var_281_int == 0) {
		var_279_bool = true;
		return 0;
	}
	var_279_bool = false;
}


void func_1669(bool var_263_bool, object var_264_object, string var_265_string)
{
	int var_268_int;
	@GetInvItemByName(var_268_int, var_265_string);
	bool var_269_bool;
	var_264_object->HasItem(var_268_int, var_269_bool);
	var_269_bool = var_263_bool;
}


void func_2184(void)
{
	@Trace("Adding diary entry");
	object var_177_object;
	@CreateDiaryEntry(var_177_object, 128, 2, 13773);
	bool var_182_bool; object var_183_object;
	var_177_object = var_183_object;
	func_2040(var_182_bool, var_183_object, 127);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1932(bool var_288_bool)
{
	int var_290_int;
	func_1664(var_290_int, "ood8Mat4");
	if(var_290_int == 0) {
		var_288_bool = true;
		return 0;
	}
	var_288_bool = false;
}


void func_1676(bool var_116_bool, string var_117_string, string var_118_string)
{
	object var_120_object;
	@FindActor(var_120_object, var_117_string);
	if(var_120_object == null)
		var_116_bool = false;
	@Trigger(var_120_object, var_118_string);
	var_116_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1688(float var_59_float)
{
	float var_61_float;
	@GetGameTime(var_61_float);
	var_61_float = var_59_float;
}


// @pe
void func_1944(bool var_297_bool)
{
	int var_299_int;
	func_1664(var_299_int, "ood8Mat5");
	if(var_299_int == 0) {
		var_297_bool = true;
		return 0;
	}
	var_297_bool = false;
}


void func_2200(void)
{
	@Trace("Adding diary entry");
	object var_194_object;
	@CreateDiaryEntry(var_194_object, 129, 2, 13774);
	bool var_199_bool; object var_200_object;
	var_194_object = var_200_object;
	func_2040(var_199_bool, var_200_object, 127);
}
EMIT "Stack[-1] = 0";


void func_1693(int var_9_int)
{
	float var_11_float;
	@GetGameTime(var_11_float);
	var_9_int = 1 + (var_11_float / 24);
}


// @pe
void func_1956(bool var_307_bool)
{
	int var_309_int;
	func_1664(var_309_int, "d8q01BigVladIsVictim");
	if(var_309_int == 1)
		var_307_bool = true;
	var_307_bool = false;
}


// @pe
void func_1702(bool var_7_bool, int var_8_int)
{
	int var_9_int;
	func_1693(var_9_int);
	var_7_bool = var_9_int == var_8_int;
}


void func_2216(void)
{
	var_5_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


// @pe
void func_2220(object var_6_object)
{
	bool var_7_bool;
	func_1702(var_7_bool, 8);
	if(var_7_bool != 0) {
		int var_15_int; object var_16_object;
		var_6_object = var_16_object;
		TaskCall(2);
		func_49(var_17_object, var_15_int, var_16_object);
		TaskReturn();
		return 0;
	}
	bool var_256_bool;
	func_1708(var_256_bool);
}


void func_1708(bool var_256_bool)
{
	func_1629("No");
	bool var_258_bool;
	@lshWaitForAnimEnd(var_258_bool);
	var_258_bool = var_256_bool;
}


// @pe
void func_1968(bool var_323_bool)
{
	int var_325_int;
	func_1664(var_325_int, "d8q01MladVladIsVictim");
	if(var_325_int == 1)
		var_323_bool = true;
	var_323_bool = false;
}


void func_1717(int var_67_int)
{
	var_67_int = 2870;
}


void func_1719(string var_68_string)
{
	var_68_string = "ui/NPC_Mat.png";
}


void func_1721(bool var_8_bool)
{
	var_8_bool = true;
}


// @pe
void func_1723(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_1980(bool var_313_bool)
{
	int var_315_int;
	func_1664(var_315_int, "ood8Mat6");
	if(var_315_int == 0) {
		var_313_bool = true;
		return 0;
	}
	var_313_bool = false;
}


// @pe
void func_1729(void)
{
}


// @pe
void func_1731(void)
{
	@SetVariable("ood8Mat1", 1);
}


// @pe
void func_1992(bool var_329_bool)
{
	int var_331_int;
	func_1664(var_331_int, "ood8Mat7");
	if(var_331_int == 0) {
		var_329_bool = true;
		return 0;
	}
	var_329_bool = false;
}


// @pe
void func_1737(void)
{
	@SetVariable("d8q01BringBadBoy", 1);
	func_2136();
}


void func_1746(void)
{
	@SetVariable("d8q01MatBringToy", 1);
	object var_48_object;
	func_2069(var_48_object);
	object var_45_object;
	var_48_object = var_45_object;
	float var_59_float;
	func_1688(var_59_float);
	var_45_object->AddMark("d8q01MatGotoToyHouse", "pt_map_d8q01_toyhouse", 1, 15444, var_59_float);
	func_2152();
}
EMIT "Stack[-1] = 0";


// @pe
void func_2004(bool var_339_bool)
{
	int var_341_int;
	func_1664(var_341_int, "d8q02");
	if(var_341_int == 1)
		var_339_bool = true;
	var_339_bool = false;
}


// @pe
void func_2016(bool var_345_bool, object var_346_object)
{
	object var_348_object;
	var_346_object = var_348_object;
	bool var_347_bool;
	func_1669(var_347_bool, var_348_object, "feromicin");
	if(var_347_bool != 0) {
		var_345_bool = true;
		return 0;
	}
	var_345_bool = false;
}


// @pe
void func_1769(void)
{
	@SetVariable("ood8Mat2", 1);
}


void func_2027(object var_30_object)
{
	object var_32_object;
	@GetDiaryRoot(var_32_object);
	if(!var_32_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_30_object = false;
	}
	var_32_object = var_30_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1775(void)
{
	func_2168();
	bool var_116_bool;
	func_1676(var_116_bool, "quest_d8_01", "unlock_boiny");
}


void func_2040(bool var_21_bool, object var_22_object, int var_23_int)
{
	object var_30_object;
	func_2027(var_30_object);
	object var_27_object;
	var_30_object = var_27_object;
	object var_28_object;
	var_27_object->Find(var_23_int, var_28_object);
	if(!var_28_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_23_int);
		var_21_bool = false;
	}
	var_28_object->AddChild(var_22_object);
	@SetVariable("player_diary", 1);
	int var_29_int;
	var_22_object->GetCategory(var_29_int);
	@SetDiarySection(var_29_int);
	var_21_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1785(void)
{
	@SetVariable("ood8Mat3", 1);
}


// @pe
void func_1791(void)
{
	@SetVariable("ood8Mat4", 1);
}


