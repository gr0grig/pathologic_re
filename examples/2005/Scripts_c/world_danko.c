// @GLOBALS: 0:object:,1:object:,2:object:,3:object:,4:object:,5:object:,6:object:,7:object:,8:object:,9:object:,10:object:,11:object:,12:object:,13:object:,14:object:,15:object:,16:object:

maintask task_0
{
	void init(void)
	{
		@SetVariable("branch", 0);
		@SetSaveProperty(0, 0);
		func_57();
		func_7873();
		func_8648();
		func_12255();
		float var_4569_float;
		float var_4570_float;
		func_212(var_4570_float);
		var_4570_float = var_4569_float;
		func_13599(var_4569_float);
		func_150("burah_home@door1", true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnGameTime(int iID, float fTime)
	{
		int var_3_int;
		iID = var_3_int;
		float var_4_float;
		fTime = var_4_float;
		func_8593(var_3_int, var_4_float);
		bool var_2_bool;
		if(var_2_bool != 0)
			return 0;
		bool var_4149_bool; int var_4150_int; float var_4151_float;
		iID = var_4150_int;
		fTime = var_4151_float;
		func_12194(var_4150_int, var_4151_float);
		if(var_4149_bool != 0)
			return 0;
		int var_4555_int; float var_4556_float;
		iID = var_4555_int;
		fTime = var_4556_float;
		func_12290(var_4555_int, var_4556_float);
	}

}


void OnTrigger(string name, string var_1_string)
{
	int var_4_int;
	if(name == "playsound") {
		@PlaySound(var_1_string);
	} else if(name == "enable_bonfire") {
			@_strtoi(var_4_int, var_1_string);
			func_7573(var_4_int - 1);
	}
Label_7461:
	for(;;) {

	}
	
	if(!(name == "disable_bonfire")) goto Label_7461;
	int var_5_int;
	@_strtoi(var_5_int, var_1_string);
	func_7650(var_5_int - 1);
}


void OnConsole(string var_0_string, string var_1_string)
{
	int var_12_int; int var_13_int; object var_14_object; int var_15_int; int var_16_int; object var_17_object; object var_18_object; object var_19_object; cvector var_20_cvector; object var_21_object;
	if(var_0_string == "horror") {
		@_strtoi(var_12_int, var_1_string);
		int var_24_int;
		var_12_int = var_24_int;
		func_384(var_24_int);
		var_39_object = GlobalVars[13];
		var_39_object->size(var_13_int);
		bool var_40_bool = false;
		if(var_12_int >= 0) {
			if(var_12_int < var_13_int)
				var_40_bool = true;
		}
		if(var_40_bool != 0) {
			var_44_object = GlobalVars[13];
			var_44_object->get(var_14_object, var_12_int);
			object var_45_object;
			var_14_object = var_45_object;
			func_248(var_45_object, 1);
			@Trace("Replaced");
			var_14_object = null;
		} else {
				@Trace("Invalid region index");
	}
			if(var_0_string == "nail") {
				@_strtoi(var_15_int, var_1_string);
				int var_76_int;
				var_15_int = var_76_int;
				func_414(var_76_int);
				var_88_object = GlobalVars[13];
				var_88_object->size(var_16_int);
				bool var_89_bool = false;
				if(var_15_int >= 0) {
					if(var_15_int < var_16_int)
						var_89_bool = true;
				}
				if(var_89_bool != 0) {
					var_93_object = GlobalVars[13];
					var_93_object->get(var_17_object, var_15_int);
					object var_94_object;
					var_17_object = var_94_object;
					func_248(var_94_object, 2);
					@Trace("Replaced");
					var_17_object = null;
				} else {
				@Trace("Invalid region index");
			}
			if(var_0_string == "fogme") {
				object var_100_object;
				func_80(var_100_object);
				var_100_object = var_18_object;
				var_18_object->GetScene(var_19_object);
				var_18_object->GetPosition(var_20_cvector);
				@AddActorByType(var_21_object, "fog", var_19_object, var_20_cvector, [0.0, 0.0, 1.0], "fog_stat.xml");
				var_21_object = null;
				var_19_object = null;
				var_18_object = null;
			} else if(var_0_string == "sepia") {
				func_232();
			} else if(var_0_string == "nosepia") {
				func_237();
			}
			}
	}
	goto Label_7572;
	
Label_7572:
	for(;;) {

	}
	
}


// @pe
void func_12290(int var_4555_int, float var_4556_float)
{
	if(var_4555_int == 45003) {
		object var_4559_object; object var_4560_object;
		var_4561_object = GlobalVars[16];
		var_4561_object = var_4559_object;
		var_4562_object = GlobalVars[16];
		var_4562_object = var_4560_object;
		func_10500();
		int var_4631_int; float var_4632_float;
		var_4556_float = var_4632_float;
		func_9733(var_4631_int, var_4632_float);
		object var_4640_object;
		func_110(var_4640_object, "quest_d2_01");
		bool var_4648_bool;
		func_167(var_4648_bool, "quest_d1_01", "cleanup");
		bool var_4651_bool;
		func_167(var_4651_bool, "tutorial_mask1", "cleanup");
		bool var_4654_bool;
		func_167(var_4654_bool, "tutorial_mask2", "cleanup");
	}
	if(var_4555_int == 45005) {
		object var_4659_object; object var_4660_object;
		var_4661_object = GlobalVars[16];
		var_4661_object = var_4659_object;
		var_4662_object = GlobalVars[16];
		var_4662_object = var_4660_object;
		func_10660();
		bool var_4710_bool;
		func_167(var_4710_bool, "quest_d2_01", "cleanup");
		object var_4713_object;
		func_110(var_4713_object, "quest_d3_01");
	}
	if(var_4555_int == 45006) {
		object var_4717_object; object var_4718_object;
		var_4719_object = GlobalVars[16];
		var_4719_object = var_4717_object;
		var_4720_object = GlobalVars[16];
		var_4720_object = var_4718_object;
		func_10806();
		bool var_4756_bool;
		func_167(var_4756_bool, "quest_d3_01", "cleanup");
		object var_4759_object;
		func_110(var_4759_object, "quest_d4_01");
	}
	if(var_4555_int == 45007) {
		object var_4763_object; object var_4764_object;
		var_4765_object = GlobalVars[16];
		var_4765_object = var_4763_object;
		var_4766_object = GlobalVars[16];
		var_4766_object = var_4764_object;
		func_10451();
	}
	if(var_4555_int == 45008) {
		bool var_4779_bool; object var_4780_object;
		var_4781_object = GlobalVars[16];
		var_4781_object = var_4780_object;
		func_11635(var_4780_object);
		if(var_4779_bool != 0) {
			int var_4788_int; float var_4789_float;
			var_4556_float = var_4789_float;
			func_9751(var_4788_int, var_4789_float);
		}
	}
	if(var_4555_int == 45009) {
		int var_4796_int; float var_4797_float;
		var_4556_float = var_4797_float;
		func_9742(var_4796_int, var_4797_float);
	}
	if(var_4555_int == 45010) {
		bool var_4804_bool = false;
		bool var_4805_bool; object var_4806_object;
		var_4807_object = GlobalVars[16];
		var_4807_object = var_4806_object;
		func_11897(var_4806_object);
		if(!var_4805_bool) { //@nz
			bool var_4813_bool; object var_4814_object;
			var_4815_object = GlobalVars[16];
			var_4815_object = var_4814_object;
			func_11623(var_4814_object);
			if(!var_4813_bool) //@nz
				var_4804_bool = true;
		}
		if(var_4804_bool != 0) {
			object var_4821_object; object var_4822_object;
			var_4823_object = GlobalVars[16];
			var_4823_object = var_4821_object;
			var_4824_object = GlobalVars[16];
			var_4824_object = var_4822_object;
			func_10170();
			int var_4835_int; float var_4836_float;
			var_4556_float = var_4836_float;
			func_9769(var_4835_int, var_4836_float);
		}
	}
	if(var_4555_int == 45011) {
		object var_4843_object; object var_4844_object;
		var_4845_object = GlobalVars[16];
		var_4845_object = var_4843_object;
		var_4846_object = GlobalVars[16];
		var_4846_object = var_4844_object;
		func_10910();
		bool var_4900_bool;
		func_167(var_4900_bool, "quest_d4_01", "cleanup");
		object var_4903_object;
		func_121(var_4903_object, "quest_d5_01");
	}
	if(var_4555_int == 45012) {
		object var_4913_object; object var_4914_object;
		var_4915_object = GlobalVars[16];
		var_4915_object = var_4913_object;
		var_4916_object = GlobalVars[16];
		var_4916_object = var_4914_object;
		func_11074();
		int var_4962_int; float var_4963_float;
		var_4556_float = var_4963_float;
		func_9949(var_4962_int, var_4963_float);
		bool var_4968_bool;
		func_167(var_4968_bool, "quest_d5_01", "cleanup");
		object var_4971_object;
		func_110(var_4971_object, "quest_d6_01");
	}
	if(var_4555_int == 45013) {
		object var_4975_object; object var_4976_object;
		var_4977_object = GlobalVars[16];
		var_4977_object = var_4975_object;
		var_4978_object = GlobalVars[16];
		var_4978_object = var_4976_object;
		func_11213();
		bool var_5026_bool;
		func_167(var_5026_bool, "quest_d6_01", "cleanup");
		object var_5029_object;
		func_110(var_5029_object, "quest_d7_01");
	}
	if(var_4555_int == 45015) {
		bool var_5033_bool; object var_5034_object;
		var_5035_object = GlobalVars[16];
		var_5035_object = var_5034_object;
		func_11909(var_5034_object);
		if(var_5033_bool != 0) {
			int var_5040_int; float var_5041_float;
			var_4556_float = var_5041_float;
			func_9994(var_5040_int, var_5041_float);
		}
	}
	if(var_4555_int == 45016) {
		object var_5048_object; object var_5049_object;
		var_5050_object = GlobalVars[16];
		var_5050_object = var_5048_object;
		var_5051_object = GlobalVars[16];
		var_5051_object = var_5049_object;
		func_11359();
		object var_5085_object; object var_5086_object;
		var_5087_object = GlobalVars[16];
		var_5087_object = var_5085_object;
		var_5088_object = GlobalVars[16];
		var_5088_object = var_5086_object;
		func_10470();
		bool var_5091_bool;
		func_167(var_5091_bool, "quest_d7_01", "cleanup");
		object var_5094_object;
		func_110(var_5094_object, "quest_d8_01");
	}
	if(var_4555_int == 45017) {
		object var_5098_object; object var_5099_object;
		var_5100_object = GlobalVars[16];
		var_5100_object = var_5098_object;
		var_5101_object = GlobalVars[16];
		var_5101_object = var_5099_object;
		func_10186();
		bool var_5129_bool;
		func_167(var_5129_bool, "quest_d8_01", "cleanup");
		object var_5132_object;
		func_110(var_5132_object, "quest_d9_01");
	}
	if(var_4555_int == 45018) {
		object var_5136_object; object var_5137_object;
		var_5138_object = GlobalVars[16];
		var_5138_object = var_5136_object;
		var_5139_object = GlobalVars[16];
		var_5139_object = var_5137_object;
		func_11460();
		bool var_5165_bool;
		func_167(var_5165_bool, "quest_d9_01", "cleanup");
		object var_5168_object;
		func_110(var_5168_object, "quest_d10_01");
	}
	if(var_4555_int == 45031) {
		object var_5172_object; object var_5173_object;
		var_5174_object = GlobalVars[16];
		var_5174_object = var_5172_object;
		var_5175_object = GlobalVars[16];
		var_5175_object = var_5173_object;
		func_11523();
		bool var_5199_bool;
		func_167(var_5199_bool, "quest_d10_01", "cleanup");
		object var_5202_object;
		func_110(var_5202_object, "quest_d11_01");
	}
	if(var_4555_int == 45032) {
		object var_5206_object;
		func_110(var_5206_object, "quest_d11_02");
	}
	if(var_4555_int == 45035) {
		bool var_5210_bool; object var_5211_object;
		var_5212_object = GlobalVars[16];
		var_5212_object = var_5211_object;
		func_11933(var_5211_object);
		if(!var_5210_bool) { //@nz
			object var_5218_object; object var_5219_object;
			var_5220_object = GlobalVars[16];
			var_5220_object = var_5218_object;
			var_5221_object = GlobalVars[16];
			var_5221_object = var_5219_object;
			func_10470();
			int var_5222_int; float var_5223_float;
			var_4556_float = var_5223_float;
			func_9670(var_5222_int, var_5223_float);
		}
	}
	if(var_4555_int == 45036) {
		bool var_5230_bool; object var_5231_object;
		var_5232_object = GlobalVars[16];
		var_5232_object = var_5231_object;
		func_11921(var_5231_object);
		if(!var_5230_bool) { //@nz
			object var_5238_object; object var_5239_object;
			var_5240_object = GlobalVars[16];
			var_5240_object = var_5238_object;
			var_5241_object = GlobalVars[16];
			var_5241_object = var_5239_object;
			func_10486();
			int var_5244_int; float var_5245_float;
			var_4556_float = var_5245_float;
			func_9661(var_5244_int, var_5245_float);
		}
	}
	if(var_4555_int == 45038) {
		bool var_5252_bool; object var_5253_object;
		var_5254_object = GlobalVars[16];
		var_5254_object = var_5253_object;
		func_11945(var_5253_object);
		if(!var_5252_bool) { //@nz
			int var_5260_int; float var_5261_float;
			var_4556_float = var_5261_float;
			func_9814(var_5260_int, var_5261_float);
		}
	}
	if(var_4555_int == 45039) {
		bool var_5268_bool; object var_5269_object;
		var_5270_object = GlobalVars[16];
		var_5270_object = var_5269_object;
		func_11957(var_5269_object);
		if(!var_5268_bool) { //@nz
			object var_5276_object; object var_5277_object;
			var_5278_object = GlobalVars[16];
			var_5278_object = var_5276_object;
			var_5279_object = GlobalVars[16];
			var_5279_object = var_5277_object;
			func_10163();
			int var_5282_int; float var_5283_float;
			var_4556_float = var_5283_float;
			func_9859(var_5282_int, var_5283_float);
		}
	}
	if(var_4555_int == 45040) {
		bool var_5290_bool; object var_5291_object;
		var_5292_object = GlobalVars[16];
		var_5292_object = var_5291_object;
		func_11969(var_5291_object);
		if(!var_5290_bool) { //@nz
			int var_5298_int; float var_5299_float;
			var_4556_float = var_5299_float;
			func_9850(var_5298_int, var_5299_float);
		}
	}
	if(var_4555_int == 45041) {
		bool var_5306_bool; object var_5307_object;
		var_5308_object = GlobalVars[16];
		var_5308_object = var_5307_object;
		func_11981(var_5307_object);
		if(!var_5306_bool) { //@nz
			int var_5314_int; float var_5315_float;
			var_4556_float = var_5315_float;
			func_9913(var_5314_int, var_5315_float);
		}
	}
	if(var_4555_int == 45042) {
		object var_5322_object; object var_5323_object;
		var_5324_object = GlobalVars[16];
		var_5324_object = var_5322_object;
		var_5325_object = GlobalVars[16];
		var_5325_object = var_5323_object;
		func_11585();
		bool var_5343_bool;
		func_167(var_5343_bool, "quest_d11_01", "cleanup");
		object var_5346_object;
		func_110(var_5346_object, "quest_d12_01");
	}
	if(var_4555_int == 45043) {
		bool var_5350_bool; object var_5351_object;
		var_5352_object = GlobalVars[16];
		var_5352_object = var_5351_object;
		func_12005(var_5351_object);
		if(!var_5350_bool) { //@nz
			int var_5358_int; float var_5359_float;
			var_4556_float = var_5359_float;
			func_9940(var_5358_int, var_5359_float);
		}
	}
	if(var_4555_int == 45044) {
		bool var_5366_bool; object var_5367_object;
		var_5368_object = GlobalVars[16];
		var_5368_object = var_5367_object;
		func_12029(var_5367_object);
		if(!var_5366_bool) { //@nz
			int var_5374_int; float var_5375_float;
			var_4556_float = var_5375_float;
			func_9985(var_5374_int, var_5375_float);
		}
	}
	if(var_4555_int == 45045) {
		bool var_5382_bool; object var_5383_object;
		var_5384_object = GlobalVars[16];
		var_5384_object = var_5383_object;
		func_12017(var_5383_object);
		if(!var_5382_bool) { //@nz
			int var_5390_int; float var_5391_float;
			var_4556_float = var_5391_float;
			func_9976(var_5390_int, var_5391_float);
		}
	}
	if(var_4555_int == 45046) {
		bool var_5398_bool; object var_5399_object;
		var_5400_object = GlobalVars[16];
		var_5400_object = var_5399_object;
		func_12041(var_5399_object);
		if(!var_5398_bool) { //@nz
			int var_5406_int; float var_5407_float;
			var_4556_float = var_5407_float;
			func_9967(var_5406_int, var_5407_float);
		}
	}
	if(var_4555_int == 45047) {
		bool var_5414_bool; object var_5415_object;
		var_5416_object = GlobalVars[16];
		var_5416_object = var_5415_object;
		func_12053(var_5415_object);
		if(!var_5414_bool) { //@nz
			int var_5422_int; float var_5423_float;
			var_4556_float = var_5423_float;
			func_10003(var_5422_int, var_5423_float);
		}
	}
	if(var_4555_int == 45048) {
		int var_5430_int; float var_5431_float;
		var_4556_float = var_5431_float;
		func_10039(var_5430_int, var_5431_float);
	}
	if(var_4555_int == 45049) {
		bool var_5438_bool; object var_5439_object;
		var_5440_object = GlobalVars[16];
		var_5440_object = var_5439_object;
		func_12065(var_5439_object);
		if(!var_5438_bool) { //@nz
			int var_5446_int; float var_5447_float;
			var_4556_float = var_5447_float;
			func_10012(var_5446_int, var_5447_float);
		}
	}
	if(var_4555_int == 45050) {
		int var_5454_int; float var_5455_float;
		var_4556_float = var_5455_float;
		func_10030(var_5454_int, var_5455_float);
	}
	if(var_4555_int == 45051) {
		bool var_5462_bool; object var_5463_object;
		var_5464_object = GlobalVars[16];
		var_5464_object = var_5463_object;
		func_12077(var_5463_object);
		if(!var_5462_bool) { //@nz
			int var_5470_int; float var_5471_float;
			var_4556_float = var_5471_float;
			func_9643(var_5470_int, var_5471_float);
		}
	}
	if(var_4555_int == 45054) {
		int var_5478_int; float var_5479_float;
		var_4556_float = var_5479_float;
		func_9697(var_5478_int, var_5479_float);
	}
	if(var_4555_int == 45063)
		@QueuePlayMovie("aglaja.wmv");
	if(var_4555_int == 45064)
		@QueuePlayMovie("army.wmv");
	if(var_4555_int == 45174) {
		bool var_5492_bool; object var_5493_object;
		var_5494_object = GlobalVars[16];
		var_5494_object = var_5493_object;
		func_11887(var_5492_bool, var_5493_object);
		if(var_5492_bool != 0) {
			int var_5497_int; float var_5498_float;
			var_4556_float = var_5498_float;
			func_9526(var_5497_int, var_5498_float);
		}
	}
	if(var_4555_int == 45175) {
		bool var_5505_bool; object var_5506_object;
		var_5507_object = GlobalVars[16];
		var_5507_object = var_5506_object;
		func_11887(var_5505_bool, var_5506_object);
		if(var_5505_bool != 0) {
			int var_5508_int; float var_5509_float;
			var_4556_float = var_5509_float;
			func_9535(var_5508_int, var_5509_float);
		}
	}
	if(var_4555_int == 45176) {
		bool var_5516_bool; object var_5517_object;
		var_5518_object = GlobalVars[16];
		var_5518_object = var_5517_object;
		func_11887(var_5516_bool, var_5517_object);
		if(var_5516_bool != 0) {
			int var_5519_int; float var_5520_float;
			var_4556_float = var_5520_float;
			func_9544(var_5519_int, var_5520_float);
		}
	}
	if(var_4555_int == 45177) {
		bool var_5527_bool; object var_5528_object;
		var_5529_object = GlobalVars[16];
		var_5529_object = var_5528_object;
		func_11887(var_5527_bool, var_5528_object);
		if(var_5527_bool != 0) {
			int var_5530_int; float var_5531_float;
			var_4556_float = var_5531_float;
			func_9553(var_5530_int, var_5531_float);
		}
	}
	if(var_4555_int == 45178) {
		bool var_5538_bool; object var_5539_object;
		var_5540_object = GlobalVars[16];
		var_5540_object = var_5539_object;
		func_11887(var_5538_bool, var_5539_object);
		if(var_5538_bool != 0) {
			int var_5541_int; float var_5542_float;
			var_4556_float = var_5542_float;
			func_9562(var_5541_int, var_5542_float);
		}
	}
	if(var_4555_int == 45179) {
		bool var_5549_bool; object var_5550_object;
		var_5551_object = GlobalVars[16];
		var_5551_object = var_5550_object;
		func_11887(var_5549_bool, var_5550_object);
		if(var_5549_bool != 0) {
			int var_5552_int; float var_5553_float;
			var_4556_float = var_5553_float;
			func_9571(var_5552_int, var_5553_float);
		}
	}
	if(var_4555_int == 45180) {
		bool var_5560_bool; object var_5561_object;
		var_5562_object = GlobalVars[16];
		var_5562_object = var_5561_object;
		func_11887(var_5560_bool, var_5561_object);
		if(var_5560_bool != 0) {
			int var_5563_int; float var_5564_float;
			var_4556_float = var_5564_float;
			func_9580(var_5563_int, var_5564_float);
		}
	}
	if(var_4555_int == 45181) {
		bool var_5571_bool; object var_5572_object;
		var_5573_object = GlobalVars[16];
		var_5573_object = var_5572_object;
		func_11887(var_5571_bool, var_5572_object);
		if(var_5571_bool != 0) {
			int var_5574_int; float var_5575_float;
			var_4556_float = var_5575_float;
			func_9589(var_5574_int, var_5575_float);
		}
	}
	if(var_4555_int == 45182) {
		bool var_5582_bool; object var_5583_object;
		var_5584_object = GlobalVars[16];
		var_5584_object = var_5583_object;
		func_11887(var_5582_bool, var_5583_object);
		if(var_5582_bool != 0) {
			int var_5585_int; float var_5586_float;
			var_4556_float = var_5586_float;
			func_9634(var_5585_int, var_5586_float);
		}
	}
	if(var_4555_int == 45183) {
		bool var_5593_bool; object var_5594_object;
		var_5595_object = GlobalVars[16];
		var_5595_object = var_5594_object;
		func_11887(var_5593_bool, var_5594_object);
		if(var_5593_bool != 0) {
			int var_5596_int; float var_5597_float;
			var_4556_float = var_5597_float;
			func_9688(var_5596_int, var_5597_float);
		}
	}
	if(var_4555_int == 45184) {
		bool var_5604_bool; object var_5605_object;
		var_5606_object = GlobalVars[16];
		var_5606_object = var_5605_object;
		func_11887(var_5604_bool, var_5605_object);
		if(var_5604_bool != 0) {
			int var_5607_int; float var_5608_float;
			var_4556_float = var_5608_float;
			func_9724(var_5607_int, var_5608_float);
		}
	}
	if(var_4555_int == 45199) {
		bool var_5615_bool; object var_5616_object;
		var_5617_object = GlobalVars[16];
		var_5617_object = var_5616_object;
		func_11671(var_5616_object);
		if(!var_5615_bool) { //@nz
			int var_5623_int; float var_5624_float;
			var_4556_float = var_5624_float;
			func_9805(var_5623_int, var_5624_float);
		}
	}
	if(var_4555_int == 45200) {
		bool var_5631_bool; object var_5632_object;
		var_5633_object = GlobalVars[16];
		var_5633_object = var_5632_object;
		func_11659(var_5632_object);
		if(!var_5631_bool) { //@nz
			int var_5639_int; float var_5640_float;
			var_4556_float = var_5640_float;
			func_9796(var_5639_int, var_5640_float);
		}
	}
	if(var_4555_int == 45201) {
		bool var_5647_bool; object var_5648_object;
		var_5649_object = GlobalVars[16];
		var_5649_object = var_5648_object;
		func_11683(var_5648_object);
		if(!var_5647_bool) { //@nz
			int var_5655_int; float var_5656_float;
			var_4556_float = var_5656_float;
			func_9895(var_5655_int, var_5656_float);
		}
	}
	if(var_4555_int == 45202) {
		bool var_5663_bool; object var_5664_object;
		var_5665_object = GlobalVars[16];
		var_5665_object = var_5664_object;
		func_11695(var_5664_object);
		if(!var_5663_bool) { //@nz
			int var_5671_int; float var_5672_float;
			var_4556_float = var_5672_float;
			func_9868(var_5671_int, var_5672_float);
		}
	}
	if(var_4555_int == 45203) {
		bool var_5679_bool; object var_5680_object;
		var_5681_object = GlobalVars[16];
		var_5681_object = var_5680_object;
		func_11707(var_5680_object);
		if(!var_5679_bool) { //@nz
			int var_5687_int; float var_5688_float;
			var_4556_float = var_5688_float;
			func_9922(var_5687_int, var_5688_float);
		}
	}
	if(var_4555_int == 45204) {
		int var_5695_int; float var_5696_float;
		var_4556_float = var_5696_float;
		func_10048(var_5695_int, var_5696_float);
	}
	if(var_4555_int == 45205) {
		bool var_5703_bool; object var_5704_object;
		var_5705_object = GlobalVars[16];
		var_5705_object = var_5704_object;
		func_11719(var_5704_object);
		if(!var_5703_bool) { //@nz
			int var_5711_int; float var_5712_float;
			var_4556_float = var_5712_float;
			func_10084(var_5711_int, var_5712_float);
		}
	}
	if(var_4555_int == 45206) {
		int var_5719_int; float var_5720_float;
		var_4556_float = var_5720_float;
		func_10129(var_5719_int, var_5720_float);
	}
	if(var_4555_int == 45207) {
		int var_5727_int; float var_5728_float;
		var_4556_float = var_5728_float;
		func_9778(var_5727_int, var_5728_float);
	}
	if(var_4555_int == 45208) {
		int var_5735_int; float var_5736_float;
		var_4556_float = var_5736_float;
		func_9787(var_5735_int, var_5736_float);
	}
	if(var_4555_int == 45209) {
		int var_5743_int; float var_5744_float;
		var_4556_float = var_5744_float;
		func_9823(var_5743_int, var_5744_float);
	}
	if(var_4555_int == 45210) {
		int var_5751_int; float var_5752_float;
		var_4556_float = var_5752_float;
		func_9877(var_5751_int, var_5752_float);
	}
	if(var_4555_int == 45211) {
		int var_5759_int; float var_5760_float;
		var_4556_float = var_5760_float;
		func_9931(var_5759_int, var_5760_float);
	}
	if(var_4555_int == 45212) {
		int var_5767_int; float var_5768_float;
		var_4556_float = var_5768_float;
		func_9958(var_5767_int, var_5768_float);
	}
	if(var_4555_int == 45213) {
		int var_5775_int; float var_5776_float;
		var_4556_float = var_5776_float;
		func_10021(var_5775_int, var_5776_float);
	}
	if(var_4555_int == 45214) {
		int var_5783_int; float var_5784_float;
		var_4556_float = var_5784_float;
		func_10066(var_5783_int, var_5784_float);
	}
	if(var_4555_int == 45215) {
		int var_5791_int; float var_5792_float;
		var_4556_float = var_5792_float;
		func_10111(var_5791_int, var_5792_float);
	}
	if(var_4555_int == 45216) {
		int var_5799_int; float var_5800_float;
		var_4556_float = var_5800_float;
		func_9607(var_5799_int, var_5800_float);
	}
	if(var_4555_int == 45217) {
		int var_5807_int; float var_5808_float;
		var_4556_float = var_5808_float;
		func_9652(var_5807_int, var_5808_float);
	}
	if(var_4555_int == 45218) {
		bool var_5815_bool; object var_5816_object;
		var_5817_object = GlobalVars[16];
		var_5817_object = var_5816_object;
		func_11743(var_5816_object);
		if(!var_5815_bool) { //@nz
			int var_5823_int; float var_5824_float;
			var_4556_float = var_5824_float;
			func_9616(var_5823_int, var_5824_float);
		}
	}
	if(var_4555_int == 45219) {
		bool var_5831_bool; object var_5832_object;
		var_5833_object = GlobalVars[16];
		var_5833_object = var_5832_object;
		func_11755(var_5832_object);
		if(!var_5831_bool) { //@nz
			object var_5839_object; object var_5840_object;
			var_5841_object = GlobalVars[16];
			var_5841_object = var_5839_object;
			var_5842_object = GlobalVars[16];
			var_5842_object = var_5840_object;
			func_10273();
			int var_5851_int; float var_5852_float;
			var_4556_float = var_5852_float;
			func_9625(var_5851_int, var_5852_float);
		}
	}
	if(var_4555_int == 45220) {
		bool var_5859_bool; object var_5860_object;
		var_5861_object = GlobalVars[16];
		var_5861_object = var_5860_object;
		func_11767(var_5860_object);
		if(!var_5859_bool) { //@nz
			int var_5867_int; float var_5868_float;
			var_4556_float = var_5868_float;
			func_9706(var_5867_int, var_5868_float);
		}
	}
	if(var_4555_int == 45221) {
		bool var_5875_bool; object var_5876_object;
		var_5877_object = GlobalVars[16];
		var_5877_object = var_5876_object;
		func_11993(var_5876_object);
		if(!var_5875_bool) { //@nz
			int var_5883_int; float var_5884_float;
			var_4556_float = var_5884_float;
			func_9715(var_5883_int, var_5884_float);
		}
	}
	if(var_4555_int == 45222) {
		bool var_5891_bool; object var_5892_object;
		var_5893_object = GlobalVars[16];
		var_5893_object = var_5892_object;
		func_11647(var_5892_object);
		if(!var_5891_bool) { //@nz
			object var_5899_object; object var_5900_object;
			var_5901_object = GlobalVars[16];
			var_5901_object = var_5899_object;
			var_5902_object = GlobalVars[16];
			var_5902_object = var_5900_object;
			func_10477();
		}
	}
	if(var_4555_int == 45223) {
		bool var_5942_bool; object var_5943_object;
		var_5944_object = GlobalVars[16];
		var_5944_object = var_5943_object;
		func_11779(var_5943_object);
		if(!var_5942_bool) { //@nz
			int var_5950_int; float var_5951_float;
			var_4556_float = var_5951_float;
			func_9904(var_5950_int, var_5951_float);
		}
	}
	if(var_4555_int == 45224) {
		bool var_5958_bool; object var_5959_object;
		var_5960_object = GlobalVars[16];
		var_5960_object = var_5959_object;
		func_11791(var_5959_object);
		if(!var_5958_bool) { //@nz
			int var_5966_int; float var_5967_float;
			var_4556_float = var_5967_float;
			func_10057(var_5966_int, var_5967_float);
		}
	}
	if(var_4555_int == 45225) {
		bool var_5974_bool; object var_5975_object;
		var_5976_object = GlobalVars[16];
		var_5976_object = var_5975_object;
		func_11815(var_5975_object);
		if(!var_5974_bool) { //@nz
			object var_5982_object; object var_5983_object;
			var_5984_object = GlobalVars[16];
			var_5984_object = var_5982_object;
			var_5985_object = GlobalVars[16];
			var_5985_object = var_5983_object;
			func_10321();
			int var_5994_int; float var_5995_float;
			var_4556_float = var_5995_float;
			func_10138(var_5994_int, var_5995_float);
		}
	}
	if(var_4555_int == 45226) {
		bool var_6002_bool = false;
		bool var_6003_bool; object var_6004_object;
		var_6005_object = GlobalVars[16];
		var_6005_object = var_6004_object;
		func_11803(var_6004_object);
		if(!var_6003_bool) { //@nz
			bool var_6011_bool; object var_6012_object;
			var_6013_object = GlobalVars[16];
			var_6013_object = var_6012_object;
			func_11731(var_6012_object);
			if(!var_6011_bool) //@nz
				var_6002_bool = true;
		}
		if(var_6002_bool != 0) {
			object var_6019_object; object var_6020_object;
			var_6021_object = GlobalVars[16];
			var_6021_object = var_6019_object;
			var_6022_object = GlobalVars[16];
			var_6022_object = var_6020_object;
			func_10337();
			int var_6031_int; float var_6032_float;
			var_4556_float = var_6032_float;
			func_10102(var_6031_int, var_6032_float);
		}
	}
	if(var_4555_int == 45227) {
		bool var_6039_bool; object var_6040_object;
		var_6041_object = GlobalVars[16];
		var_6041_object = var_6040_object;
		func_11827(var_6040_object);
		if(!var_6039_bool) { //@nz
			object var_6047_object; object var_6048_object;
			var_6049_object = GlobalVars[16];
			var_6049_object = var_6047_object;
			var_6050_object = GlobalVars[16];
			var_6050_object = var_6048_object;
			func_10305();
			int var_6059_int; float var_6060_float;
			var_4556_float = var_6060_float;
			func_10120(var_6059_int, var_6060_float);
		}
	}
	if(var_4555_int == 45228) {
		bool var_6067_bool; object var_6068_object;
		var_6069_object = GlobalVars[16];
		var_6069_object = var_6068_object;
		func_11839(var_6068_object);
		if(!var_6067_bool) { //@nz
			int var_6075_int; float var_6076_float;
			var_4556_float = var_6076_float;
			func_9598(var_6075_int, var_6076_float);
		}
	}
	if(var_4555_int == 45229) {
		int var_6083_int; float var_6084_float;
		var_4556_float = var_6084_float;
		func_9832(var_6083_int, var_6084_float);
	}
	if(var_4555_int == 45230) {
		int var_6091_int; float var_6092_float;
		var_4556_float = var_6092_float;
		func_9841(var_6091_int, var_6092_float);
	}
	if(var_4555_int == 45231) {
		int var_6099_int; float var_6100_float;
		var_4556_float = var_6100_float;
		func_9886(var_6099_int, var_6100_float);
	}
	if(var_4555_int == 45232) {
		bool var_6107_bool; object var_6108_object;
		var_6109_object = GlobalVars[16];
		var_6109_object = var_6108_object;
		func_11851(var_6108_object);
		if(!var_6107_bool) { //@nz
			int var_6115_int; float var_6116_float;
			var_4556_float = var_6116_float;
			func_9679(var_6115_int, var_6116_float);
		}
	}
	if(var_4555_int == 45239) {
		object var_6123_object; object var_6124_object;
		var_6125_object = GlobalVars[16];
		var_6125_object = var_6123_object;
		var_6126_object = GlobalVars[16];
		var_6126_object = var_6124_object;
		func_10353();
		int var_6129_int; float var_6130_float;
		var_4556_float = var_6130_float;
		func_10075(var_6129_int, var_6130_float);
	}
	if(var_4555_int == 45260) {
		bool var_6137_bool; object var_6138_object;
		var_6139_object = GlobalVars[16];
		var_6139_object = var_6138_object;
		func_11863(var_6138_object);
		if(!var_6137_bool) { //@nz
			int var_6145_int; float var_6146_float;
			var_4556_float = var_6146_float;
			func_10093(var_6145_int, var_6146_float);
		}
	}
	if(var_4555_int == 45261) {
		bool var_6153_bool; object var_6154_object;
		var_6155_object = GlobalVars[16];
		var_6155_object = var_6154_object;
		func_11875(var_6154_object);
		if(!var_6153_bool) { //@nz
			object var_6161_object; object var_6162_object;
			var_6163_object = GlobalVars[16];
			var_6163_object = var_6161_object;
			var_6164_object = GlobalVars[16];
			var_6164_object = var_6162_object;
			func_10289();
			int var_6173_int; float var_6174_float;
			var_4556_float = var_6174_float;
			func_10147(var_6173_int, var_6174_float);
		}
	}
	if(var_4555_int == 45267) {
		object var_6181_object; object var_6182_object;
		var_6183_object = GlobalVars[16];
		var_6183_object = var_6181_object;
		var_6184_object = GlobalVars[16];
		var_6184_object = var_6182_object;
		func_10359();
	}
	if(var_4555_int == 45268) {
		object var_6195_object; object var_6196_object;
		var_6197_object = GlobalVars[16];
		var_6197_object = var_6195_object;
		var_6198_object = GlobalVars[16];
		var_6198_object = var_6196_object;
		func_10376();
	}
	if(var_4555_int == 45269) {
		object var_6209_object; object var_6210_object;
		var_6211_object = GlobalVars[16];
		var_6211_object = var_6209_object;
		var_6212_object = GlobalVars[16];
		var_6212_object = var_6210_object;
		func_10393();
	}
	if(var_4555_int == 45270) {
		object var_6223_object; object var_6224_object;
		var_6225_object = GlobalVars[16];
		var_6225_object = var_6223_object;
		var_6226_object = GlobalVars[16];
		var_6226_object = var_6224_object;
		func_10410();
	}
	if(var_4555_int == 45271) {
		object var_6237_object; object var_6238_object;
		var_6239_object = GlobalVars[16];
		var_6239_object = var_6237_object;
		var_6240_object = GlobalVars[16];
		var_6240_object = var_6238_object;
		func_10427();
	}
}


// @pe
void func_1029(int var_1799_int, int var_1800_int)
{
	bool var_1801_bool = true;
	var_1803_bool = var_1800_int >= 22;
	if(var_1803_bool != 1) {
		var_1805_bool = var_1800_int < 6;
		if(var_1805_bool != 1)
			var_1801_bool = false;
	}
	if(var_1801_bool != 0) {
		int var_1806_int;
		var_1799_int = var_1806_int;
		func_721(var_1806_int, true);
	} else {
		int var_1808_int;
		var_1799_int = var_1808_int;
		func_721(var_1808_int, false);
	}
	
}


// @pe
void func_10259(void)
{
	func_150("house1_kabak@door1", true);
}


// @pe
void func_10266(void)
{
	func_150("mnogogrannik_han@door1", true);
}


// @pe
void func_5147(object var_123_object)
{
	var_123_object->add("dt_house3_08_i2");
	var_123_object->add("dt_house3_09");
	var_123_object->add("dt_house3_09_i2");
	var_123_object->add("house1_se_03l");
	var_123_object->add("house1_se_03r");
	var_123_object->add("house1_se_01l");
	var_123_object->add("house1_se_01r");
	var_123_object->add("house1_se_04l");
	var_123_object->add("house1_se_04r");
	var_123_object->add("house5_11");
	var_123_object->add("house5_09");
	var_123_object->add("house5_13");
	var_123_object->add("house5_12");
	var_123_object->add("house5_14");
	var_123_object->add("house5_unoin03l");
	var_123_object->add("house5_unoin03r");
	var_123_object->add("house5_unoin02l");
	var_123_object->add("house5_unoin02r");
	var_123_object->add("house5_unoin01l");
	var_123_object->add("house5_unoin01r");
}


// @pe
void func_1052(float var_767_float, int var_768_int)
{
	if((var_768_int + 1) == 7) {
		var_767_float = 2;
		return 0;
	}
	if((var_768_int + 1) == 8) {
		var_767_float = 0;
		return 0;
	}
	if((var_768_int + 1) == 1) {
		var_767_float = 0;
		return 0;
	}
	var_767_float = 1;
}


// @pe
void func_7199(int var_4139_int, int var_4140_int, object var_4141_object, object var_4142_object, object var_4143_object, object var_4144_object)
{
	if(var_4140_int == 0) {
		func_738(14, false);
		func_755(14, false, 1);
		int var_4153_int; object var_4154_object; object var_4155_object; object var_4156_object;
		var_4139_int = var_4153_int;
		var_4141_object = var_4154_object;
		var_4142_object = var_4155_object;
		var_4143_object = var_4156_object;
		func_662(14, var_4153_int, var_4154_object, var_4155_object, var_4156_object);
		object var_4157_object;
		var_4144_object = var_4157_object;
		func_248(var_4157_object, 2);
		func_812(14, false, 5);
		func_874(14, true, 5);
	}
	func_721(14, false);
	int var_4168_int; int var_4169_int;
	var_4139_int = var_4168_int;
	var_4140_int = var_4169_int;
	func_3442(14, var_4168_int, var_4169_int);
}


void func_10273(void)
{
	object var_5845_object;
	func_12171(var_5845_object);
	object var_5844_object;
	var_5845_object = var_5844_object;
	float var_5850_float;
	func_212(var_5850_float);
	var_5844_object->AddMark("d10q03GotoMark", "pt_map_theater", 0, 511154, var_5850_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6178(int var_3974_int, int var_3975_int, object var_3976_object, object var_3977_object, object var_3978_object, object var_3979_object)
{
	if(var_3975_int == 0) {
		func_738(9, false);
		func_755(9, false, 1);
		int var_3988_int; object var_3989_object; object var_3990_object; object var_3991_object;
		var_3974_int = var_3988_int;
		var_3976_object = var_3989_object;
		var_3977_object = var_3990_object;
		var_3978_object = var_3991_object;
		func_662(9, var_3988_int, var_3989_object, var_3990_object, var_3991_object);
		object var_3992_object;
		var_3979_object = var_3992_object;
		func_248(var_3992_object, 2);
		func_812(9, false, 7);
		func_874(9, true, 7);
	}
	func_721(9, false);
	int var_4003_int; int var_4004_int;
	var_3974_int = var_4003_int;
	var_3975_int = var_4004_int;
	func_3630(9, var_4003_int, var_4004_int);
}


void func_3108(int var_2128_int, int var_2129_int, int var_2130_int)
{
	int var_2133_int; int var_2134_int;
	bool var_2135_bool = false;
	if(var_2130_int > 8) {
		if(var_2130_int < 21)
			var_2135_bool = true;
	}
	if(var_2135_bool != 0) {
		int var_2140_int;
		var_2128_int = var_2140_int;
		func_445(var_2140_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2144_int;
		var_2128_int = var_2144_int;
		func_445(var_2144_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2148_int;
		var_2128_int = var_2148_int;
		func_445(var_2148_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2152_int;
		var_2128_int = var_2152_int;
		func_471(var_2152_int, "fog", "fog.xml", 6);
		if(var_2129_int >= 5) {
			int var_2162_int;
			var_2128_int = var_2162_int;
			func_471(var_2162_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2167_float; int var_2168_int;
		func_1166(var_2167_float, var_2168_int);
		if((1 * var_2167_float) != 0) {
			int var_2214_int; int var_2217_int;
			var_2128_int = var_2214_int;
			var_2133_int = var_2217_int;
			func_445(var_2214_int, "pers_bomber", "bomber.xml", var_2217_int);
		}
	} else {
		int var_2253_int;
		var_2128_int = var_2253_int;
		func_445(var_2253_int, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		int var_2257_int;
		var_2128_int = var_2257_int;
		func_445(var_2257_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		int var_2261_int;
		var_2128_int = var_2261_int;
		func_445(var_2261_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2265_int;
		var_2128_int = var_2265_int;
		func_471(var_2265_int, "fog", "fog.xml", 6);
		if(var_2168_int >= 5) {
			int var_2271_int;
			var_2128_int = var_2271_int;
			func_471(var_2271_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2276_float; int var_2277_int;
		var_2129_int = var_2277_int;
		func_1166(var_2276_float, var_2277_int);
		if((2 * var_2276_float) == 0) goto Label_3226;
		int var_2279_int; int var_2282_int;
		var_2128_int = var_2279_int;
		var_2134_int = var_2282_int;
		func_445(var_2279_int, "pers_bomber", "bomber.xml", var_2282_int);
	}
Label_3226:
	bool var_2218_bool; int var_2219_int;
	var_2129_int = var_2219_int;
	func_1283(var_2218_bool, var_2219_int);
	if(var_2218_bool != 0) {
		int var_2221_int;
		var_2128_int = var_2221_int;
		func_445(var_2221_int, "pers_sanitar", "sanitar.xml", 2);
	}
	int var_2225_int;
	var_2128_int = var_2225_int;
	func_458(var_2225_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2235_int;
	var_2128_int = var_2235_int;
	func_458(var_2235_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2241_int;
	var_2128_int = var_2241_int;
	func_458(var_2241_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2247_int;
	var_2128_int = var_2247_int;
	func_458(var_2247_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	
}


void func_8237(int var_4171_int, int var_4172_int)
{
	int var_4176_int; int var_4177_int;
	if(var_4172_int == 0) {
		if(var_4171_int == 2) {
			int var_4182_int;
			func_12188(var_4182_int);
			if(var_4182_int == 0) {
				@GetVariable("d1q01", var_4176_int);
				if(var_4176_int != 1000)
					@GameOver("gameover_fail.xml");
			} else {
				int var_4191_int;
				func_12188(var_4191_int);
				if(!(var_4191_int == 1)) goto Label_8275;
				@GetVariable("b1q01", var_4177_int);
				if(!(var_4177_int != 1000)) goto Label_8275;
				@GameOver("gameover_fail.xml");
			}
		}
	Label_8275:
		@SendWorldWndMessage(101);
		@SetVariable("c_iWM_RealDayChange", var_4171_int);
	}
	
}


void func_14385(int var_4315_int)
{
	object var_4325_object; object var_4326_object; object var_4327_object; object var_4328_object; object var_4329_object; object var_4330_object; object var_4331_object; object var_4332_object; object var_4333_object;
	if(var_4315_int == 1) {
		@Trace("Special diseased house: r4_house_2_02");
		@GetSceneByName(var_4325_object, "r4_house_2_02");
		@ReplaceScene(var_4325_object, "s_r4_house_2_02.isc");
		var_4325_object = null;
	} else if(var_4315_int == 2) {
			@Trace("Special house: r7_house2_01");
			@GetSceneByName(var_4326_object, "r7_house2_01");
			@ReplaceScene(var_4326_object, "r7_house2_01_d3q02.isc");
			var_4326_object = null;
	}

	
	if(var_4315_int == 3) {
		@Trace("Special diseased house: house7_03");
		@GetSceneByName(var_4327_object, "house7_03");
		@ReplaceScene(var_4327_object, "s_house7_03.isc");
		var_4327_object = null;
	} else if(var_4315_int == 4) {
		@GetSceneByName(var_4328_object, "theater");
		@ReplaceScene(var_4328_object, "dtheater_danko.isc");
		var_4328_object = null;
	} else if(var_4315_int == 5) {
		@Trace("Special house: sobor (with corpses)");
		@GetSceneByName(var_4329_object, "sobor");
		@ReplaceScene(var_4329_object, "sobor_trup.isc");
		var_4329_object = null;
	} else if(var_4315_int == 6) {
		@Trace("Special house: sobor (normal)");
		@GetSceneByName(var_4330_object, "sobor");
		@ReplaceScene(var_4330_object, "sobor_danko.isc");
		var_4330_object = null;
	} else if(var_4315_int == 7) {
		@Trace("Special diseased house: r4_house_2_02");
		@GetSceneByName(var_4331_object, "r4_house_2_02");
		@ReplaceScene(var_4331_object, "s_r4_house_2_02.isc");
		var_4331_object = null;
	} else if(var_4315_int == 8) {
		@Trace("Special replaced house: uprava_admin");
		@GetSceneByName(var_4332_object, "uprava_admin");
		@ReplaceScene(var_4332_object, "uprava_admin_army_danko.isc");
		var_4332_object = null;
	} else if(var_4315_int == 11) {
		@GetSceneByName(var_4333_object, "theater");
		@ReplaceScene(var_4333_object, "theater_danko.isc");
		var_4333_object = null;
	}
}


void func_10289(void)
{
	object var_6167_object;
	func_12171(var_6167_object);
	object var_6166_object;
	var_6167_object = var_6166_object;
	float var_6172_float;
	func_212(var_6172_float);
	var_6166_object->AddMark("d9q01GotoViktor", "pt_map_viktor", 1, 540031, var_6172_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1076(float var_3287_float, int var_3288_int)
{
	if((var_3288_int + 1) == 1) {
		var_3287_float = 0;
		return 0;
	EMIT "GOTO 0x48c";
	}
	if((var_3288_int + 1) == 2) {
		var_3287_float = 0;
		return 0;
	EMIT "GOTO 0x48c";
	}
	if((var_3288_int + 1) == 3) {
		var_3287_float = 1;
		return 0;
	EMIT "GOTO 0x48c";
	}
	if((var_3288_int + 1) == 4) {
		var_3287_float = 1;
		return 0;
	EMIT "GOTO 0x48c";
	}
	if((var_3288_int + 1) == 5) {
		var_3287_float = 1;
		return 0;
	EMIT "GOTO 0x48c";
	}
	if((var_3288_int + 1) == 6) {
		var_3287_float = 2;
		return 0;
	EMIT "GOTO 0x48c";
	}
	if((var_3288_int + 1) == 7) {
		var_3287_float = 1;
		return 0;
	EMIT "GOTO 0x48c";
	}
	if((var_3288_int + 1) == 8) {
		var_3287_float = 1;
		return 0;
	EMIT "GOTO 0x48c";
	}
	if((var_3288_int + 1) == 9) {
		var_3287_float = 1;
		return 0;
	EMIT "GOTO 0x48c";
	}
	if((var_3288_int + 1) == 10) {
		var_3287_float = 1;
		return 0;
	EMIT "GOTO 0x48c";
	}
	if((var_3288_int + 1) == 11) {
		var_3287_float = 1;
		return 0;
	}
	var_3287_float = 0;
}


void func_57(void)
{
	object var_9_object;
	@FindActor(var_9_object, "player");
	object var_10_object;
	@GetSceneByName(var_10_object, "cot_eva");
	if(!var_10_object) //@nz
		@Trace("Starting scene not found");
	bool var_11_bool;
	cvector var_12_cvector;
	cvector var_13_cvector;
	var_10_object->GetLocator("pt_birth_Danko", var_11_bool, var_12_cvector, var_13_cvector);
	if(var_11_bool != 0)
		@Teleport(var_9_object, var_10_object, var_12_cvector, var_13_cvector);
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-5] = 0";


void func_10305(void)
{
	object var_6053_object;
	func_12171(var_6053_object);
	object var_6052_object;
	var_6053_object = var_6052_object;
	float var_6058_float;
	func_212(var_6058_float);
	var_6052_object->AddMark("d9q02GotoJulia", "pt_map_julia", 0, 515296, var_6058_float);
}
EMIT "Stack[-1] = 0";


void func_80(object var_100_object)
{
	object var_102_object;
	@FindActor(var_102_object, "player");
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_10321(void)
{
	object var_5988_object;
	func_12171(var_5988_object);
	object var_5987_object;
	var_5988_object = var_5987_object;
	float var_5993_float;
	func_212(var_5993_float);
	var_5987_object->AddMark("d9q03GotoLara", "pt_map_lara", 0, 515294, var_5993_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_7251(object var_312_object)
{
	var_312_object->add("lc_house3_05_i2");
	var_312_object->add("lc_house3_05");
	var_312_object->add("lc_house3_06_i2");
	var_312_object->add("lc_house3_06");
	var_312_object->add("lc_House6_06");
	var_312_object->add("lc_house3_04_i2");
	var_312_object->add("lc_house3_04");
	var_312_object->add("house3_plus_03_i2");
}


void func_4181(int var_3438_int, int var_3439_int, int var_3440_int)
{
	int var_3445_int; int var_3446_int; int var_3447_int; int var_3448_int;
	bool var_3449_bool = false;
	if(var_3440_int > 8) {
		if(var_3440_int < 21)
			var_3449_bool = true;
	}
	if(var_3449_bool != 0) {
		int var_3454_int;
		var_3438_int = var_3454_int;
		func_445(var_3454_int, "pers_rat", "rat.xml", 4);
		int var_3458_int;
		var_3438_int = var_3458_int;
		func_445(var_3458_int, "pers_alkash", "alkash.xml", 2);
		int var_3462_int;
		var_3438_int = var_3462_int;
		func_445(var_3462_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3467_float; int var_3468_int;
		func_1076(var_3467_float, var_3468_int);
		if((2 * var_3467_float) != 0) {
			int var_3470_int; int var_3473_int;
			var_3438_int = var_3470_int;
			var_3445_int = var_3473_int;
			func_445(var_3470_int, "pers_grabitel", "grabitel.xml", var_3473_int);
		}
		if((var_3468_int + 1) >= 2) {
			int var_3478_int;
			var_3438_int = var_3478_int;
			func_445(var_3478_int, "pers_patrool", "patrol.xml", 2);
			bool var_3482_bool; int var_3483_int;
			var_3439_int = var_3483_int;
			func_1283(var_3482_bool, var_3483_int);
			if(var_3482_bool != 0) {
				int var_3484_int;
				var_3438_int = var_3484_int;
				func_445(var_3484_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3489_float; int var_3490_int;
		var_3439_int = var_3490_int;
		func_1166(var_3489_float, var_3490_int);
		if((1 * var_3489_float) != 0) {
			int var_3492_int; int var_3495_int;
			var_3438_int = var_3492_int;
			var_3446_int = var_3495_int;
			func_445(var_3492_int, "pers_bomber", "bomber.xml", var_3495_int);
		}
	} else {
		int var_3502_int;
		var_3438_int = var_3502_int;
		func_445(var_3502_int, "pers_rat", "rat.xml", 8);
		int var_3506_int;
		var_3438_int = var_3506_int;
		func_445(var_3506_int, "pers_alkash", "alkash.xml", 1);
		int var_3510_int;
		var_3438_int = var_3510_int;
		func_445(var_3510_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3515_float; int var_3516_int;
		func_1076(var_3515_float, var_3516_int);
		if((3 * var_3515_float) != 0) {
			int var_3518_int; int var_3521_int;
			var_3438_int = var_3518_int;
			var_3447_int = var_3521_int;
			func_445(var_3518_int, "pers_grabitel", "grabitel.xml", var_3521_int);
		}
		if((var_3516_int + 1) >= 2) {
			int var_3526_int;
			var_3438_int = var_3526_int;
			func_445(var_3526_int, "pers_patrool", "patrol.xml", 1);
			bool var_3530_bool; int var_3531_int;
			var_3439_int = var_3531_int;
			func_1283(var_3530_bool, var_3531_int);
			if(var_3530_bool != 0) {
				int var_3532_int;
				var_3438_int = var_3532_int;
				func_445(var_3532_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3537_float; int var_3538_int;
		var_3439_int = var_3538_int;
		func_1166(var_3537_float, var_3538_int);
		if((1 * var_3537_float) == 0) goto Label_4343;
		int var_3540_int; int var_3543_int;
		var_3438_int = var_3540_int;
		var_3448_int = var_3543_int;
		func_445(var_3540_int, "pers_bomber", "bomber.xml", var_3543_int);
	}
Label_4343:
	bool var_3496_bool; int var_3497_int;
	var_3439_int = var_3497_int;
	func_1283(var_3496_bool, var_3497_int);
	if(var_3496_bool != 0) {
		int var_3498_int;
		var_3438_int = var_3498_int;
		func_445(var_3498_int, "pers_sanitar", "sanitar.xml", 2);
	}
	
}


// @pe
void func_6230(object var_225_object)
{
	var_225_object->add("r4_house_2_02");
	var_225_object->add("r4_house3_03_i2");
	var_225_object->add("r4_house3_03");
	var_225_object->add("r4_house4_02_i2");
	var_225_object->add("r4_house4_02");
	var_225_object->add("r4_house4_01_i2");
	var_225_object->add("r4_house4_01");
	var_225_object->add("r4_house3_02_i2");
	var_225_object->add("r4_house3_02");
	var_225_object->add("r4_house_2_01");
	var_225_object->add("r4_house3_01_i2");
	var_225_object->add("r4_house3_01");
	var_225_object->add("r4_house7_01");
	var_225_object->add("r4_House6_01");
	var_225_object->add("r4_house_2_03");
	var_225_object->add("r4_House6_03");
	var_225_object->add("r4_house_2_04");
}


void func_87(bool var_584_bool, object var_585_object, string var_586_string)
{
	var_591_bool = IsFuncExist(var_585_object, "HasProperty", 2);
	if(!var_591_bool) { //@nz
		var_584_bool = false;
		return 2;
	}
	bool var_588_bool;
	var_585_object->HasProperty(var_586_string, var_588_bool);
	var_588_bool = var_584_bool;
}


void func_9301(int var_3179_int, int var_3180_int, int var_3181_int)
{
	var_3190_object = GlobalVars[8];
	object var_3186_object;
	var_3190_object->get(var_3186_object, var_3179_int);
	var_3191_object = GlobalVars[9];
	object var_3187_object;
	var_3191_object->get(var_3187_object, var_3179_int);
	var_3192_object = GlobalVars[10];
	object var_3188_object;
	var_3192_object->get(var_3188_object, var_3179_int);
	var_3193_object = GlobalVars[13];
	object var_3189_object;
	var_3193_object->get(var_3189_object, var_3179_int);
	if(var_3179_int == 0) {
		int var_3196_int; int var_3197_int; object var_3198_object; object var_3199_object; object var_3200_object; object var_3201_object;
		var_3180_int = var_3196_int;
		var_3181_int = var_3197_int;
		var_3186_object = var_3198_object;
		var_3187_object = var_3199_object;
		var_3188_object = var_3200_object;
		var_3189_object = var_3201_object;
		func_4462(var_3196_int, var_3197_int, var_3198_object, var_3199_object, var_3200_object, var_3201_object);
	} else if(var_3179_int == 1) {
			int var_3410_int; int var_3411_int; object var_3412_object; object var_3413_object; object var_3414_object; object var_3415_object;
			var_3180_int = var_3410_int;
			var_3181_int = var_3411_int;
			var_3186_object = var_3412_object;
			var_3187_object = var_3413_object;
			var_3188_object = var_3414_object;
			var_3189_object = var_3415_object;
			func_4659(var_3410_int, var_3411_int, var_3412_object, var_3413_object, var_3414_object, var_3415_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_3179_int == 2) {
		int var_3546_int; int var_3547_int; object var_3548_object; object var_3549_object; object var_3550_object; object var_3551_object;
		var_3180_int = var_3546_int;
		var_3181_int = var_3547_int;
		var_3186_object = var_3548_object;
		var_3187_object = var_3549_object;
		var_3188_object = var_3550_object;
		var_3189_object = var_3551_object;
		func_4865(var_3546_int, var_3547_int, var_3548_object, var_3549_object, var_3550_object, var_3551_object);
	} else if(var_3179_int == 3) {
		int var_3689_int; int var_3690_int; object var_3691_object; object var_3692_object; object var_3693_object; object var_3694_object;
		var_3180_int = var_3689_int;
		var_3181_int = var_3690_int;
		var_3186_object = var_3691_object;
		var_3187_object = var_3692_object;
		var_3188_object = var_3693_object;
		var_3189_object = var_3694_object;
		func_5095(var_3689_int, var_3690_int, var_3691_object, var_3692_object, var_3693_object, var_3694_object);
	} else if(var_3179_int == 4) {
		int var_3722_int; int var_3723_int; object var_3724_object; object var_3725_object; object var_3726_object; object var_3727_object;
		var_3180_int = var_3722_int;
		var_3181_int = var_3723_int;
		var_3186_object = var_3724_object;
		var_3187_object = var_3725_object;
		var_3188_object = var_3726_object;
		var_3189_object = var_3727_object;
		func_5313(var_3722_int, var_3723_int, var_3724_object, var_3725_object, var_3726_object, var_3727_object);
	} else if(var_3179_int == 5) {
		int var_3755_int; int var_3756_int; object var_3757_object; object var_3758_object; object var_3759_object; object var_3760_object;
		var_3180_int = var_3755_int;
		var_3181_int = var_3756_int;
		var_3186_object = var_3757_object;
		var_3187_object = var_3758_object;
		var_3188_object = var_3759_object;
		var_3189_object = var_3760_object;
		func_5552(var_3755_int, var_3756_int, var_3757_object, var_3758_object, var_3759_object, var_3760_object);
	} else if(var_3179_int == 6) {
		int var_3788_int; int var_3789_int; object var_3790_object; object var_3791_object; object var_3792_object; object var_3793_object;
		var_3180_int = var_3788_int;
		var_3181_int = var_3789_int;
		var_3186_object = var_3790_object;
		var_3187_object = var_3791_object;
		var_3188_object = var_3792_object;
		var_3189_object = var_3793_object;
		func_5620();
	} else if(var_3179_int == 7) {
		int var_3798_int; int var_3799_int; object var_3800_object; object var_3801_object; object var_3802_object; object var_3803_object;
		var_3180_int = var_3798_int;
		var_3181_int = var_3799_int;
		var_3186_object = var_3800_object;
		var_3187_object = var_3801_object;
		var_3188_object = var_3802_object;
		var_3189_object = var_3803_object;
		func_5775(var_3798_int, var_3799_int, var_3800_object, var_3801_object, var_3802_object, var_3803_object);
	} else if(var_3179_int == 8) {
		int var_3941_int; int var_3942_int; object var_3943_object; object var_3944_object; object var_3945_object; object var_3946_object;
		var_3180_int = var_3941_int;
		var_3181_int = var_3942_int;
		var_3186_object = var_3943_object;
		var_3187_object = var_3944_object;
		var_3188_object = var_3945_object;
		var_3189_object = var_3946_object;
		func_5975(var_3941_int, var_3942_int, var_3943_object, var_3944_object, var_3945_object, var_3946_object);
	} else if(var_3179_int == 9) {
		int var_3974_int; int var_3975_int; object var_3976_object; object var_3977_object; object var_3978_object; object var_3979_object;
		var_3180_int = var_3974_int;
		var_3181_int = var_3975_int;
		var_3186_object = var_3976_object;
		var_3187_object = var_3977_object;
		var_3188_object = var_3978_object;
		var_3189_object = var_3979_object;
		func_6178(var_3974_int, var_3975_int, var_3976_object, var_3977_object, var_3978_object, var_3979_object);
	} else if(var_3179_int == 10) {
		int var_4007_int; int var_4008_int; object var_4009_object; object var_4010_object; object var_4011_object; object var_4012_object;
		var_3180_int = var_4007_int;
		var_3181_int = var_4008_int;
		var_3186_object = var_4009_object;
		var_3187_object = var_4010_object;
		var_3188_object = var_4011_object;
		var_3189_object = var_4012_object;
		func_6387(var_4007_int, var_4008_int, var_4009_object, var_4010_object, var_4011_object, var_4012_object);
	} else if(var_3179_int == 11) {
		int var_4040_int; int var_4041_int; object var_4042_object; object var_4043_object; object var_4044_object; object var_4045_object;
		var_3180_int = var_4040_int;
		var_3181_int = var_4041_int;
		var_3186_object = var_4042_object;
		var_3187_object = var_4043_object;
		var_3188_object = var_4044_object;
		var_3189_object = var_4045_object;
		func_6599(var_4040_int, var_4041_int, var_4042_object, var_4043_object, var_4044_object, var_4045_object);
	} else if(var_3179_int == 12) {
		int var_4073_int; int var_4074_int; object var_4075_object; object var_4076_object; object var_4077_object; object var_4078_object;
		var_3180_int = var_4073_int;
		var_3181_int = var_4074_int;
		var_3186_object = var_4075_object;
		var_3187_object = var_4076_object;
		var_3188_object = var_4077_object;
		var_3189_object = var_4078_object;
		func_6796(var_4073_int, var_4074_int, var_4075_object, var_4076_object, var_4077_object, var_4078_object);
	} else if(var_3179_int == 13) {
		int var_4106_int; int var_4107_int; object var_4108_object; object var_4109_object; object var_4110_object; object var_4111_object;
		var_3180_int = var_4106_int;
		var_3181_int = var_4107_int;
		var_3186_object = var_4108_object;
		var_3187_object = var_4109_object;
		var_3188_object = var_4110_object;
		var_3189_object = var_4111_object;
		func_6999(var_4106_int, var_4107_int, var_4108_object, var_4109_object, var_4110_object, var_4111_object);
	} else if(var_3179_int == 14) {
		int var_4139_int; int var_4140_int; object var_4141_object; object var_4142_object; object var_4143_object; object var_4144_object;
		var_3180_int = var_4139_int;
		var_3181_int = var_4140_int;
		var_3186_object = var_4141_object;
		var_3187_object = var_4142_object;
		var_3188_object = var_4143_object;
		var_3189_object = var_4144_object;
		func_7199(var_4139_int, var_4140_int, var_4141_object, var_4142_object, var_4143_object, var_4144_object);
	} else if(var_3179_int == 15) {
		int var_4282_int; int var_4283_int; object var_4284_object; object var_4285_object; object var_4286_object; object var_4287_object;
		var_3180_int = var_4282_int;
		var_3181_int = var_4283_int;
		var_3186_object = var_4284_object;
		var_3187_object = var_4285_object;
		var_3188_object = var_4286_object;
		var_3189_object = var_4287_object;
		func_7381(var_4282_int, var_4283_int, var_4284_object, var_4285_object, var_4286_object, var_4287_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_5209(int var_1299_int, int var_1300_int, object var_1301_object, object var_1302_object, object var_1303_object, object var_1304_object)
{
	if(var_1300_int == 0) {
		func_738(4, false);
		func_755(4, false, 1);
		int var_1312_int; int var_1313_int; object var_1314_object; object var_1315_object; object var_1316_object;
		var_1312_int = 4;
		var_1299_int = var_1313_int;
		var_1301_object = var_1314_object;
		var_1302_object = var_1315_object;
		var_1303_object = var_1316_object;
		func_564(var_1313_int, var_1314_object, var_1315_object, var_1316_object);
		object var_1317_object;
		var_1304_object = var_1317_object;
		func_248(var_1317_object, 0);
		func_812(4, false, 4);
		func_874(4, false, 4);
	}
	int var_1326_int;
	var_1300_int = var_1326_int;
	func_962(4, var_1326_int);
	int var_1340_int; int var_1341_int;
	var_1299_int = var_1340_int;
	var_1300_int = var_1341_int;
	func_1826(4, var_1340_int, var_1341_int);
}


void func_8282(int var_4209_int, int var_4210_int)
{
	object var_4218_object; object var_4219_object; string var_4220_string; int var_4221_int; int var_4222_int; int var_4223_int;
	bool var_4224_bool = false;
	if(var_4210_int == 5) {
		if(var_4209_int >= 7)
			var_4224_bool = true;
	}
	if(var_4224_bool != 0) {
		func_7746();
	} else {
		bool var_4503_bool = false;
		if(var_4210_int == 22) {
			if(var_4209_int >= 7)
				var_4503_bool = true;
		}
		if(var_4503_bool == 0) goto Label_8310;
		func_7809();
	}
Label_8310:
	bool var_4275_bool = false;
	if(var_4210_int == 7) {
		if(var_4209_int != 1)
			var_4275_bool = true;
	}
	if(var_4275_bool != 0)
		@SendWorldWndMessage(100);
	if(var_4210_int == 0) {
		func_8448();
		func_8523();
		if(var_4209_int == 6) {
			@GetMainOutdoorScene(var_4218_object);
			@AddScriptedActor(var_4219_object, "shed_corpse", "splash_object_wo_pf.bin", var_4218_object, [0.0, 0.0, 0.0]);
			var_4219_object = null;
			var_4218_object = null;
		}
		if(var_4209_int == 9)
			func_8572();
		if(var_4209_int != 1) {
			int var_4398_int;
			func_12188(var_4398_int);
			if(var_4398_int == 1) {
				@GetVariable((("b" + (var_4209_int - 1)) + "q01"), var_4221_int);
				var_4220_string = "volonteers_burah";
			} else {
					int var_4488_int;
					func_12188(var_4488_int);
					if(!(var_4488_int == 0)) goto Label_8385;
					@GetVariable((("d" + (var_4209_int - 1)) + "q01"), var_4221_int);
					var_4220_string = "volonteers_danko";
			}
			for(;;) {
				@Trace(var_4220_string);
				if(var_4221_int == 1000) {
					bool var_4409_bool; string var_4410_string;
					var_4220_string = var_4410_string;
					func_179(var_4409_bool, var_4410_string, "rescue_locked", "");
				}
				bool var_4416_bool; string var_4417_string;
				var_4220_string = var_4417_string;
				func_179(var_4416_bool, var_4417_string, "update", "");
		}
	}
		bool var_4420_bool = false;
		if(var_4209_int == 6) {
			if(var_4210_int == 0)
				var_4420_bool = true;
		}
		if(var_4420_bool != 0)
			func_7866();
		bool var_4427_bool = false;
		if(var_4209_int == 7) {
			if(var_4210_int == 0)
				var_4427_bool = true;
		}
		if(var_4427_bool != 0) {
			var_4432_object = GlobalVars[14];
			var_4432_object->size(var_4222_int);

			for(;;) {
				if(!(0 < var_4222_int)) goto Label_8447;
				int var_4434_int;
				var_4223_int = var_4434_int;
				func_7573(var_4434_int);
				var_4223_int += 1;
			}
		}
	Label_8447:

	}
	
Label_8385:
	@GetVariable((("k" + (var_4209_int - 1)) + "q01"), var_4221_int);
	var_4220_string = "volonteers_klara";
	
}


void func_11359(void)
{
	object var_5056_object;
	func_12171(var_5056_object);
	object var_5054_object;
	var_5056_object = var_5054_object;
	object var_5055_object;
	var_5054_object->FindMark(var_5055_object, "d7q01AglajaFindLierSelf");
	if(var_5055_object != 0)
		var_5055_object->Remove();
	var_5054_object->FindMark(var_5055_object, "d7q01AglajaGotoBirdmaskSelf");
	if(var_5055_object != 0)
		var_5055_object->Remove();
	var_5054_object->FindMark(var_5055_object, "d7q01BirdmaskD");
	if(var_5055_object != 0)
		var_5055_object->Remove();
	var_5054_object->FindMark(var_5055_object, "d7q01BirdmaskM");
	if(var_5055_object != 0)
		var_5055_object->Remove();
	var_5054_object->FindMark(var_5055_object, "d7q01BirdmaskU");
	if(var_5055_object != 0)
		var_5055_object->Remove();
	var_5054_object->FindMark(var_5055_object, "d7q02AlexandrGotoPetr");
	if(var_5055_object != 0)
		var_5055_object->Remove();
	var_5054_object->FindMark(var_5055_object, "d7q02MarkGotoAlexandr");
	if(var_5055_object != 0)
		var_5055_object->Remove();
	var_5054_object->FindMark(var_5055_object, "d7q02MarkGotoCemetery");
	if(var_5055_object != 0)
		var_5055_object->Remove();
	var_5054_object->FindMark(var_5055_object, "d7q04WastedGotoGatherer");
	if(var_5055_object != 0)
		var_5055_object->Remove();
	var_5054_object->FindMark(var_5055_object, "d7q04NudeGotoAndrei");
	if(var_5055_object != 0)
		var_5055_object->Remove();
	bool var_5077_bool;
	func_12146(var_5077_bool, 165);
	bool var_5079_bool;
	func_12146(var_5079_bool, 170);
	bool var_5081_bool;
	func_12146(var_5081_bool, 637);
	bool var_5083_bool;
	func_12146(var_5083_bool, 641);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_10337(void)
{
	object var_6025_object;
	func_12171(var_6025_object);
	object var_6024_object;
	var_6025_object = var_6024_object;
	float var_6030_float;
	func_212(var_6030_float);
	var_6024_object->AddMark("d9q04GotoAnna", "pt_map_anna", 0, 511375, var_6030_float);
}
EMIT "Stack[-1] = 0";


void func_99(object var_41_object)
{
	object var_43_object;
	@CreateObjectVector(var_43_object);
	var_43_object = var_41_object;
}
EMIT "Stack[-1] = 0";


void func_2149(int var_749_int, int var_750_int, int var_751_int)
{
	int var_753_int;
	if((var_750_int + 1) == 12)
		return 2;
	bool var_758_bool = false;
	bool var_759_bool = true;
	var_761_bool = var_751_int < 7;
	if(var_761_bool != 1) {
		var_763_bool = var_751_int > 21;
		if(var_763_bool != 1)
			var_759_bool = false;
	}
	if(var_759_bool != 0) {
		if(var_750_int != 0)
			var_758_bool = true;
	}
	if(var_758_bool != 0) {
		float var_767_float; int var_768_int;
		var_750_int = var_768_int;
		func_1052(var_767_float, var_768_int);
		if((1 * var_767_float) != 0) {
			int var_782_int; int var_785_int;
			var_749_int = var_782_int;
			var_753_int = var_785_int;
			func_445(var_782_int, "pers_grabitel", "grabitel.xml", var_785_int);
		}
	}
	bool var_790_bool = false;
	bool var_791_bool = false;
	if(var_750_int == 0) {
		if(var_751_int < 21)
			var_791_bool = true;
	}
	if(var_791_bool != 0) {
		int var_796_int;
		func_12188(var_796_int);
		if(var_796_int == 1)
			var_790_bool = true;
	}
	if(var_790_bool != 0) {
		int var_802_int;
		var_749_int = var_802_int;
		func_445(var_802_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_806_int;
		var_749_int = var_806_int;
		func_445(var_806_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_810_int;
		var_749_int = var_810_int;
		func_445(var_810_int, "pers_worker", "worker_attacker.xml", 1);
		int var_814_int;
		var_749_int = var_814_int;
		func_445(var_814_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_818_int;
		var_749_int = var_818_int;
		func_445(var_818_int, "pers_boy", "boy.xml", 1);
		int var_822_int;
		var_749_int = var_822_int;
		func_445(var_822_int, "pers_alkash", "alkash.xml", 1);
		int var_826_int;
		var_749_int = var_826_int;
		func_445(var_826_int, "pers_girl", "girl.xml", 1);
		int var_830_int;
		var_749_int = var_830_int;
		func_445(var_830_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_834_bool = false;
			if(var_751_int > 8) {
				if(var_751_int < 21)
					var_834_bool = true;
			}
			if(var_834_bool == 0) goto Label_2318;
			int var_839_int;
			var_749_int = var_839_int;
			func_445(var_839_int, "pers_boy", "boy.xml", 1);
			int var_843_int;
			var_749_int = var_843_int;
			func_445(var_843_int, "pers_alkash", "alkash.xml", 1);
			int var_847_int;
			var_749_int = var_847_int;
			func_445(var_847_int, "pers_girl", "girl.xml", 1);
			int var_851_int;
			var_749_int = var_851_int;
			func_445(var_851_int, "pers_girl", "girl2.xml", 1);
			int var_855_int;
			var_749_int = var_855_int;
			func_445(var_855_int, "pers_worker", "worker.xml", 2);
			int var_859_int;
			var_749_int = var_859_int;
			func_445(var_859_int, "pers_worker", "worker2.xml", 2);
	}
	for(;;) {
		return 2;

	}
	
Label_2318:
	int var_863_int;
	var_749_int = var_863_int;
	func_445(var_863_int, "pers_alkash", "alkash.xml", 1);
	int var_867_int;
	var_749_int = var_867_int;
	func_445(var_867_int, "pers_worker", "worker.xml", 1);
	int var_871_int;
	var_749_int = var_871_int;
	func_445(var_871_int, "pers_worker", "worker2.xml", 1);
}


void func_105(int var_4782_int, string var_4783_string)
{
	int var_4785_int;
	@GetVariable(var_4783_string, var_4785_int);
	var_4785_int = var_4782_int;
}


// @pe
void func_7277(int var_1957_int, int var_1958_int, object var_1959_object, object var_1960_object, object var_1961_object, object var_1962_object)
{
	if(var_1958_int == 0) {
		func_738(15, false);
		func_755(15, false, 1);
		int var_1970_int; int var_1971_int; object var_1972_object; object var_1973_object; object var_1974_object;
		var_1970_int = 15;
		var_1957_int = var_1971_int;
		var_1959_object = var_1972_object;
		var_1960_object = var_1973_object;
		var_1961_object = var_1974_object;
		func_564(var_1971_int, var_1972_object, var_1973_object, var_1974_object);
		object var_1975_object;
		var_1962_object = var_1975_object;
		func_248(var_1975_object, 0);
		func_812(15, false, 5);
		func_874(15, false, 5);
	}
	int var_1984_int;
	var_1958_int = var_1984_int;
	func_1029(15, var_1984_int);
	int var_1986_int; int var_1987_int;
	var_1957_int = var_1986_int;
	var_1958_int = var_1987_int;
	func_1287(15, var_1986_int, var_1987_int);
}


void func_110(object var_4662_object, string var_4663_string)
{
	object var_4666_object;
	@GetMainOutdoorScene(var_4666_object);
	object var_4667_object;
	@AddBlankActor(var_4667_object, var_4666_object, var_4663_string, (var_4663_string + ".bin"));
	var_4667_object = var_4662_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10353(void)
{
	@SetVariable("d8BurahLetter", 1);
}


// @pe
void func_10359(void)
{
	int var_6185_int;
	func_105(var_6185_int, "map_chertez_state");
	if(var_6185_int <= 1) {
		@SetVariable("map_chertez_state", 1);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_121(object var_4903_object, string var_4904_string)
{
	object var_4907_object;
	@GetMainOutdoorScene(var_4907_object);
	object var_4908_object;
	@AddBlankActorFromXml(var_4908_object, var_4907_object, var_4904_string, (var_4904_string + ".xml"));
	var_4908_object = var_4903_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_132(object var_328_object, object var_329_object, string var_330_string, string var_331_string, string var_332_string)
{
	bool var_338_bool; cvector var_339_cvector; cvector var_340_cvector;
	var_329_object->GetLocator(var_330_string, var_338_bool, var_339_cvector, var_340_cvector);
	if(!var_338_bool) //@nz
		@Trace(("Locator " + var_330_string) + " doesn't exist");
	else
		var_329_object->AddStationaryActor(Obj(), var_339_cvector, var_340_cvector, var_331_string, var_332_string);
	object var_341_object = var_328_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_10376(void)
{
	int var_6199_int;
	func_105(var_6199_int, "map_chertez_state");
	if(var_6199_int <= 2) {
		@SetVariable("map_chertez_state", 2);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_6283(int var_1641_int, int var_1642_int, object var_1643_object, object var_1644_object, object var_1645_object, object var_1646_object)
{
	if(var_1642_int == 0) {
		func_738(10, false);
		func_755(10, false, 1);
		int var_1654_int; int var_1655_int; object var_1656_object; object var_1657_object; object var_1658_object;
		var_1654_int = 10;
		var_1641_int = var_1655_int;
		var_1643_object = var_1656_object;
		var_1644_object = var_1657_object;
		var_1645_object = var_1658_object;
		func_564(var_1655_int, var_1656_object, var_1657_object, var_1658_object);
		object var_1659_object;
		var_1646_object = var_1659_object;
		func_248(var_1659_object, 0);
		func_812(10, false, 7);
		func_874(10, false, 7);
	}
	int var_1668_int;
	var_1642_int = var_1668_int;
	func_925(10, var_1668_int);
	int var_1670_int; int var_1671_int;
	var_1641_int = var_1670_int;
	var_1642_int = var_1671_int;
	func_1549(10, var_1670_int, var_1671_int);
}


// @pe
void func_5261(int var_2596_int, int var_2597_int, object var_2598_object, object var_2599_object, object var_2600_object, object var_2601_object)
{
	if(var_2597_int == 0) {
		func_738(4, true);
		func_755(4, true, 1);
		int var_2610_int; object var_2611_object; object var_2612_object; object var_2613_object;
		var_2596_int = var_2610_int;
		var_2598_object = var_2611_object;
		var_2599_object = var_2612_object;
		var_2600_object = var_2613_object;
		func_583(4, var_2610_int, var_2611_object, var_2612_object, var_2613_object);
		object var_2614_object;
		var_2601_object = var_2614_object;
		func_248(var_2614_object, 1);
		func_812(4, true, 4);
		func_874(4, false, 4);
	}
	func_721(4, false);
	int var_2625_int; int var_2626_int;
	var_2596_int = var_2625_int;
	var_2597_int = var_2626_int;
	func_2915(4, var_2625_int, var_2626_int);
}


// @pe
void func_1166(float var_2167_float, int var_2168_int)
{
	if((var_2168_int + 1) == 1) {
		var_2167_float = 0;
		return 0;
	EMIT "GOTO 0x4e6";
	}
	if((var_2168_int + 1) == 2) {
		var_2167_float = 0;
		return 0;
	EMIT "GOTO 0x4e6";
	}
	if((var_2168_int + 1) == 3) {
		var_2167_float = 0;
		return 0;
	EMIT "GOTO 0x4e6";
	}
	if((var_2168_int + 1) == 4) {
		var_2167_float = 0;
		return 0;
	EMIT "GOTO 0x4e6";
	}
	if((var_2168_int + 1) == 5) {
		var_2167_float = 0;
		return 0;
	EMIT "GOTO 0x4e6";
	}
	if((var_2168_int + 1) == 6) {
		var_2167_float = 2;
		return 0;
	EMIT "GOTO 0x4e6";
	}
	if((var_2168_int + 1) == 7) {
		var_2167_float = 1;
		return 0;
	EMIT "GOTO 0x4e6";
	}
	if((var_2168_int + 1) == 8) {
		var_2167_float = 1;
		return 0;
	EMIT "GOTO 0x4e6";
	}
	if((var_2168_int + 1) == 9) {
		var_2167_float = 1;
		return 0;
	EMIT "GOTO 0x4e6";
	}
	if((var_2168_int + 1) == 10) {
		var_2167_float = 1;
		return 0;
	EMIT "GOTO 0x4e6";
	}
	if((var_2168_int + 1) == 11) {
		var_2167_float = 1;
		return 0;
	}
	var_2167_float = 0;
}


void func_150(string var_4580_string, bool var_4581_bool)
{
	object var_4583_object;
	@FindActor(var_4583_object, var_4580_string);
	if(!var_4583_object) //@nz
		@Trace(("Door " + var_4580_string) + " not found");
	else
		var_4583_object->SetProperty("locked", var_4581_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_10393(void)
{
	int var_6213_int;
	func_105(var_6213_int, "map_chertez_state");
	if(var_6213_int <= 3) {
		@SetVariable("map_chertez_state", 3);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_7329(int var_3148_int, int var_3149_int, object var_3150_object, object var_3151_object, object var_3152_object, object var_3153_object)
{
	if(var_3149_int == 0) {
		func_738(15, true);
		func_755(15, true, 1);
		int var_3162_int; object var_3163_object; object var_3164_object; object var_3165_object;
		var_3148_int = var_3162_int;
		var_3150_object = var_3163_object;
		var_3151_object = var_3164_object;
		var_3152_object = var_3165_object;
		func_583(15, var_3162_int, var_3163_object, var_3164_object, var_3165_object);
		object var_3166_object;
		var_3153_object = var_3166_object;
		func_248(var_3166_object, 1);
		func_812(15, true, 5);
		func_874(15, false, 5);
	}
	func_721(15, false);
	int var_3177_int; int var_3178_int;
	var_3148_int = var_3177_int;
	var_3149_int = var_3178_int;
	func_2555(15, var_3177_int, var_3178_int);
}


void func_167(bool var_671_bool, string var_672_string, string var_673_string)
{
	object var_675_object;
	@FindActor(var_675_object, var_672_string);
	if(var_675_object == null)
		var_671_bool = false;
	@Trigger(var_675_object, var_673_string);
	var_671_bool = true;
}
EMIT "Stack[-1] = 0";


void func_14506(object var_4267_object, object var_4268_object, cvector var_4269_cvector, cvector var_4270_cvector)
{
	object var_4272_object;
	var_4268_object->AddStationaryActor(var_4272_object, var_4269_cvector, var_4270_cvector, "pers_morlok", "Danko_arena_manager.xml");
	var_4272_object = var_4267_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_10410(void)
{
	int var_6227_int;
	func_105(var_6227_int, "map_chertez_state");
	if(var_6227_int <= 4) {
		@SetVariable("map_chertez_state", 4);
		@SetVariable("map_chertez_force", 1);
	}
}


void func_179(bool var_4409_bool, string var_4410_string, string var_4411_string, string var_4412_string)
{
	object var_4414_object;
	@FindActor(var_4414_object, var_4410_string);
	if(var_4414_object == null)
		var_4409_bool = false;
	@Trigger(var_4414_object, var_4411_string, var_4412_string);
	var_4409_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_10427(void)
{
	int var_6241_int;
	func_105(var_6241_int, "map_chertez_state");
	if(var_6241_int <= 6) {
		@SetVariable("map_chertez_state", 6);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void func_11453(void)
{
	func_150("mnogogrannik@door1", true);
}


void func_191(object var_598_object)
{
	int var_602_int; int var_603_int; object var_604_object;
	if(var_598_object != 0) {
		var_598_object->size(var_602_int);
		var_603_int = 0;

		while(var_603_int < var_602_int) {
			var_598_object->get(var_604_object, var_603_int);
			if(var_604_object != 0)
				var_604_object->Remove();
			var_604_object = null;
			var_603_int += 1;
		}

		var_598_object->clear();
	}
}


// @pe
void func_6335(int var_2877_int, int var_2878_int, object var_2879_object, object var_2880_object, object var_2881_object, object var_2882_object)
{
	if(var_2878_int == 0) {
		func_738(10, true);
		func_755(10, true, 1);
		int var_2891_int; object var_2892_object; object var_2893_object; object var_2894_object;
		var_2877_int = var_2891_int;
		var_2879_object = var_2892_object;
		var_2880_object = var_2893_object;
		var_2881_object = var_2894_object;
		func_583(10, var_2891_int, var_2892_object, var_2893_object, var_2894_object);
		object var_2895_object;
		var_2882_object = var_2895_object;
		func_248(var_2895_object, 1);
		func_812(10, true, 7);
		func_874(10, false, 7);
	}
	func_721(10, false);
	int var_2906_int; int var_2907_int;
	var_2877_int = var_2906_int;
	var_2878_int = var_2907_int;
	func_2735(10, var_2906_int, var_2907_int);
}


// @pe
void func_5313(int var_3722_int, int var_3723_int, object var_3724_object, object var_3725_object, object var_3726_object, object var_3727_object)
{
	if(var_3723_int == 0) {
		func_738(4, false);
		func_755(4, false, 1);
		int var_3736_int; object var_3737_object; object var_3738_object; object var_3739_object;
		var_3722_int = var_3736_int;
		var_3724_object = var_3737_object;
		var_3725_object = var_3738_object;
		var_3726_object = var_3739_object;
		func_662(4, var_3736_int, var_3737_object, var_3738_object, var_3739_object);
		object var_3740_object;
		var_3727_object = var_3740_object;
		func_248(var_3740_object, 2);
		func_812(4, false, 4);
		func_874(4, true, 4);
	}
	func_721(4, false);
	int var_3751_int; int var_3752_int;
	var_3722_int = var_3751_int;
	var_3723_int = var_3752_int;
	func_3818(4, var_3751_int, var_3752_int);
}


void func_11460(void)
{
	object var_5144_object;
	func_12171(var_5144_object);
	object var_5142_object;
	var_5144_object = var_5142_object;
	object var_5143_object;
	var_5142_object->FindMark(var_5143_object, "d9q01GotoViktor");
	if(var_5143_object != 0)
		var_5143_object->Remove();
	var_5142_object->FindMark(var_5143_object, "d9q02GotoJulia");
	if(var_5143_object != 0)
		var_5143_object->Remove();
	var_5142_object->FindMark(var_5143_object, "d9q03GotoLara");
	if(var_5143_object != 0)
		var_5143_object->Remove();
	var_5142_object->FindMark(var_5143_object, "d9q04GotoAnna");
	if(var_5143_object != 0)
		var_5143_object->Remove();
	var_5142_object->FindMark(var_5143_object, "d9q05AglajaGotoBurah");
	if(var_5143_object != 0)
		var_5143_object->Remove();
	bool var_5155_bool;
	func_12146(var_5155_bool, 182);
	bool var_5157_bool;
	func_12146(var_5157_bool, 655);
	bool var_5159_bool;
	func_12146(var_5159_bool, 659);
	bool var_5161_bool;
	func_12146(var_5161_bool, 662);
	bool var_5163_bool;
	func_12146(var_5163_bool, 764);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_3275(int var_2313_int, int var_2314_int, int var_2315_int)
{
	int var_2318_int; int var_2319_int;
	bool var_2320_bool = false;
	if(var_2315_int > 8) {
		if(var_2315_int < 21)
			var_2320_bool = true;
	}
	if(var_2320_bool != 0) {
		int var_2325_int;
		var_2313_int = var_2325_int;
		func_445(var_2325_int, "pers_vaxxabit", "vaxxabit_d.xml", 7);
		int var_2329_int;
		var_2313_int = var_2329_int;
		func_445(var_2329_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 7);
		int var_2333_int;
		var_2313_int = var_2333_int;
		func_445(var_2333_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2337_int;
		var_2313_int = var_2337_int;
		func_471(var_2337_int, "fog", "fog.xml", 7);
		if(var_2314_int >= 5) {
			int var_2343_int;
			var_2313_int = var_2343_int;
			func_471(var_2343_int, "fog", "fog_hunter.xml", 3);
		}
		float var_2348_float; int var_2349_int;
		func_1166(var_2348_float, var_2349_int);
		if((2 * var_2348_float) != 0) {
			int var_2351_int; int var_2354_int;
			var_2313_int = var_2351_int;
			var_2318_int = var_2354_int;
			func_445(var_2351_int, "pers_bomber", "bomber.xml", var_2354_int);
		}
	} else {
		int var_2385_int;
		var_2313_int = var_2385_int;
		func_445(var_2385_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2389_int;
		var_2313_int = var_2389_int;
		func_445(var_2389_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2393_int;
		var_2313_int = var_2393_int;
		func_445(var_2393_int, "pers_rat_big", "rat_big.xml", 4);
		int var_2397_int;
		var_2313_int = var_2397_int;
		func_471(var_2397_int, "fog", "fog.xml", 7);
		if(var_2349_int >= 5) {
			int var_2403_int;
			var_2313_int = var_2403_int;
			func_471(var_2403_int, "fog", "fog_hunter.xml", 3);
		}
		float var_2408_float; int var_2409_int;
		var_2314_int = var_2409_int;
		func_1166(var_2408_float, var_2409_int);
		if((2 * var_2408_float) == 0) goto Label_3393;
		int var_2411_int; int var_2414_int;
		var_2313_int = var_2411_int;
		var_2319_int = var_2414_int;
		func_445(var_2411_int, "pers_bomber", "bomber.xml", var_2414_int);
	}
Label_3393:
	bool var_2355_bool; int var_2356_int;
	var_2314_int = var_2356_int;
	func_1283(var_2355_bool, var_2356_int);
	if(var_2355_bool != 0) {
		int var_2357_int;
		var_2313_int = var_2357_int;
		func_445(var_2357_int, "pers_sanitar", "sanitar.xml", 2);
	}
	int var_2361_int;
	var_2313_int = var_2361_int;
	func_458(var_2361_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2367_int;
	var_2313_int = var_2367_int;
	func_458(var_2367_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2373_int;
	var_2313_int = var_2373_int;
	func_458(var_2373_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2379_int;
	var_2313_int = var_2379_int;
	func_458(var_2379_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	
}


// @pe
void func_10444(void)
{
	func_150("theater@door1", true);
}


// @pe
void func_10451(void)
{
	func_150("theater@door1", false);
}


void func_212(float var_4570_float)
{
	float var_4572_float;
	@GetGameTime(var_4572_float);
	var_4572_float = var_4570_float;
}


// @pe
void func_7381(int var_4282_int, int var_4283_int, object var_4284_object, object var_4285_object, object var_4286_object, object var_4287_object)
{
	if(var_4283_int == 0) {
		func_738(15, false);
		func_755(15, false, 1);
		int var_4296_int; object var_4297_object; object var_4298_object; object var_4299_object;
		var_4282_int = var_4296_int;
		var_4284_object = var_4297_object;
		var_4285_object = var_4298_object;
		var_4286_object = var_4299_object;
		func_662(15, var_4296_int, var_4297_object, var_4298_object, var_4299_object);
		object var_4300_object;
		var_4287_object = var_4300_object;
		func_248(var_4300_object, 2);
		func_812(15, false, 5);
		func_874(15, true, 5);
	}
	func_721(15, false);
	int var_4311_int; int var_4312_int;
	var_4282_int = var_4311_int;
	var_4283_int = var_4312_int;
	func_3442(15, var_4311_int, var_4312_int);
}


void func_217(int var_148_int)
{
	float var_150_float;
	@GetGameTime(var_150_float);
	var_148_int = 1 + (var_150_float / 24);
}


// @pe
void func_10458(void)
{
	func_12092();
}


// @pe
void func_10463(void)
{
	func_150("termitnik@door1", true);
}


// @pe
void func_226(bool var_146_bool, int var_147_int)
{
	int var_148_int;
	func_217(var_148_int);
	var_146_bool = var_148_int == var_147_int;
}


// @pe
void func_10470(void)
{
	func_150("termitnik@door1", false);
}


void func_232(void)
{
	@SetSepia(0.5, 0.886);
}


// @pe
void func_1256(bool var_1131_bool, int var_1132_int, int var_1133_int)
{
	var_1131_bool = false;
	if(var_1132_int >= 10) {
		if(var_1133_int < 6)
			var_1131_bool = true;
	}
}


void func_237(void)
{
	@SetSepia(0, 0);
}


// @pe
void func_10477(void)
{
	@SetVariable("resque_list", 1);
	func_14113();
}


// @pe
void func_242(string var_445_string, int var_446_int)
{
	var_445_string = ("Region" + var_446_int) + "State";
}


// @pe
void func_6387(int var_4007_int, int var_4008_int, object var_4009_object, object var_4010_object, object var_4011_object, object var_4012_object)
{
	if(var_4008_int == 0) {
		func_738(10, false);
		func_755(10, false, 1);
		int var_4021_int; object var_4022_object; object var_4023_object; object var_4024_object;
		var_4007_int = var_4021_int;
		var_4009_object = var_4022_object;
		var_4010_object = var_4023_object;
		var_4011_object = var_4024_object;
		func_662(10, var_4021_int, var_4022_object, var_4023_object, var_4024_object);
		object var_4025_object;
		var_4012_object = var_4025_object;
		func_248(var_4025_object, 2);
		func_812(10, false, 7);
		func_874(10, true, 7);
	}
	func_721(10, false);
	int var_4036_int; int var_4037_int;
	var_4007_int = var_4036_int;
	var_4008_int = var_4037_int;
	func_3630(10, var_4036_int, var_4037_int);
}


// @pe
void func_1266(bool var_1142_bool, int var_1143_int, int var_1144_int)
{
	var_1142_bool = false;
	if(var_1143_int >= 3) {
		bool var_1147_bool = true;
		var_1149_bool = var_1144_int > 22;
		if(var_1149_bool != 1) {
			var_1151_bool = var_1144_int < 5;
			if(var_1151_bool != 1)
				var_1147_bool = false;
		}
		if(var_1147_bool != 0)
			var_1142_bool = true;
	}
}


// @pe
void func_5365(object var_145_object)
{
	var_145_object->add("dt_house3_14_i2");
	var_145_object->add("dt_house3_14");
	var_145_object->add("house1_arc_01l");
	var_145_object->add("house1_arc_01r");
	var_145_object->add("dt_House6_01");
	var_145_object->add("dt_house_1_09");
	var_145_object->add("house5_24");
	var_145_object->add("dt_House6_03");
	var_145_object->add("dt_House6_04");
	var_145_object->add("dt_house_1_08");
	var_145_object->add("house5_unoin_solidl");
	var_145_object->add("house5_unoin_solidr");
	var_145_object->add("dt_house2_12");
	var_145_object->add("dt_house2_11");
	var_145_object->add("dt_house2_13");
	var_145_object->add("dt_house2_09");
	var_145_object->add("dt_house2_08");
	var_145_object->add("dt_house2_07");
	var_145_object->add("dt_house2_06");
	var_145_object->add("house5_01");
	var_145_object->add("house5_15");
	var_145_object->add("house5_16");
	var_145_object->add("house5_17");
	var_145_object->add("house5_unoin04l");
	var_145_object->add("house5_unoin04r");
	var_145_object->add("house5_23");
	var_145_object->add("house1_se_05");
}


// @pe
void func_10486(void)
{
	func_150("factory@door1", false);
}


void func_248(object var_611_object, int var_612_int)
{
	int var_619_int; string var_620_string; string var_622_string; object var_624_object;
	var_611_object->size(var_619_int);
	if(var_612_int == 1) {
		var_620_string = "s_";
	} else if(var_612_int == 2) {
	}
	int var_621_int = 0;
	
	for(;;) {
		if(var_621_int < var_619_int) {
			var_611_object->get(var_622_string, var_621_int);
			@GetSceneByName(var_624_object, var_622_string);
			if(!var_624_object) //@nz
				@Trace(("City manager: can't replace indoor scene \"" + var_622_string) + "\" because it doesn't exist");
			else
				@ReplaceScene(var_624_object, (("n_" + var_622_string) + ".isc"));

		}
		var_624_object = null;
		var_621_int += 1;
	}
	
}


// @pe
void func_10493(void)
{
	func_150("icot_eva@door1", true);
}


void func_8448(void)
{
	object var_4486_object; bool var_4487_bool; cvector var_4488_cvector; cvector var_4489_cvector; string var_4490_string;
	int var_4491_int;
	func_12188(var_4491_int);
	if(var_4491_int != 1)
		return 16;
	var_4494_object = GlobalVars[6];
	int var_4483_int;
	var_4494_object->size(var_4483_int);
	object var_4484_object;
	@GetMainOutdoorScene(var_4484_object);
	int var_4485_int = 0;
	
	for(;;) {
		if(var_4485_int < var_4483_int) {
			var_4496_object = GlobalVars[6];
			var_4496_object->get(var_4486_object, var_4485_int);
			if(var_4486_object != 0) {
			} else {
			var_4484_object->GetLocator(("pt_plant" + (var_4485_int + 1)), var_4487_bool, var_4488_cvector, var_4489_cvector);
			if(!var_4487_bool) { //@nz
				@Trace("Plant point not found");
				goto Label_8518;
			}
			@RandOneOf(var_4490_string, 6, 3, 3, 3, 1, 1, "", "grass_black_tvir", "grass_blood_tvir", "grass_brown_tvir", "grass_savyur", "grass_white_plet");
			if(var_4490_string != 0) {
				var_4484_object->AddStationaryActorByType(var_4486_object, var_4488_cvector, var_4489_cvector, "scripted", (("item_" + var_4490_string) + "_stat.xml"));
				var_4523_object = GlobalVars[6];
				var_4523_object->set(var_4485_int, var_4486_object);
				@Trace((("New plant: \"" + var_4490_string) + "\" at location #") + (var_4485_int + 1));
			}
			var_4486_object = null;
		}
		return 16;
		}
	Label_8518:
		var_4485_int += 1;
	}
	
}
EMIT "Stack[-7] = 0";


// @pe
void func_1283(bool var_2218_bool, int var_2219_int)
{
	var_2218_bool = var_2219_int >= 8;
}


// @pe
void func_4356(void)
{
}


void func_10500(void)
{
	object var_4567_object;
	func_12171(var_4567_object);
	object var_4565_object;
	var_4567_object = var_4565_object;
	object var_4566_object;
	var_4565_object->FindMark(var_4566_object, "d1EvaGotoMaria");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1EvaInfo");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1GeorgInfo");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1JuliaMapMarkEva");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1JuliaMapMarkLara");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1KaterinaMapMark");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1q01AlexandrGotoJulia");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1q01AnnaMapMarkMladVlad");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1q01EvaGotoSimon");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1q01EvaMapMarkMladVlad");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1q01GeorgGotoViktor");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1q01JuliaGotoBigVlad");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1q01LaraMarkMladVlad");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1q01PatrolGotoAlexandr");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1q01ViktorGotoIsidor");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1q02AnnaGotoLaska");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1q02JuliaGotoAnna");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1q03KapellaGotoOspina");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	var_4565_object->FindMark(var_4566_object, "d1q03MladVladGotoOspina");
	if(var_4566_object != 0)
		var_4566_object->Remove();
	bool var_4612_bool;
	func_12146(var_4612_bool, 2);
	bool var_4624_bool;
	func_12146(var_4624_bool, 7);
	bool var_4626_bool;
	func_12146(var_4626_bool, 37);
	bool var_4628_bool;
	func_12146(var_4628_bool, 43);
	@Trace("Day1 cleanup");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4358(int var_517_int, int var_518_int, object var_519_object, object var_520_object, object var_521_object, object var_522_object)
{
	if(var_518_int == 0) {
		func_738(0, false);
		func_755(0, false, 1);
		int var_565_int; int var_566_int; object var_567_object; object var_568_object; object var_569_object;
		var_565_int = 0;
		var_517_int = var_566_int;
		var_519_object = var_567_object;
		var_520_object = var_568_object;
		var_521_object = var_569_object;
		func_564(var_566_int, var_567_object, var_568_object, var_569_object);
		object var_611_object;
		var_522_object = var_611_object;
		func_248(var_611_object, 0);
		func_812(0, false, 4);
		func_874(0, false, 4);
	}
	int var_724_int;
	var_518_int = var_724_int;
	func_992(0, var_724_int);
	int var_750_int; int var_751_int;
	var_517_int = var_750_int;
	var_518_int = var_751_int;
	func_2149(0, var_750_int, var_751_int);
}


void func_11523(void)
{
	object var_5180_object;
	func_12171(var_5180_object);
	object var_5178_object;
	var_5180_object = var_5178_object;
	object var_5179_object;
	var_5178_object->FindMark(var_5179_object, "d10q01AglajaGotoPetr");
	if(var_5179_object != 0)
		var_5179_object->Remove();
	var_5178_object->FindMark(var_5179_object, "d10q02KaterinaGotoRubin");
	if(var_5179_object != 0)
		var_5179_object->Remove();
	var_5178_object->FindMark(var_5179_object, "d10q02RubinGotoMaria");
	if(var_5179_object != 0)
		var_5179_object->Remove();
	var_5178_object->FindMark(var_5179_object, "d10q02GeorgGotoAglaja");
	if(var_5179_object != 0)
		var_5179_object->Remove();
	var_5178_object->FindMark(var_5179_object, "d10q03GotoMark");
	if(var_5179_object != 0)
		var_5179_object->Remove();
	var_5178_object->FindMark(var_5179_object, "d10q03MarkGotoBlock");
	if(var_5179_object != 0)
		var_5179_object->Remove();
	bool var_5193_bool;
	func_12146(var_5193_bool, 186);
	bool var_5195_bool;
	func_12146(var_5195_bool, 666);
	bool var_5197_bool;
	func_12146(var_5197_bool, 672);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1287(int var_1810_int, int var_1811_int, int var_1812_int)
{
	int var_1814_int;
	if((var_1811_int + 1) == 12)
		return 2;
	bool var_1819_bool = false;
	bool var_1820_bool = true;
	var_1822_bool = var_1812_int < 7;
	if(var_1822_bool != 1) {
		var_1824_bool = var_1812_int > 21;
		if(var_1824_bool != 1)
			var_1820_bool = false;
	}
	if(var_1820_bool != 0) {
		if(var_1811_int != 0)
			var_1819_bool = true;
	}
	if(var_1819_bool != 0) {
		float var_1827_float; int var_1828_int;
		var_1811_int = var_1828_int;
		func_1052(var_1827_float, var_1828_int);
		var_1827_float = var_1814_int;
		if(var_1814_int != 0) {
			int var_1830_int; int var_1833_int;
			var_1810_int = var_1830_int;
			var_1814_int = var_1833_int;
			func_445(var_1830_int, "pers_grabitel", "grabitel.xml", var_1833_int);
		}
	}
	bool var_1834_bool = false;
	bool var_1835_bool = false;
	if(var_1811_int == 0) {
		if(var_1812_int < 21)
			var_1835_bool = true;
	}
	if(var_1835_bool != 0) {
		int var_1840_int;
		func_12188(var_1840_int);
		if(var_1840_int == 1)
			var_1834_bool = true;
	}
	if(var_1834_bool != 0) {
		int var_1843_int;
		var_1810_int = var_1843_int;
		func_445(var_1843_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1847_int;
		var_1810_int = var_1847_int;
		func_445(var_1847_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1851_int;
		var_1810_int = var_1851_int;
		func_445(var_1851_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1855_int;
		var_1810_int = var_1855_int;
		func_445(var_1855_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1859_int;
		var_1810_int = var_1859_int;
		func_445(var_1859_int, "pers_wasted_girl", "wasted_girl.xml", 2);
		int var_1863_int;
		var_1810_int = var_1863_int;
		func_445(var_1863_int, "pers_wasted_male", "wasted_male.xml", 3);
		int var_1867_int;
		var_1810_int = var_1867_int;
		func_445(var_1867_int, "pers_woman", "woman.xml", 3);
		int var_1871_int;
		var_1810_int = var_1871_int;
		func_445(var_1871_int, "pers_boy", "boy.xml", 1);
		int var_1875_int;
		var_1810_int = var_1875_int;
		func_445(var_1875_int, "pers_girl", "girl.xml", 1);
		int var_1879_int;
		var_1810_int = var_1879_int;
		func_445(var_1879_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_1902_bool = false;
			if(var_1812_int > 8) {
				if(var_1812_int < 21)
					var_1902_bool = true;
			}
			if(var_1902_bool == 0) goto Label_1483;
			int var_1907_int;
			var_1810_int = var_1907_int;
			func_445(var_1907_int, "pers_wasted_girl", "wasted_girl.xml", 2);
			int var_1911_int;
			var_1810_int = var_1911_int;
			func_445(var_1911_int, "pers_wasted_male", "wasted_male.xml", 3);
			int var_1915_int;
			var_1810_int = var_1915_int;
			func_445(var_1915_int, "pers_woman", "woman.xml", 3);
			int var_1919_int;
			var_1810_int = var_1919_int;
			func_445(var_1919_int, "pers_unosha", "unosha.xml", 2);
			int var_1923_int;
			var_1810_int = var_1923_int;
			func_445(var_1923_int, "pers_unosha", "unosha2.xml", 2);
			int var_1927_int;
			var_1810_int = var_1927_int;
			func_445(var_1927_int, "pers_boy", "boy.xml", 2);
			int var_1931_int;
			var_1810_int = var_1931_int;
			func_445(var_1931_int, "pers_girl", "girl.xml", 1);
			int var_1935_int;
			var_1810_int = var_1935_int;
			func_445(var_1935_int, "pers_girl", "girl2.xml", 1);
	}
	for(;;) {
		bool var_1883_bool = false;
		bool var_1884_bool = false;
		if(var_1811_int == 0) {
			if(var_1812_int > 12)
				var_1884_bool = true;
		}
		if(var_1884_bool != 0) {
			if(var_1812_int < 22)
				var_1883_bool = true;
		}
		if(var_1883_bool != 0) {
			int var_1891_int;
			var_1810_int = var_1891_int;
			func_445(var_1891_int, "pers_wasted_girl", "wasted_girl_killme.xml", 1);
		}
		bool var_1895_bool; int var_1896_int; int var_1897_int;
		var_1811_int = var_1896_int;
		var_1812_int = var_1897_int;
		func_1256(var_1895_bool, var_1896_int, var_1897_int);
		if(var_1895_bool != 0) {
			int var_1898_int;
			var_1810_int = var_1898_int;
			func_445(var_1898_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		return 2;

	}
	
Label_1483:
	int var_1939_int;
	var_1810_int = var_1939_int;
	func_445(var_1939_int, "pers_wasted_girl", "wasted_girl.xml", 1);
	int var_1943_int;
	var_1810_int = var_1943_int;
	func_445(var_1943_int, "pers_wasted_male", "wasted_male.xml", 2);
	int var_1947_int;
	var_1810_int = var_1947_int;
	func_445(var_1947_int, "pers_unosha", "unosha.xml", 1);
	int var_1951_int;
	var_1810_int = var_1951_int;
	func_445(var_1951_int, "pers_unosha", "unosha2.xml", 1);
}


void func_286(int var_108_int)
{
	int var_111_int; int var_112_int;
	var_111_int = 0;
	
	while(0 < 16) {
		bool var_115_bool; int var_116_int;
		var_112_int = var_116_int;
		func_372(var_115_bool, var_116_int);
		if(var_115_bool != 0)
			var_111_int += 1;
		var_112_int += 1;
	}
	
	var_111_int = var_108_int;
}


// @pe
void func_13599(float var_4569_float)
{
	var_4573_object = GlobalVars[16];
	GlobalVars[16] = Obj();
	@SetTimeEvent(45003, 24.0);
	object var_4576_object; object var_4577_object;
	var_4578_object = GlobalVars[16];
	var_4578_object = var_4576_object;
	var_4579_object = GlobalVars[16];
	var_4579_object = var_4577_object;
	func_10493();
	object var_4590_object; object var_4591_object;
	var_4592_object = GlobalVars[16];
	var_4592_object = var_4590_object;
	var_4593_object = GlobalVars[16];
	var_4593_object = var_4591_object;
	func_10444();
	object var_4596_object; object var_4597_object;
	var_4598_object = GlobalVars[16];
	var_4598_object = var_4596_object;
	var_4599_object = GlobalVars[16];
	var_4599_object = var_4597_object;
	func_10458();
	object var_4623_object; object var_4624_object;
	var_4625_object = GlobalVars[16];
	var_4625_object = var_4623_object;
	var_4626_object = GlobalVars[16];
	var_4626_object = var_4624_object;
	func_10463();
	object var_4629_object; object var_4630_object;
	var_4631_object = GlobalVars[16];
	var_4631_object = var_4629_object;
	var_4632_object = GlobalVars[16];
	var_4632_object = var_4630_object;
	func_11453();
	object var_4635_object; object var_4636_object;
	var_4637_object = GlobalVars[16];
	var_4637_object = var_4635_object;
	var_4638_object = GlobalVars[16];
	var_4638_object = var_4636_object;
	func_10156();
	object var_4641_object; object var_4642_object;
	var_4643_object = GlobalVars[16];
	var_4643_object = var_4641_object;
	var_4644_object = GlobalVars[16];
	var_4644_object = var_4642_object;
	func_10259();
	object var_4647_object; object var_4648_object;
	var_4649_object = GlobalVars[16];
	var_4649_object = var_4647_object;
	var_4650_object = GlobalVars[16];
	var_4650_object = var_4648_object;
	func_10266();
	int var_4653_int; float var_4654_float;
	var_4569_float = var_4654_float;
	func_9760(var_4653_int, var_4654_float);
	object var_4662_object;
	func_110(var_4662_object, "volonteers_danko");
	object var_4670_object;
	func_110(var_4670_object, "quest_d1_01");
	@SetTimeEvent(45005, 48.0);
	@SetTimeEvent(45006, 72.0);
	@SetTimeEvent(45007, 17.92);
	@SetTimeEvent(45008, 10.0);
	@SetTimeEvent(45009, 23.5);
	@SetTimeEvent(45010, 16.0);
	@SetTimeEvent(45011, 96.0);
	@SetTimeEvent(45012, 120.0);
	@SetTimeEvent(45013, 144.0);
	@SetTimeEvent(45015, 129.0);
	@SetTimeEvent(45016, 168.0);
	@SetTimeEvent(45017, 192.0);
	@SetTimeEvent(45018, 216.0);
	@SetTimeEvent(45031, 240.0);
	@SetTimeEvent(45032, 245.0);
	@SetTimeEvent(45035, 261.5);
	@SetTimeEvent(45036, 255.0);
	@SetTimeEvent(45038, 31.25);
	@SetTimeEvent(45039, 60.0);
	@SetTimeEvent(45040, 55.25);
	@SetTimeEvent(45041, 79.25);
	@SetTimeEvent(45042, 264.0);
	@SetTimeEvent(45043, 108.0);
	@SetTimeEvent(45044, 127.25);
	@SetTimeEvent(45045, 127.5);
	@SetTimeEvent(45046, 128.0);
	@SetTimeEvent(45047, 132.44);
	@SetTimeEvent(45048, 154.0);
	@SetTimeEvent(45049, 152.0);
	@SetTimeEvent(45050, 151.25);
	@SetTimeEvent(45051, 249.35);
	@SetTimeEvent(45054, 273.0);
	@SetTimeEvent(45063, 144.0);
	@SetTimeEvent(45064, 192.0);
	@SetTimeEvent(45174, 31.02);
	@SetTimeEvent(45175, 55.02);
	@SetTimeEvent(45176, 79.02);
	@SetTimeEvent(45177, 103.02);
	@SetTimeEvent(45178, 127.02);
	@SetTimeEvent(45179, 151.02);
	@SetTimeEvent(45180, 175.02);
	@SetTimeEvent(45181, 199.02);
	@SetTimeEvent(45182, 223.02);
	@SetTimeEvent(45183, 247.02);
	@SetTimeEvent(45184, 271.02);
	@SetTimeEvent(45199, 37.0);
	@SetTimeEvent(45200, 39.5);
	@SetTimeEvent(45201, 86.5);
	@SetTimeEvent(45202, 85.0);
	@SetTimeEvent(45203, 103.25);
	@SetTimeEvent(45204, 167.0);
	@SetTimeEvent(45205, 175.25);
	@SetTimeEvent(45206, 210.0);
	@SetTimeEvent(45207, 24.33);
	@SetTimeEvent(45208, 48.08);
	@SetTimeEvent(45209, 72.08);
	@SetTimeEvent(45210, 96.08);
	@SetTimeEvent(45211, 120.08);
	@SetTimeEvent(45212, 144.08);
	@SetTimeEvent(45213, 168.08);
	@SetTimeEvent(45214, 192.08);
	@SetTimeEvent(45215, 216.08);
	@SetTimeEvent(45216, 240.08);
	@SetTimeEvent(45217, 264.08);
	@SetTimeEvent(45218, 228.0);
	@SetTimeEvent(45219, 230.0);
	@SetTimeEvent(45220, 271.54);
	@SetTimeEvent(45221, 272.29);
	@SetTimeEvent(45222, 24.0);
	@SetTimeEvent(45223, 80.25);
	@SetTimeEvent(45224, 180.5);
	@SetTimeEvent(45225, 201.0);
	@SetTimeEvent(45226, 202.0);
	@SetTimeEvent(45227, 203.0);
	@SetTimeEvent(45228, 223.96);
	@SetTimeEvent(45229, 64.0);
	@SetTimeEvent(45230, 64.25);
	@SetTimeEvent(45231, 90.0);
	@SetTimeEvent(45232, 250.5);
	@SetTimeEvent(45239, 182.5);
	@SetTimeEvent(45260, 199.17);
	@SetTimeEvent(45261, 199.5);
	@SetTimeEvent(45267, 168.0);
	@SetTimeEvent(45268, 192.0);
	@SetTimeEvent(45269, 216.0);
	@SetTimeEvent(45270, 240.0);
	@SetTimeEvent(45271, 264.0);
}


void func_2340(int var_905_int, int var_906_int, int var_907_int)
{
	int var_909_int;
	if((var_906_int + 1) == 12)
		return 2;
	bool var_914_bool = false;
	bool var_915_bool = true;
	var_917_bool = var_907_int < 7;
	if(var_917_bool != 1) {
		var_919_bool = var_907_int > 21;
		if(var_919_bool != 1)
			var_915_bool = false;
	}
	if(var_915_bool != 0) {
		if(var_906_int != 0)
			var_914_bool = true;
	}
	if(var_914_bool != 0) {
		float var_923_float; int var_924_int;
		var_906_int = var_924_int;
		func_1052(var_923_float, var_924_int);
		if((1 * var_923_float) != 0) {
			int var_926_int; int var_929_int;
			var_905_int = var_926_int;
			var_909_int = var_929_int;
			func_445(var_926_int, "pers_grabitel", "grabitel.xml", var_929_int);
		}
	}
	bool var_930_bool = false;
	bool var_931_bool = false;
	if(var_906_int == 0) {
		if(var_907_int < 21)
			var_931_bool = true;
	}
	if(var_931_bool != 0) {
		int var_936_int;
		func_12188(var_936_int);
		if(var_936_int == 1)
			var_930_bool = true;
	}
	if(var_930_bool != 0) {
		int var_939_int;
		var_905_int = var_939_int;
		func_445(var_939_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_943_int;
		var_905_int = var_943_int;
		func_445(var_943_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_947_int;
		var_905_int = var_947_int;
		func_445(var_947_int, "pers_worker", "worker_attacker.xml", 1);
		int var_951_int;
		var_905_int = var_951_int;
		func_445(var_951_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_955_int;
		var_905_int = var_955_int;
		func_445(var_955_int, "pers_alkash", "alkash.xml", 1);
		int var_959_int;
		var_905_int = var_959_int;
		func_445(var_959_int, "pers_woman", "woman.xml", 2);
	} else {
			bool var_975_bool = false;
			if(var_907_int > 8) {
				if(var_907_int < 21)
					var_975_bool = true;
			}
			if(var_975_bool == 0) goto Label_2495;
			int var_980_int;
			var_905_int = var_980_int;
			func_445(var_980_int, "pers_worker", "worker.xml", 2);
			int var_984_int;
			var_905_int = var_984_int;
			func_445(var_984_int, "pers_worker", "worker2.xml", 2);
			int var_988_int;
			var_905_int = var_988_int;
			func_445(var_988_int, "pers_alkash", "alkash.xml", 1);
			int var_992_int;
			var_905_int = var_992_int;
			func_445(var_992_int, "pers_woman", "woman.xml", 2);
			int var_996_int;
			var_905_int = var_996_int;
			func_445(var_996_int, "pers_unosha", "unosha.xml", 1);
			int var_1000_int;
			var_905_int = var_1000_int;
			func_445(var_1000_int, "pers_unosha", "unosha2.xml", 1);
	}
	for(;;) {
		bool var_963_bool = false;
		bool var_964_bool = false;
		if(var_906_int == 0) {
			if(var_907_int > 12)
				var_964_bool = true;
		}
		if(var_964_bool != 0) {
			if(var_907_int < 22)
				var_963_bool = true;
		}
		if(var_963_bool != 0) {
			int var_971_int;
			var_905_int = var_971_int;
			func_445(var_971_int, "pers_woman", "woman_killme.xml", 1);
		}
		return 2;

	}
	
Label_2495:
	int var_1004_int;
	var_905_int = var_1004_int;
	func_445(var_1004_int, "pers_alkash", "alkash.xml", 1);
	int var_1008_int;
	var_905_int = var_1008_int;
	func_445(var_1008_int, "pers_worker", "worker.xml", 1);
	int var_1012_int;
	var_905_int = var_1012_int;
	func_445(var_1012_int, "pers_worker", "worker2.xml", 1);
	int var_1016_int;
	var_905_int = var_1016_int;
	func_445(var_1016_int, "pers_unosha", "unosha2.xml", 1);
	int var_1020_int;
	var_905_int = var_1020_int;
	func_445(var_1020_int, "pers_dog", "dog.xml", 1);
}


// @pe
void func_6439(object var_244_object)
{
	var_244_object->add("r5_house2_01");
	var_244_object->add("r5_house2_02");
	var_244_object->add("r5_house2_03");
	var_244_object->add("r5_house3_01_i2");
	var_244_object->add("r5_house3_01");
	var_244_object->add("r5_house3_02_i2");
	var_244_object->add("r5_house3_02");
	var_244_object->add("r5_house3_03_i2");
	var_244_object->add("r5_house3_03");
	var_244_object->add("r5_house3_04_i2");
	var_244_object->add("r5_house3_04");
	var_244_object->add("r5_house3_05_i2");
	var_244_object->add("r5_house3_05");
	var_244_object->add("r5_house3_06_i2");
	var_244_object->add("r5_house3_06");
	var_244_object->add("r5_house3_07_i2");
	var_244_object->add("r5_house3_07");
	var_244_object->add("r5_House6_01");
}


void func_304(void)
{
	int var_124_int; int var_126_int;
	@irand(var_124_int, 16);
	int var_125_int = 0;
	
	while(var_125_int < 16) {
		var_126_int = (var_125_int + var_124_int) % 16;
		bool var_132_bool = false;
		bool var_133_bool; int var_134_int;
		var_126_int = var_134_int;
		func_342(var_133_bool, var_134_int);
		if(var_133_bool != 0) {
			bool var_142_bool; int var_143_int;
			var_126_int = var_143_int;
			func_14118(var_142_bool, var_143_int);
			if(var_142_bool != 0)
				var_132_bool = true;
		}
		if(var_132_bool != 0) {
			int var_166_int;
			func_384(var_166_int);
			@Trace("Diseased Region: " + var_166_int);
		}
		var_125_int += 1;
	}
	
}


// @pe
void func_9526(int var_5497_int, float var_5498_float)
{
	float var_5502_float;
	var_5498_float = var_5502_float;
	int var_5499_int;
	func_12163(var_5499_int, 530554, 530553, var_5502_float);
	var_5499_int = var_5497_int;
}


// @pe
void func_4410(int var_2015_int, int var_2016_int, object var_2017_object, object var_2018_object, object var_2019_object, object var_2020_object)
{
	if(var_2016_int == 0) {
		func_738(0, true);
		func_755(0, true, 1);
		int var_2029_int; object var_2030_object; object var_2031_object; object var_2032_object;
		var_2015_int = var_2029_int;
		var_2017_object = var_2030_object;
		var_2018_object = var_2031_object;
		var_2019_object = var_2032_object;
		func_583(0, var_2029_int, var_2030_object, var_2031_object, var_2032_object);
		object var_2118_object;
		var_2020_object = var_2118_object;
		func_248(var_2118_object, 1);
		func_812(0, true, 4);
		func_874(0, false, 4);
	}
	func_721(0, false);
	int var_2129_int; int var_2130_int;
	var_2015_int = var_2129_int;
	var_2016_int = var_2130_int;
	func_3108(0, var_2129_int, var_2130_int);
}


// @pe
void func_9535(int var_5508_int, float var_5509_float)
{
	float var_5513_float;
	var_5509_float = var_5513_float;
	int var_5510_int;
	func_12163(var_5510_int, 530556, 530555, var_5513_float);
	var_5510_int = var_5508_int;
}


void func_11585(void)
{
	object var_5330_object;
	func_12171(var_5330_object);
	object var_5328_object;
	var_5330_object = var_5328_object;
	object var_5329_object;
	var_5328_object->FindMark(var_5329_object, "d11q01NudeGotoRastrel");
	if(var_5329_object != 0)
		var_5329_object->Remove();
	var_5328_object->FindMark(var_5329_object, "d11q01NudeGotoRastrel");
	if(var_5329_object != 0)
		var_5329_object->Remove();
	bool var_5335_bool;
	func_12146(var_5335_bool, 192);
	bool var_5337_bool;
	func_12146(var_5337_bool, 197);
	bool var_5339_bool;
	func_12146(var_5339_bool, 682);
	bool var_5341_bool;
	func_12146(var_5341_bool, 686);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5448(int var_1344_int, int var_1345_int, object var_1346_object, object var_1347_object, object var_1348_object, object var_1349_object)
{
	if(var_1345_int == 0) {
		func_738(5, false);
		func_755(5, false, 1);
		int var_1357_int; int var_1358_int; object var_1359_object; object var_1360_object; object var_1361_object;
		var_1357_int = 5;
		var_1344_int = var_1358_int;
		var_1346_object = var_1359_object;
		var_1347_object = var_1360_object;
		var_1348_object = var_1361_object;
		func_564(var_1358_int, var_1359_object, var_1360_object, var_1361_object);
		object var_1362_object;
		var_1349_object = var_1362_object;
		func_248(var_1362_object, 0);
		func_812(5, false, 4);
		func_874(5, false, 4);
	}
	int var_1371_int;
	var_1345_int = var_1371_int;
	func_925(5, var_1371_int);
	int var_1373_int; int var_1374_int;
	var_1344_int = var_1373_int;
	var_1345_int = var_1374_int;
	func_1826(5, var_1373_int, var_1374_int);
}


// @pe
void func_9544(int var_5519_int, float var_5520_float)
{
	float var_5524_float;
	var_5520_float = var_5524_float;
	int var_5521_int;
	func_12163(var_5521_int, 530558, 530557, var_5524_float);
	var_5521_int = var_5519_int;
}


void func_8523(void)
{
	object var_4539_object; object var_4542_object; bool var_4543_bool; cvector var_4544_cvector; cvector var_4545_cvector; string var_4546_string;
	@GetMainOutdoorScene(var_4539_object);
	var_4547_object = GlobalVars[7];
	int var_4540_int;
	var_4547_object->size(var_4540_int);
	int var_4541_int = 0;
	
	for(;;) {
		if(var_4541_int < var_4540_int) {
			var_4549_object = GlobalVars[7];
			var_4549_object->get(var_4542_object, var_4541_int);
			if(var_4542_object != 0) {
			} else {
			var_4539_object->GetLocator(("pt_grave_supply" + (var_4541_int + 1)), var_4543_bool, var_4544_cvector, var_4545_cvector);
			if(!var_4543_bool) { //@nz
				@Trace("Grave supply point not found");
				goto Label_8567;
			}
			@RandOneOf(var_4546_string, 1, 1, "bread", "milk");
			var_4539_object->AddStationaryActorByType(var_4542_object, var_4544_cvector, var_4545_cvector, "scripted", (("item_" + var_4546_string) + "_stat.xml"));
			var_4567_object = GlobalVars[7];
			var_4567_object->set(var_4541_int, var_4542_object);
			var_4542_object = null;
		}
		}
	Label_8567:
		var_4541_int += 1;
	}
	
}
EMIT "Stack[-8] = 0";


// @pe
void func_9553(int var_5530_int, float var_5531_float)
{
	float var_5535_float;
	var_5531_float = var_5535_float;
	int var_5532_int;
	func_12163(var_5532_int, 530560, 530559, var_5535_float);
	var_5532_int = var_5530_int;
}


void func_342(bool var_491_bool, int var_492_int)
{
	int var_496_int;
	var_492_int = var_496_int;
	string var_495_string;
	func_242(var_495_string, var_496_int);
	int var_494_int;
	@GetVariable(var_495_string, var_494_int);
	var_491_bool = (var_494_int & 3) == 0;
}


// @pe
void func_9562(int var_5541_int, float var_5542_float)
{
	float var_5546_float;
	var_5542_float = var_5546_float;
	int var_5543_int;
	func_12163(var_5543_int, 530562, 530561, var_5546_float);
	var_5543_int = var_5541_int;
}


// @pe
void func_6495(int var_1674_int, int var_1675_int, object var_1676_object, object var_1677_object, object var_1678_object, object var_1679_object)
{
	if(var_1675_int == 0) {
		func_738(11, false);
		func_755(11, false, 1);
		int var_1687_int; int var_1688_int; object var_1689_object; object var_1690_object; object var_1691_object;
		var_1687_int = 11;
		var_1674_int = var_1688_int;
		var_1676_object = var_1689_object;
		var_1677_object = var_1690_object;
		var_1678_object = var_1691_object;
		func_564(var_1688_int, var_1689_object, var_1690_object, var_1691_object);
		object var_1692_object;
		var_1679_object = var_1692_object;
		func_248(var_1692_object, 0);
		func_812(11, false, 5);
		func_874(11, false, 5);
	}
	int var_1701_int;
	var_1675_int = var_1701_int;
	func_925(11, var_1701_int);
	int var_1703_int; int var_1704_int;
	var_1674_int = var_1703_int;
	var_1675_int = var_1704_int;
	func_1549(11, var_1703_int, var_1704_int);
}


void func_354(int var_81_int)
{
	int var_87_int;
	var_81_int = var_87_int;
	string var_86_string;
	func_242(var_86_string, var_87_int);
	int var_84_int;
	@GetVariable(var_86_string, var_84_int);
	string var_91_string; int var_92_int;
	var_81_int = var_92_int;
	func_242(var_91_string, var_92_int);
	@SetVariable(var_91_string, ((var_84_int & 252) | 0));
}


// @pe
void func_9571(int var_5552_int, float var_5553_float)
{
	float var_5557_float;
	var_5553_float = var_5557_float;
	int var_5554_int;
	func_12163(var_5554_int, 530564, 530563, var_5557_float);
	var_5554_int = var_5552_int;
}


// @pe
void func_11623(bool var_4813_bool)
{
	int var_4816_int;
	func_105(var_4816_int, "d1q01");
	if(var_4816_int == 1000)
		var_4813_bool = true;
	var_4813_bool = false;
}


// @pe
void func_9580(int var_5563_int, float var_5564_float)
{
	float var_5568_float;
	var_5564_float = var_5568_float;
	int var_5565_int;
	func_12163(var_5565_int, 530566, 530565, var_5568_float);
	var_5565_int = var_5563_int;
}


// @pe
void func_4462(int var_3196_int, int var_3197_int, object var_3198_object, object var_3199_object, object var_3200_object, object var_3201_object)
{
	if(var_3197_int == 0) {
		func_738(0, false);
		func_755(0, false, 1);
		int var_3210_int; object var_3211_object; object var_3212_object; object var_3213_object;
		var_3196_int = var_3210_int;
		var_3198_object = var_3211_object;
		var_3199_object = var_3212_object;
		var_3200_object = var_3213_object;
		func_662(0, var_3210_int, var_3211_object, var_3212_object, var_3213_object);
		object var_3248_object;
		var_3201_object = var_3248_object;
		func_248(var_3248_object, 2);
		func_812(0, false, 4);
		func_874(0, true, 4);
	}
	func_721(0, false);
	int var_3259_int; int var_3260_int;
	var_3196_int = var_3259_int;
	var_3197_int = var_3260_int;
	func_4006(0, var_3259_int, var_3260_int);
}


void func_3442(int var_4167_int, int var_4168_int, int var_4169_int)
{
	int var_4174_int; int var_4175_int; int var_4176_int; int var_4177_int;
	bool var_4178_bool = false;
	if(var_4169_int > 8) {
		if(var_4169_int < 21)
			var_4178_bool = true;
	}
	if(var_4178_bool != 0) {
		int var_4183_int;
		var_4167_int = var_4183_int;
		func_445(var_4183_int, "pers_rat", "rat.xml", 3);
		int var_4187_int;
		var_4167_int = var_4187_int;
		func_445(var_4187_int, "pers_alkash", "alkash.xml", 2);
		int var_4191_int;
		var_4167_int = var_4191_int;
		func_445(var_4191_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_4196_float; int var_4197_int;
		func_1076(var_4196_float, var_4197_int);
		if((2 * var_4196_float) != 0) {
			int var_4199_int; int var_4202_int;
			var_4167_int = var_4199_int;
			var_4174_int = var_4202_int;
			func_445(var_4199_int, "pers_grabitel", "grabitel.xml", var_4202_int);
		}
		if((var_4197_int + 1) >= 2) {
			int var_4207_int;
			var_4167_int = var_4207_int;
			func_445(var_4207_int, "pers_patrool", "patrol.xml", 2);
			bool var_4211_bool; int var_4212_int;
			var_4168_int = var_4212_int;
			func_1283(var_4211_bool, var_4212_int);
			if(var_4211_bool != 0) {
				int var_4213_int;
				var_4167_int = var_4213_int;
				func_445(var_4213_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_4218_float; int var_4219_int;
		func_1166(var_4218_float, var_4219_int);
		if((1 * var_4218_float) != 0) {
			int var_4221_int; int var_4224_int;
			var_4167_int = var_4221_int;
			var_4175_int = var_4224_int;
			func_445(var_4221_int, "pers_bomber", "bomber.xml", var_4224_int);
		}
	} else {
		int var_4238_int;
		var_4167_int = var_4238_int;
		func_445(var_4238_int, "pers_rat", "rat.xml", 5);
		int var_4242_int;
		var_4167_int = var_4242_int;
		func_445(var_4242_int, "pers_alkash", "alkash.xml", 1);
		if((var_4219_int + 1) >= 2) {
			int var_4250_int;
			var_4167_int = var_4250_int;
			func_445(var_4250_int, "pers_patrool", "patrol.xml", 1);
			bool var_4254_bool; int var_4255_int;
			var_4168_int = var_4255_int;
			func_1283(var_4254_bool, var_4255_int);
			if(var_4254_bool != 0) {
				int var_4256_int;
				var_4167_int = var_4256_int;
				func_445(var_4256_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		int var_4260_int;
		var_4167_int = var_4260_int;
		func_445(var_4260_int, "pers_rat", "rat.xml", 2);
		float var_4265_float; int var_4266_int;
		var_4168_int = var_4266_int;
		func_1076(var_4265_float, var_4266_int);
		if((3 * var_4265_float) != 0) {
			int var_4268_int; int var_4271_int;
			var_4167_int = var_4268_int;
			var_4176_int = var_4271_int;
			func_445(var_4268_int, "pers_grabitel", "grabitel.xml", var_4271_int);
		}
		float var_4273_float; int var_4274_int;
		var_4168_int = var_4274_int;
		func_1166(var_4273_float, var_4274_int);
		if((1 * var_4273_float) == 0) goto Label_3604;
		int var_4276_int; int var_4279_int;
		var_4167_int = var_4276_int;
		var_4177_int = var_4279_int;
		func_445(var_4276_int, "pers_bomber", "bomber.xml", var_4279_int);
	}
Label_3604:
	bool var_4225_bool; int var_4226_int; int var_4227_int;
	var_4168_int = var_4226_int;
	var_4169_int = var_4227_int;
	func_1256(var_4225_bool, var_4226_int, var_4227_int);
	if(var_4225_bool != 0) {
		int var_4228_int;
		var_4167_int = var_4228_int;
		func_445(var_4228_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_4232_bool; int var_4233_int;
	var_4168_int = var_4233_int;
	func_1283(var_4232_bool, var_4233_int);
	if(var_4232_bool != 0) {
		int var_4234_int;
		var_4167_int = var_4234_int;
		func_445(var_4234_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_11635(bool var_4779_bool)
{
	int var_4782_int;
	func_105(var_4782_int, "d1q01");
	if(var_4782_int == 0) {
		var_4779_bool = true;
		return 0;
	}
	var_4779_bool = false;
}


void func_372(bool var_1989_bool, int var_1990_int)
{
	int var_1994_int;
	var_1990_int = var_1994_int;
	string var_1993_string;
	func_242(var_1993_string, var_1994_int);
	int var_1992_int;
	@GetVariable(var_1993_string, var_1992_int);
	var_1989_bool = (var_1992_int & 3) == 1;
}


// @pe
void func_9589(int var_5574_int, float var_5575_float)
{
	float var_5579_float;
	var_5575_float = var_5579_float;
	int var_5576_int;
	func_12163(var_5576_int, 530568, 530567, var_5579_float);
	var_5576_int = var_5574_int;
}


void func_8572(void)
{
	object var_4385_object;
	@GetMainOutdoorScene(var_4385_object);
	object var_4386_object;
	@AddScriptedActor(var_4386_object, "big_gun", "big_gun.bin", var_4385_object, [0.0, 0.0, 0.0]);
	@AddScriptedActor(var_4386_object, "vagon_martira", "big_gun.bin", var_4385_object, [0.0, 0.0, 0.0]);
	@AddScriptedActor(var_4386_object, "d9q01_trigger_wagon", "quest_d9_01_wagon.bin", var_4385_object, [0.0, 0.0, 0.0]);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5500(int var_2629_int, int var_2630_int, object var_2631_object, object var_2632_object, object var_2633_object, object var_2634_object)
{
	if(var_2630_int == 0) {
		func_738(5, true);
		func_755(5, true, 1);
		int var_2643_int; object var_2644_object; object var_2645_object; object var_2646_object;
		var_2629_int = var_2643_int;
		var_2631_object = var_2644_object;
		var_2632_object = var_2645_object;
		var_2633_object = var_2646_object;
		func_583(5, var_2643_int, var_2644_object, var_2645_object, var_2646_object);
		object var_2647_object;
		var_2634_object = var_2647_object;
		func_248(var_2647_object, 1);
		func_812(5, true, 4);
		func_874(5, false, 4);
	}
	func_721(5, false);
	int var_2658_int; int var_2659_int;
	var_2629_int = var_2658_int;
	var_2630_int = var_2659_int;
	func_2915(5, var_2658_int, var_2659_int);
}


// @pe
void func_9598(int var_6075_int, float var_6076_float)
{
	float var_6080_float;
	var_6076_float = var_6080_float;
	int var_6077_int;
	func_12163(var_6077_int, 536379, 536378, var_6080_float);
	var_6077_int = var_6075_int;
}


// @pe
void func_11647(bool var_5891_bool)
{
	int var_5894_int;
	func_105(var_5894_int, "resque_list");
	if(var_5894_int != 0) {
		var_5891_bool = true;
		return 0;
	}
	var_5891_bool = false;
}


void func_384(int var_24_int)
{
	int var_30_int;
	var_24_int = var_30_int;
	string var_29_string;
	func_242(var_29_string, var_30_int);
	int var_27_int;
	@GetVariable(var_29_string, var_27_int);
	string var_37_string; int var_38_int;
	var_24_int = var_38_int;
	func_242(var_37_string, var_38_int);
	@SetVariable(var_37_string, ((var_27_int & 252) | 1));
}


// @pe
void func_9607(int var_5799_int, float var_5800_float)
{
	float var_5804_float;
	var_5800_float = var_5804_float;
	int var_5801_int;
	func_12163(var_5801_int, 522212, 522211, var_5804_float);
	var_5801_int = var_5799_int;
}


// @pe
void func_11659(bool var_5631_bool)
{
	int var_5634_int;
	func_105(var_5634_int, "d2EvaVisit");
	if(var_5634_int != 0) {
		var_5631_bool = true;
		return 0;
	}
	var_5631_bool = false;
}


// @pe
void func_9616(int var_5823_int, float var_5824_float)
{
	float var_5828_float;
	var_5824_float = var_5828_float;
	int var_5825_int;
	func_12163(var_5825_int, 534077, 534076, var_5828_float);
	var_5825_int = var_5823_int;
}


void func_8593(bool var_2_bool, int var_3_int)
{
	int var_11_int; int var_12_int; int var_13_int; float var_14_float; int var_15_int; int var_16_int;
	bool var_17_bool = false;
	if(var_3_int > 16384) {
		if(var_3_int < 16396)
			var_17_bool = true;
	}
	if(var_17_bool != 0) {
		var_11_int = var_3_int - 16384;
		int var_23_int;
		var_11_int = var_23_int;
		func_14215(var_23_int);
		var_2_bool = true;
		return 12;
	}
	bool var_208_bool = false;
	if(var_3_int > 32768) {
		if(var_3_int < 33056)
			var_208_bool = true;
	}
	if(var_208_bool != 0) {
		var_12_int = (var_3_int - 32768) / 24;
		var_13_int = (var_3_int - 32768) % 24;
		@GetGameTime(var_14_float);
		var_15_int = var_14_float / 24;
		var_14_float = var_16_int;
		var_16_int = var_16_int % 24;
		int var_221_int; int var_222_int; int var_223_int; int var_224_int;
		var_12_int = var_221_int;
		var_13_int = var_222_int;
		var_15_int = var_223_int;
		var_16_int = var_224_int;
		func_8731(var_221_int, var_222_int, var_223_int, var_224_int);
		var_2_bool = true;
		return 12;
	}
	var_2_bool = false;
}


void func_402(bool var_72_bool, int var_73_int)
{
	int var_77_int;
	var_73_int = var_77_int;
	string var_76_string;
	func_242(var_76_string, var_77_int);
	int var_75_int;
	@GetVariable(var_76_string, var_75_int);
	var_72_bool = (var_75_int & 3) == 2;
}


// @pe
void func_6547(int var_2910_int, int var_2911_int, object var_2912_object, object var_2913_object, object var_2914_object, object var_2915_object)
{
	if(var_2911_int == 0) {
		func_738(11, false);
		func_755(11, true, 1);
		int var_2924_int; object var_2925_object; object var_2926_object; object var_2927_object;
		var_2910_int = var_2924_int;
		var_2912_object = var_2925_object;
		var_2913_object = var_2926_object;
		var_2914_object = var_2927_object;
		func_583(11, var_2924_int, var_2925_object, var_2926_object, var_2927_object);
		object var_2928_object;
		var_2915_object = var_2928_object;
		func_248(var_2928_object, 1);
		func_812(11, true, 5);
		func_874(11, false, 5);
	}
	func_721(11, false);
	int var_2939_int; int var_2940_int;
	var_2910_int = var_2939_int;
	var_2911_int = var_2940_int;
	func_2735(11, var_2939_int, var_2940_int);
}


void func_7573(int var_10_int)
{
	object var_27_object;
	var_28_object = GlobalVars[14];
	int var_20_int;
	var_28_object->size(var_20_int);
	bool var_29_bool = true;
	var_30_bool = var_10_int >= var_20_int;
	if(var_30_bool != 1) {
		var_32_bool = var_10_int == -1;
		if(var_32_bool != 1)
			var_29_bool = false;
	}
	if(var_29_bool != 0) {
		@Trace("Wrong bonfire index " + var_10_int);
		return 16;
	}
	var_35_object = GlobalVars[14];
	object var_21_object;
	var_35_object->get(var_21_object, var_10_int);
	object var_22_object;
	@FindActor(var_22_object, ("bonfire_light" + (var_10_int + 1)));
	if(!var_22_object) //@nz
		@Trace(("Bofire  light " + (var_10_int + 1)) + " not found");
	else
		var_22_object->Switch(true);
	object var_23_object;
	@GetMainOutdoorScene(var_23_object);
	cvector var_24_cvector;
	cvector var_25_cvector;
	bool var_26_bool;
	var_23_object->GetLocator(("pt_bonfire" + (var_10_int + 1)), var_26_bool, var_24_cvector, var_25_cvector);
	if(!var_26_bool) { //@nz
		@Trace("Locator for bonfire doesn't exist");
		return 16;
	}
	if(!var_21_object) { //@nz
		@AddActorByType(var_27_object, "scripted", var_23_object, var_24_cvector, var_25_cvector, "bonfire_big.xml");
		var_56_object = GlobalVars[14];
		var_56_object->set(var_10_int, var_27_object);
		var_27_object = null;
	}
	@Trace(("Setting bonfire " + (var_10_int + 1)) + "... ok");
	
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-6] = 0";
EMIT "Stack[-7] = 0";


// @pe
void func_11671(bool var_5615_bool)
{
	int var_5618_int;
	func_105(var_5618_int, "d2LaraVisit");
	if(var_5618_int != 0) {
		var_5615_bool = true;
		return 0;
	}
	var_5615_bool = false;
}


// @pe
void func_9625(int var_5851_int, float var_5852_float)
{
	float var_5856_float;
	var_5852_float = var_5856_float;
	int var_5853_int;
	func_12163(var_5853_int, 534163, 534162, var_5856_float);
	var_5853_int = var_5851_int;
}


void func_414(int var_76_int)
{
	int var_82_int;
	var_76_int = var_82_int;
	string var_81_string;
	func_242(var_81_string, var_82_int);
	int var_79_int;
	@GetVariable(var_81_string, var_79_int);
	string var_86_string; int var_87_int;
	var_76_int = var_87_int;
	func_242(var_86_string, var_87_int);
	@SetVariable(var_86_string, ((var_79_int & 252) | 2));
}


// @pe
void func_4514(object var_64_object)
{
	var_64_object->add("dt_house3_05_i2");
	var_64_object->add("dt_house3_05");
	var_64_object->add("dt_house3_06_i2");
	var_64_object->add("dt_house_1_10");
	var_64_object->add("house5_10");
	var_64_object->add("house5_07");
	var_64_object->add("dt_house_1_03");
	var_64_object->add("dt_house1_union2_04l");
	var_64_object->add("dt_house1_union2_04r");
	var_64_object->add("house5_22");
	var_64_object->add("house5_08");
	var_64_object->add("dt_house1_union2_02l");
	var_64_object->add("dt_house1_union2_02r");
}


// @pe
void func_9634(int var_5585_int, float var_5586_float)
{
	float var_5590_float;
	var_5586_float = var_5590_float;
	int var_5587_int;
	func_12163(var_5587_int, 530570, 530569, var_5590_float);
	var_5587_int = var_5585_int;
}


void func_10660(void)
{
	object var_4667_object;
	func_12171(var_4667_object);
	object var_4665_object;
	var_4667_object = var_4665_object;
	object var_4666_object;
	var_4665_object->FindMark(var_4666_object, "d2q01AlexandrGotoAnna");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q01AlexandrGotoBigVlad");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q01AlexandrGotoGeorg");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q01AnnaGotoKapella");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q01KapellaGotoSpi4ka");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q01WomanDGotoAlexandr");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q02AndreiGotoGrif");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q02AndreiGotoPetr");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q02EvaGotoAndrei");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q02EvaGotoMaria");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q02MariaGotoPetr");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q02PetrGotoAndrei");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q03BirdmaskGotoLara");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q03LaraGotoJulia");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q03LaraGotoMaria");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q03LaraGotoMladVlad");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q03LaraGotoMoneyFoodSelf");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	var_4665_object->FindMark(var_4666_object, "d2q03LaraGotoSklad");
	if(var_4666_object != 0)
		var_4666_object->Remove();
	bool var_4704_bool;
	func_12146(var_4704_bool, 10);
	bool var_4706_bool;
	func_12146(var_4706_bool, 11);
	bool var_4708_bool;
	func_12146(var_4708_bool, 12);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_11683(bool var_5647_bool)
{
	int var_5650_int;
	func_105(var_5650_int, "d4MladVladVisit");
	if(var_5650_int != 0) {
		var_5647_bool = true;
		return 0;
	}
	var_5647_bool = false;
}


// @pe
void func_9643(int var_5470_int, float var_5471_float)
{
	float var_5475_float;
	var_5471_float = var_5475_float;
	int var_5472_int;
	func_12163(var_5472_int, 515484, 515483, var_5475_float);
	var_5472_int = var_5470_int;
}


// @pe
void func_11695(bool var_5663_bool)
{
	int var_5666_int;
	func_105(var_5666_int, "d4AlexandrVisit");
	if(var_5666_int != 0) {
		var_5663_bool = true;
		return 0;
	}
	var_5663_bool = false;
}


void func_432(int var_486_int)
{
	object var_488_object;
	@GetMainOutdoorScene(var_488_object);
	if(var_488_object == null)
		@Trace("City manager: main outdoor scene not found");
	var_488_object->RemoveAllRegionActors(var_486_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5552(int var_3755_int, int var_3756_int, object var_3757_object, object var_3758_object, object var_3759_object, object var_3760_object)
{
	if(var_3756_int == 0) {
		func_738(5, false);
		func_755(5, false, 1);
		int var_3769_int; object var_3770_object; object var_3771_object; object var_3772_object;
		var_3755_int = var_3769_int;
		var_3757_object = var_3770_object;
		var_3758_object = var_3771_object;
		var_3759_object = var_3772_object;
		func_662(5, var_3769_int, var_3770_object, var_3771_object, var_3772_object);
		object var_3773_object;
		var_3760_object = var_3773_object;
		func_248(var_3773_object, 2);
		func_812(5, false, 4);
		func_874(5, true, 4);
	}
	func_721(5, false);
	int var_3784_int; int var_3785_int;
	var_3755_int = var_3784_int;
	var_3756_int = var_3785_int;
	func_3818(5, var_3784_int, var_3785_int);
}


// @pe
void func_9652(int var_5807_int, float var_5808_float)
{
	float var_5812_float;
	var_5808_float = var_5812_float;
	int var_5809_int;
	func_12163(var_5809_int, 522214, 522213, var_5812_float);
	var_5809_int = var_5807_int;
}


// @pe
void func_11707(bool var_5679_bool)
{
	int var_5682_int;
	func_105(var_5682_int, "d5AnnaVisit");
	if(var_5682_int != 0) {
		var_5679_bool = true;
		return 0;
	}
	var_5679_bool = false;
}


void func_445(int var_782_int, string var_783_string, string var_784_string, int var_785_int)
{
	object var_787_object;
	@GetMainOutdoorScene(var_787_object);
	if(var_787_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_787_object->SetRegionActorCount(var_782_int, var_783_string, var_784_string, var_785_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9661(int var_5244_int, float var_5245_float)
{
	float var_5249_float;
	var_5245_float = var_5249_float;
	int var_5246_int;
	func_12163(var_5246_int, 514529, 514528, var_5249_float);
	var_5246_int = var_5244_int;
}


// @pe
void func_9670(int var_5222_int, float var_5223_float)
{
	float var_5227_float;
	var_5223_float = var_5227_float;
	int var_5224_int;
	func_12163(var_5224_int, 514531, 514530, var_5227_float);
	var_5224_int = var_5222_int;
}


// @pe
void func_6599(int var_4040_int, int var_4041_int, object var_4042_object, object var_4043_object, object var_4044_object, object var_4045_object)
{
	if(var_4041_int == 0) {
		func_738(11, true);
		func_755(11, false, 1);
		int var_4054_int; object var_4055_object; object var_4056_object; object var_4057_object;
		var_4040_int = var_4054_int;
		var_4042_object = var_4055_object;
		var_4043_object = var_4056_object;
		var_4044_object = var_4057_object;
		func_662(11, var_4054_int, var_4055_object, var_4056_object, var_4057_object);
		object var_4058_object;
		var_4045_object = var_4058_object;
		func_248(var_4058_object, 2);
		func_812(11, false, 5);
		func_874(11, true, 5);
	}
	func_721(11, false);
	int var_4069_int; int var_4070_int;
	var_4040_int = var_4069_int;
	var_4041_int = var_4070_int;
	func_3630(11, var_4069_int, var_4070_int);
}


void func_8648(void)
{
	float var_423_float; int var_425_int; float var_426_float; int var_427_int; object var_428_object; object var_429_object;
	@GetGameTime(var_423_float);
	int var_424_int = 1;
	
	while(var_424_int < 12) {
		@SetTimeEvent((16384 + var_424_int), (24 * var_424_int));
		var_424_int += 1;
	}
	
	
	for(;;) {
		if(0 < 288) {
			var_425_int = var_426_float;
			if(var_426_float < var_423_float) {
			} else {
			@SetTimeEvent((32768 + var_425_int), var_426_float);
		}

		while(0 < 16) {
			string var_445_string; int var_446_int;
			var_427_int = var_446_int;
			func_242(var_445_string, var_446_int);
			@SetVariable(var_445_string, 0);
			int var_451_int;
			var_427_int = var_451_int;
			func_738(var_451_int, false);
			var_427_int += 1;
		}

		int var_464_int; int var_466_int;
		var_464_int = var_423_float % 24;
		var_466_int = var_423_float % 24;
		func_8731(0, var_464_int, 0, var_466_int);
		@FindActor(var_428_object, "dt_house_1_07");
		var_428_object->EnableSubset(200, false);
		@GetMainOutdoorScene(var_429_object);
		bool var_4402_bool = true;
		var_4404_bool = var_423_float < 7;
		if(var_4404_bool != 1) {
			var_4406_bool = var_423_float >= 20;
			if(var_4406_bool != 1)
				var_4402_bool = false;
		}
		var_429_object->SwitchLights(0, var_4402_bool);
		}
		var_425_int += 1;
	}
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_11719(bool var_5703_bool)
{
	int var_5706_int;
	func_105(var_5706_int, "d8MladVladVisit");
	if(var_5706_int != 0) {
		var_5703_bool = true;
		return 0;
	}
	var_5703_bool = false;
}


void func_458(int var_2225_int, string var_2226_string, string var_2227_string, int var_2228_int, int var_2229_int, int var_2230_int)
{
	object var_2232_object;
	@GetMainOutdoorScene(var_2232_object);
	if(var_2232_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_2232_object->SetRegionActorCount(var_2225_int, var_2226_string, var_2227_string, var_2228_int, var_2229_int, var_2230_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4555(int var_877_int, int var_878_int, object var_879_object, object var_880_object, object var_881_object, object var_882_object)
{
	if(var_878_int == 0) {
		func_738(1, false);
		func_755(1, false, 1);
		int var_890_int; int var_891_int; object var_892_object; object var_893_object; object var_894_object;
		var_890_int = 1;
		var_877_int = var_891_int;
		var_879_object = var_892_object;
		var_880_object = var_893_object;
		var_881_object = var_894_object;
		func_564(var_891_int, var_892_object, var_893_object, var_894_object);
		object var_895_object;
		var_882_object = var_895_object;
		func_248(var_895_object, 0);
		func_812(1, false, 8);
		func_874(1, false, 8);
	}
	int var_904_int;
	var_878_int = var_904_int;
	func_992(1, var_904_int);
	int var_906_int; int var_907_int;
	var_877_int = var_906_int;
	var_878_int = var_907_int;
	func_2340(1, var_906_int, var_907_int);
}


// @pe
void func_9679(int var_6115_int, float var_6116_float)
{
	float var_6120_float;
	var_6116_float = var_6120_float;
	int var_6117_int;
	func_12163(var_6117_int, 538404, 538403, var_6120_float);
	var_6117_int = var_6115_int;
}


// @pe
void func_11731(bool var_6011_bool)
{
	int var_6014_int;
	func_105(var_6014_int, "d9q03");
	if(var_6014_int == 1000)
		var_6011_bool = true;
	var_6011_bool = false;
}


void func_471(int var_2152_int, string var_2153_string, string var_2154_string, int var_2155_int)
{
	object var_2157_object;
	@GetMainOutdoorScene(var_2157_object);
	if(var_2157_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_2157_object->SetRegionActorCountByType(var_2152_int, var_2153_string, var_2154_string, var_2155_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9688(int var_5596_int, float var_5597_float)
{
	float var_5601_float;
	var_5597_float = var_5601_float;
	int var_5598_int;
	func_12163(var_5598_int, 530572, 530571, var_5601_float);
	var_5598_int = var_5596_int;
}


// @pe
void func_11743(bool var_5815_bool)
{
	int var_5818_int;
	func_105(var_5818_int, "d10KaterinaVisit");
	if(var_5818_int != 0) {
		var_5815_bool = true;
		return 0;
	}
	var_5815_bool = false;
}


// @pe
void func_9697(int var_5478_int, float var_5479_float)
{
	float var_5483_float;
	var_5479_float = var_5483_float;
	int var_5480_int;
	func_12163(var_5480_int, 515493, 515492, var_5483_float);
	var_5480_int = var_5478_int;
}


void func_7650(int var_378_int)
{
	var_385_object = GlobalVars[14];
	int var_382_int;
	var_385_object->size(var_382_int);
	bool var_386_bool = true;
	var_387_bool = var_378_int >= var_382_int;
	if(var_387_bool != 1) {
		var_389_bool = var_378_int == -1;
		if(var_389_bool != 1)
			var_386_bool = false;
	}
	if(var_386_bool != 0)
		@Trace("Wrong bonfire index " + var_378_int);
	var_392_object = GlobalVars[14];
	object var_383_object;
	var_392_object->get(var_383_object, var_378_int);
	object var_384_object;
	@FindActor(var_384_object, ("bonfire_light" + (var_378_int + 1)));
	if(!var_384_object) //@nz
		@Trace(("Bofire  light " + (var_378_int + 1)) + " not found");
	else
		var_384_object->Switch(false);
	if(var_383_object != 0)
		@RemoveActor(var_383_object);
	var_405_object = GlobalVars[14];
	var_405_object->set(var_378_int, Obj());
	@Trace(("Cleanup bonfire " + (var_378_int + 1)) + "... ok");
	
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_484(int var_570_int, bool var_571_bool)
{
	object var_576_object; bool var_578_bool; object var_579_object;
	@GetMainOutdoorScene(var_576_object);
	object var_577_object;
	var_576_object->GetGroupActors(var_577_object, (101 + var_570_int));
	if(var_577_object != 0) {

		for(;;) {
			var_577_object->Next(var_578_bool, var_579_object);
			if(var_578_bool != 0) {
				bool var_584_bool; object var_585_object;
				var_579_object = var_585_object;
				func_87(var_584_bool, var_585_object, "locked");
				if(var_584_bool != 0)
					var_579_object->SetProperty("locked", var_571_bool);
				else
					@Trace(("Actor \"" + var_579_object) + "\" can't be locked");
			var_579_object = null;
	}
		}
	}
	
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_5604(void)
{
}


// @pe
void func_5606(int var_1378_int)
{
	int var_1384_int;
	var_1378_int = var_1384_int;
	func_992(6, var_1384_int);
}


// @pe
void func_9706(int var_5867_int, float var_5868_float)
{
	float var_5872_float;
	var_5868_float = var_5872_float;
	int var_5869_int;
	func_12163(var_5869_int, 535696, 535695, var_5872_float);
	var_5869_int = var_5867_int;
}


// @pe
void func_11755(bool var_5831_bool)
{
	int var_5834_int;
	func_105(var_5834_int, "d10MarkVisit");
	if(var_5834_int != 0) {
		var_5831_bool = true;
		return 0;
	}
	var_5831_bool = false;
}


// @pe
void func_5613(void)
{
	func_721(6, false);
}


// @pe
void func_9715(int var_5883_int, float var_5884_float)
{
	float var_5888_float;
	var_5884_float = var_5888_float;
	int var_5885_int;
	func_12163(var_5885_int, 535694, 535693, var_5888_float);
	var_5885_int = var_5883_int;
}


// @pe
void func_5620(void)
{
	func_721(6, false);
}


// @pe
void func_11767(bool var_5859_bool)
{
	int var_5862_int;
	func_105(var_5862_int, "d12q01BurahVisit");
	if(var_5862_int != 0) {
		var_5859_bool = true;
		return 0;
	}
	var_5859_bool = false;
}


void func_2555(int var_3037_int, int var_3038_int, int var_3039_int)
{
	int var_3042_int; int var_3043_int;
	bool var_3044_bool = false;
	if(var_3039_int > 8) {
		if(var_3039_int < 21)
			var_3044_bool = true;
	}
	if(var_3044_bool != 0) {
		int var_3049_int;
		var_3037_int = var_3049_int;
		func_445(var_3049_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_3053_int;
		var_3037_int = var_3053_int;
		func_445(var_3053_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		int var_3057_int;
		var_3037_int = var_3057_int;
		func_445(var_3057_int, "pers_rat_big", "rat_big.xml", 3);
		int var_3061_int;
		var_3037_int = var_3061_int;
		func_471(var_3061_int, "fog", "fog.xml", 8);
		if(var_3038_int >= 5) {
			int var_3067_int;
			var_3037_int = var_3067_int;
			func_471(var_3067_int, "fog", "fog_hunter.xml", 3);
		}
		float var_3072_float; int var_3073_int;
		func_1166(var_3072_float, var_3073_int);
		if((1 * var_3072_float) != 0) {
			int var_3075_int; int var_3078_int;
			var_3037_int = var_3075_int;
			var_3042_int = var_3078_int;
			func_445(var_3075_int, "pers_bomber", "bomber.xml", var_3078_int);
		}
	} else {
		int var_3116_int;
		var_3037_int = var_3116_int;
		func_445(var_3116_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_3120_int;
		var_3037_int = var_3120_int;
		func_445(var_3120_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_3124_int;
		var_3037_int = var_3124_int;
		func_445(var_3124_int, "pers_rat_big", "rat_big.xml", 4);
		int var_3128_int;
		var_3037_int = var_3128_int;
		func_471(var_3128_int, "fog", "fog.xml", 6);
		if(var_3073_int >= 5) {
			int var_3134_int;
			var_3037_int = var_3134_int;
			func_471(var_3134_int, "fog", "fog_hunter.xml", 2);
		}
		float var_3139_float; int var_3140_int;
		var_3038_int = var_3140_int;
		func_1166(var_3139_float, var_3140_int);
		if((1 * var_3139_float) == 0) goto Label_2673;
		int var_3142_int; int var_3145_int;
		var_3037_int = var_3142_int;
		var_3043_int = var_3145_int;
		func_445(var_3142_int, "pers_bomber", "bomber.xml", var_3145_int);
	}
Label_2673:
	int var_3079_int;
	var_3037_int = var_3079_int;
	func_458(var_3079_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_3085_int;
	var_3037_int = var_3085_int;
	func_458(var_3085_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_3091_int;
	var_3037_int = var_3091_int;
	func_458(var_3091_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_3097_int;
	var_3037_int = var_3097_int;
	func_458(var_3097_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_3103_bool; int var_3104_int; int var_3105_int;
	var_3038_int = var_3104_int;
	var_3039_int = var_3105_int;
	func_1256(var_3103_bool, var_3104_int, var_3105_int);
	if(var_3103_bool != 0) {
		int var_3106_int;
		var_3037_int = var_3106_int;
		func_445(var_3106_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3110_bool; int var_3111_int;
	var_3038_int = var_3111_int;
	func_1283(var_3110_bool, var_3111_int);
	if(var_3110_bool != 0) {
		int var_3112_int;
		var_3037_int = var_3112_int;
		func_445(var_3112_int, "pers_sanitar", "sanitar.xml", 2);
	}
	
}


// @pe
void func_6651(object var_264_object)
{
	var_264_object->add("r6_house2_03");
	var_264_object->add("r6_house4_01_i2");
	var_264_object->add("r6_house4_02_i2");
	var_264_object->add("r6_house4_02");
	var_264_object->add("r6_house3_02_i2");
	var_264_object->add("r6_house3_02");
	var_264_object->add("r6_house3_01_i2");
	var_264_object->add("r6_house3_01");
	var_264_object->add("r6_house2_01");
	var_264_object->add("r6_house7_01");
	var_264_object->add("r6_house7_02");
	var_264_object->add("r6_House6_01");
	var_264_object->add("r6_house2_02");
}


// @pe
void func_5627(object var_176_object)
{
	var_176_object->add("House6_02");
	var_176_object->add("House6_01");
	var_176_object->add("house_2_01");
	var_176_object->add("house7_03");
	var_176_object->add("house7_02");
	var_176_object->add("house3_01_i2");
	var_176_object->add("house3_01");
	var_176_object->add("house_2_03");
	var_176_object->add("house_2_02");
	var_176_object->add("house4_01_i2");
	var_176_object->add("house4_01");
	var_176_object->add("House6_05");
	var_176_object->add("House6_04");
	var_176_object->add("House6_03");
}


// @pe
void func_9724(int var_5607_int, float var_5608_float)
{
	float var_5612_float;
	var_5608_float = var_5612_float;
	int var_5609_int;
	func_12163(var_5609_int, 530574, 530573, var_5612_float);
	var_5609_int = var_5607_int;
}


// @pe
void func_4607(int var_2285_int, int var_2286_int, object var_2287_object, object var_2288_object, object var_2289_object, object var_2290_object)
{
	if(var_2286_int == 0) {
		func_738(1, true);
		func_755(1, true, 1);
		int var_2299_int; object var_2300_object; object var_2301_object; object var_2302_object;
		var_2285_int = var_2299_int;
		var_2287_object = var_2300_object;
		var_2288_object = var_2301_object;
		var_2289_object = var_2302_object;
		func_583(1, var_2299_int, var_2300_object, var_2301_object, var_2302_object);
		object var_2303_object;
		var_2290_object = var_2303_object;
		func_248(var_2303_object, 1);
		func_812(1, true, 8);
		func_874(1, false, 8);
	}
	func_721(1, false);
	int var_2314_int; int var_2315_int;
	var_2285_int = var_2314_int;
	var_2286_int = var_2315_int;
	func_3275(1, var_2314_int, var_2315_int);
}


// @pe
void func_11779(bool var_5942_bool)
{
	int var_5945_int;
	func_105(var_5945_int, "d4ViktorVisit");
	if(var_5945_int != 0) {
		var_5942_bool = true;
		return 0;
	}
	var_5942_bool = false;
}


// @pe
void func_9733(int var_4631_int, float var_4632_float)
{
	float var_4636_float;
	var_4632_float = var_4636_float;
	int var_4633_int;
	func_12163(var_4633_int, 501160, 501159, var_4636_float);
	var_4633_int = var_4631_int;
}


void func_518(string var_2040_string, object var_2041_object, string var_2042_string, string var_2043_string)
{
	object var_2055_object; bool var_2057_bool; cvector var_2058_cvector; cvector var_2059_cvector; object var_2060_object;
	@GetMainOutdoorScene(var_2055_object);
	int var_2056_int = 0;
	
	for(;;) {
		var_2055_object->GetLocator((var_2040_string + (var_2056_int + 1)), var_2057_bool, var_2058_cvector, var_2059_cvector);
		if(!var_2057_bool) //@nz
			break;
		var_2055_object->AddStationaryActor(var_2060_object, var_2058_cvector, var_2059_cvector, var_2042_string, var_2043_string);
		var_2041_object->add(var_2060_object);
		var_2060_object = null;
		var_2056_int += 1;
	}
}
EMIT "Stack[-6] = 0";


void func_1549(int var_1415_int, int var_1416_int, int var_1417_int)
{
	int var_1419_int;
	if((var_1416_int + 1) == 12)
		return 2;
	bool var_1424_bool = false;
	bool var_1425_bool = true;
	var_1427_bool = var_1417_int < 7;
	if(var_1427_bool != 1) {
		var_1429_bool = var_1417_int > 21;
		if(var_1429_bool != 1)
			var_1425_bool = false;
	}
	if(var_1425_bool != 0) {
		if(var_1416_int != 0)
			var_1424_bool = true;
	}
	if(var_1424_bool != 0) {
		float var_1433_float; int var_1434_int;
		var_1416_int = var_1434_int;
		func_1052(var_1433_float, var_1434_int);
		if((1 * var_1433_float) != 0) {
			int var_1436_int; int var_1439_int;
			var_1415_int = var_1436_int;
			var_1419_int = var_1439_int;
			func_445(var_1436_int, "pers_grabitel", "grabitel.xml", var_1439_int);
		}
	}
	bool var_1440_bool = false;
	bool var_1441_bool = false;
	if(var_1416_int == 0) {
		if(var_1417_int < 21)
			var_1441_bool = true;
	}
	if(var_1441_bool != 0) {
		int var_1446_int;
		func_12188(var_1446_int);
		if(var_1446_int == 1)
			var_1440_bool = true;
	}
	if(var_1440_bool != 0) {
		int var_1449_int;
		var_1415_int = var_1449_int;
		func_445(var_1449_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1453_int;
		var_1415_int = var_1453_int;
		func_445(var_1453_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1457_int;
		var_1415_int = var_1457_int;
		func_445(var_1457_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1461_int;
		var_1415_int = var_1461_int;
		func_445(var_1461_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1465_int;
		var_1415_int = var_1465_int;
		func_445(var_1465_int, "pers_woman", "woman.xml", 1);
		int var_1469_int;
		var_1415_int = var_1469_int;
		func_445(var_1469_int, "pers_boy", "boy.xml", 1);
		int var_1473_int;
		var_1415_int = var_1473_int;
		func_445(var_1473_int, "pers_girl", "girl.xml", 1);
		int var_1477_int;
		var_1415_int = var_1477_int;
		func_445(var_1477_int, "pers_girl", "girl2.xml", 1);
		int var_1481_int;
		var_1415_int = var_1481_int;
		func_445(var_1481_int, "pers_littleboy", "littleboy.xml", 1);
		int var_1485_int;
		var_1415_int = var_1485_int;
		func_445(var_1485_int, "pers_littlegirl", "littlegirl.xml", 1);
		int var_1489_int;
		var_1415_int = var_1489_int;
		func_445(var_1489_int, "pers_alkash", "alkash.xml", 1);
	} else {
			bool var_1500_bool = false;
			if(var_1417_int > 8) {
				if(var_1417_int < 21)
					var_1500_bool = true;
			}
			if(var_1500_bool == 0) goto Label_1772;
			int var_1505_int;
			var_1415_int = var_1505_int;
			func_445(var_1505_int, "pers_woman", "woman.xml", 1);
			int var_1509_int;
			var_1415_int = var_1509_int;
			func_445(var_1509_int, "pers_unosha", "unosha.xml", 1);
			int var_1513_int;
			var_1415_int = var_1513_int;
			func_445(var_1513_int, "pers_unosha", "unosha2.xml", 1);
			int var_1517_int;
			var_1415_int = var_1517_int;
			func_445(var_1517_int, "pers_boy", "boy.xml", 1);
			int var_1521_int;
			var_1415_int = var_1521_int;
			func_445(var_1521_int, "pers_girl", "girl.xml", 1);
			int var_1525_int;
			var_1415_int = var_1525_int;
			func_445(var_1525_int, "pers_girl", "girl2.xml", 1);
			int var_1529_int;
			var_1415_int = var_1529_int;
			func_445(var_1529_int, "pers_littleboy", "littleboy.xml", 1);
			int var_1533_int;
			var_1415_int = var_1533_int;
			func_445(var_1533_int, "pers_littlegirl", "littlegirl.xml", 1);
			int var_1537_int;
			var_1415_int = var_1537_int;
			func_445(var_1537_int, "pers_alkash", "alkash.xml", 1);
			if((var_1416_int + 1) >= 3) {
				int var_1545_int;
				var_1415_int = var_1545_int;
				func_445(var_1545_int, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
	}
Label_1812:
	for(;;) {
		bool var_1493_bool; int var_1494_int; int var_1495_int;
		var_1416_int = var_1494_int;
		var_1417_int = var_1495_int;
		func_1256(var_1493_bool, var_1494_int, var_1495_int);
		if(var_1493_bool != 0) {
			int var_1496_int;
			var_1415_int = var_1496_int;
			func_445(var_1496_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		return 2;

	}
	
Label_1772:
	int var_1549_int;
	var_1415_int = var_1549_int;
	func_445(var_1549_int, "pers_woman", "woman.xml", 1);
	int var_1553_int;
	var_1415_int = var_1553_int;
	func_445(var_1553_int, "pers_unosha", "unosha.xml", 1);
	int var_1557_int;
	var_1415_int = var_1557_int;
	func_445(var_1557_int, "pers_unosha", "unosha2.xml", 1);
	int var_1561_int;
	var_1415_int = var_1561_int;
	func_445(var_1561_int, "pers_alkash", "alkash.xml", 1);
	if(!((var_1416_int + 1) >= 3)) goto Label_1812;
	int var_1569_int;
	var_1415_int = var_1569_int;
	func_445(var_1569_int, "pers_dohodyaga", "dohodyaga.xml", 1);
}


// @pe
void func_9742(int var_4796_int, float var_4797_float)
{
	float var_4801_float;
	var_4797_float = var_4801_float;
	int var_4798_int;
	func_12163(var_4798_int, 501158, 501157, var_4801_float);
	var_4798_int = var_4796_int;
}


// @pe
void func_11791(bool var_5958_bool)
{
	int var_5961_int;
	func_105(var_5961_int, "d8AglajaVisit");
	if(var_5961_int != 0) {
		var_5958_bool = true;
		return 0;
	}
	var_5958_bool = false;
}


// @pe
void func_9751(int var_4788_int, float var_4789_float)
{
	float var_4793_float;
	var_4789_float = var_4793_float;
	int var_4790_int;
	func_12163(var_4790_int, 501154, 501153, var_4793_float);
	var_4790_int = var_4788_int;
}


void func_8731(int var_463_int, int var_464_int, int var_465_int, int var_466_int)
{
	int var_474_int; object var_475_object; object var_476_object; object var_477_object; object var_478_object;
	@Trace("City update");
	bool var_480_bool = false;
	if(var_463_int == var_465_int) {
		if(var_464_int == var_466_int)
			var_480_bool = true;
	}
	if(var_480_bool != 0)
		@PlaySound("kolokol");
	
	for(;;) {
		if(0 < 16) {
			int var_486_int;
			var_474_int = var_486_int;
			func_432(var_486_int);
			bool var_491_bool; int var_492_int;
			var_474_int = var_492_int;
			func_342(var_491_bool, var_492_int);
			if(var_491_bool != 0) {
				int var_500_int; int var_501_int; int var_502_int;
				var_474_int = var_500_int;
				var_463_int = var_501_int;
				var_464_int = var_502_int;
				func_8851(var_500_int, var_501_int, var_502_int);
			} else {
			bool var_1989_bool; int var_1990_int;
			var_474_int = var_1990_int;
			func_372(var_1989_bool, var_1990_int);
			if(var_1989_bool != 0) {
				int var_1998_int; int var_1999_int; int var_2000_int;
				var_474_int = var_1998_int;
				var_463_int = var_1999_int;
				var_464_int = var_2000_int;
				func_9076(var_1998_int, var_1999_int, var_2000_int);
				goto Label_8784;
			}
			int var_3179_int; int var_3180_int; int var_3181_int;
			var_474_int = var_3179_int;
			var_463_int = var_3180_int;
			var_464_int = var_3181_int;
			func_9301(var_3179_int, var_3180_int, var_3181_int);
		}
		if(var_464_int == 0) {
			int var_4315_int;
			func_14385(var_4315_int);
			bool var_4377_bool = true;
			var_4379_bool = var_4315_int == 1;
			if(var_4379_bool != 1) {
				bool var_4380_bool;
				func_372(var_4380_bool, 5);
				if(var_4380_bool != 1)
					var_4377_bool = false;
			}
			if(var_4377_bool != 0) {
				@FindActor(var_475_object, "dt_house_1_07");
				var_475_object->EnableSubset(200, true);
				var_475_object = null;
			} else {
					@FindActor(var_476_object, "dt_house_1_07");
					var_476_object->EnableSubset(200, false);
					var_476_object = null;
			}
		}
		if(var_464_int == 7) {
			@Trace("day time");
			@GetMainOutdoorScene(var_477_object);
			var_477_object->SwitchLights(0, false);
			var_477_object = null;
		} else if(var_464_int == 20) {
			@Trace("night time");
			@GetMainOutdoorScene(var_478_object);
			var_478_object->SwitchLights(0, true);
			var_478_object = null;

		}
		}
	Label_8784:
		var_474_int += 1;
	}
	
}


void func_540(string var_2066_string, object var_2067_object)
{
	object var_2080_object; bool var_2082_bool; cvector var_2083_cvector; cvector var_2084_cvector; object var_2085_object;
	@GetMainOutdoorScene(var_2080_object);
	int var_2081_int = 0;
	
	for(;;) {
		var_2080_object->GetLocator((var_2066_string + (var_2081_int + 1)), var_2082_bool, var_2083_cvector, var_2084_cvector);
		if(!var_2082_bool) //@nz
			break;
		var_2080_object->AddStationaryActorByType(var_2085_object, var_2083_cvector, var_2084_cvector, "fog", "fog_stat.xml");
		var_2067_object->add(var_2085_object);
		var_2085_object = null;
		var_2081_int += 1;
	}
}
EMIT "Stack[-7] = 0";


// @pe
void func_11803(bool var_6003_bool)
{
	int var_6006_int;
	func_105(var_6006_int, "d9AnnaVisit");
	if(var_6006_int != 0) {
		var_6003_bool = true;
		return 0;
	}
	var_6003_bool = false;
}


void func_7710(object var_4430_object, object var_4431_object, string var_4432_string, string var_4433_string, string var_4434_string)
{
	bool var_4440_bool; cvector var_4441_cvector; cvector var_4442_cvector; object var_4443_object;
	var_4431_object->GetLocator(("pt_guard_" + var_4432_string), var_4440_bool, var_4441_cvector, var_4442_cvector);
	if(!var_4440_bool) //@nz
		@Trace("Locator doesn't exist for guard " + var_4432_string);
	else
		var_4431_object->AddStationaryActor(var_4443_object, var_4441_cvector, var_4442_cvector, var_4433_string, var_4434_string);
	var_4443_object = var_4430_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_9760(int var_4653_int, float var_4654_float)
{
	float var_4658_float;
	var_4654_float = var_4658_float;
	int var_4655_int;
	func_12163(var_4655_int, 501152, 501151, var_4658_float);
	var_4655_int = var_4653_int;
}


// @pe
void func_6692(int var_1707_int, int var_1708_int, object var_1709_object, object var_1710_object, object var_1711_object, object var_1712_object)
{
	if(var_1708_int == 0) {
		func_738(12, false);
		func_755(12, false, 1);
		int var_1720_int; int var_1721_int; object var_1722_object; object var_1723_object; object var_1724_object;
		var_1720_int = 12;
		var_1707_int = var_1721_int;
		var_1709_object = var_1722_object;
		var_1710_object = var_1723_object;
		var_1711_object = var_1724_object;
		func_564(var_1721_int, var_1722_object, var_1723_object, var_1724_object);
		object var_1725_object;
		var_1712_object = var_1725_object;
		func_248(var_1725_object, 0);
		func_812(12, false, 4);
		func_874(12, false, 4);
	}
	int var_1734_int;
	var_1708_int = var_1734_int;
	func_962(12, var_1734_int);
	int var_1736_int; int var_1737_int;
	var_1707_int = var_1736_int;
	var_1708_int = var_1737_int;
	func_1549(12, var_1736_int, var_1737_int);
}


// @pe
void func_5671(int var_1387_int, int var_1388_int, object var_1389_object, object var_1390_object, object var_1391_object, object var_1392_object)
{
	if(var_1388_int == 0) {
		func_738(7, false);
		func_755(7, false, 1);
		int var_1400_int; int var_1401_int; object var_1402_object; object var_1403_object; object var_1404_object;
		var_1400_int = 7;
		var_1387_int = var_1401_int;
		var_1389_object = var_1402_object;
		var_1390_object = var_1403_object;
		var_1391_object = var_1404_object;
		func_564(var_1401_int, var_1402_object, var_1403_object, var_1404_object);
		object var_1405_object;
		var_1392_object = var_1405_object;
		func_248(var_1405_object, 0);
		func_812(7, false, 6);
		func_874(7, false, 6);
	}
	int var_1414_int;
	var_1388_int = var_1414_int;
	func_962(7, var_1414_int);
	int var_1416_int; int var_1417_int;
	var_1387_int = var_1416_int;
	var_1388_int = var_1417_int;
	func_1549(7, var_1416_int, var_1417_int);
}


// @pe
void func_11815(bool var_5974_bool)
{
	int var_5977_int;
	func_105(var_5977_int, "d9LaraVisit");
	if(var_5977_int != 0) {
		var_5974_bool = true;
		return 0;
	}
	var_5974_bool = false;
}


// @pe
void func_9769(int var_4835_int, float var_4836_float)
{
	float var_4840_float;
	var_4836_float = var_4840_float;
	int var_4837_int;
	func_12163(var_4837_int, 501156, 501155, var_4840_float);
	var_4837_int = var_4835_int;
}


void func_3630(int var_3826_int, int var_3827_int, int var_3828_int)
{
	int var_3833_int; int var_3834_int; int var_3835_int; int var_3836_int;
	bool var_3837_bool = false;
	if(var_3828_int > 8) {
		if(var_3828_int < 21)
			var_3837_bool = true;
	}
	if(var_3837_bool != 0) {
		int var_3842_int;
		var_3826_int = var_3842_int;
		func_445(var_3842_int, "pers_rat", "rat.xml", 1);
		int var_3846_int;
		var_3826_int = var_3846_int;
		func_445(var_3846_int, "pers_alkash", "alkash.xml", 2);
		int var_3850_int;
		var_3826_int = var_3850_int;
		func_445(var_3850_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3855_float; int var_3856_int;
		func_1076(var_3855_float, var_3856_int);
		if((2 * var_3855_float) != 0) {
			int var_3858_int; int var_3861_int;
			var_3826_int = var_3858_int;
			var_3833_int = var_3861_int;
			func_445(var_3858_int, "pers_grabitel", "grabitel.xml", var_3861_int);
		}
		if((var_3856_int + 1) >= 2) {
			int var_3866_int;
			var_3826_int = var_3866_int;
			func_445(var_3866_int, "pers_patrool", "patrol.xml", 1);
			bool var_3870_bool; int var_3871_int;
			var_3827_int = var_3871_int;
			func_1283(var_3870_bool, var_3871_int);
			if(var_3870_bool != 0) {
				int var_3872_int;
				var_3826_int = var_3872_int;
				func_445(var_3872_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3877_float; int var_3878_int;
		var_3827_int = var_3878_int;
		func_1166(var_3877_float, var_3878_int);
		if((1 * var_3877_float) != 0) {
			int var_3880_int; int var_3883_int;
			var_3826_int = var_3880_int;
			var_3834_int = var_3883_int;
			func_445(var_3880_int, "pers_bomber", "bomber.xml", var_3883_int);
		}
	} else {
		int var_3897_int;
		var_3826_int = var_3897_int;
		func_445(var_3897_int, "pers_rat", "rat.xml", 3);
		int var_3901_int;
		var_3826_int = var_3901_int;
		func_445(var_3901_int, "pers_alkash", "alkash.xml", 1);
		int var_3905_int;
		var_3826_int = var_3905_int;
		func_445(var_3905_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3910_float; int var_3911_int;
		func_1076(var_3910_float, var_3911_int);
		if((3 * var_3910_float) != 0) {
			int var_3913_int; int var_3916_int;
			var_3826_int = var_3913_int;
			var_3835_int = var_3916_int;
			func_445(var_3913_int, "pers_grabitel", "grabitel.xml", var_3916_int);
		}
		if((var_3911_int + 1) >= 2) {
			int var_3921_int;
			var_3826_int = var_3921_int;
			func_445(var_3921_int, "pers_patrool", "patrol.xml", 1);
			bool var_3925_bool; int var_3926_int;
			var_3827_int = var_3926_int;
			func_1283(var_3925_bool, var_3926_int);
			if(var_3925_bool != 0) {
				int var_3927_int;
				var_3826_int = var_3927_int;
				func_445(var_3927_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3932_float; int var_3933_int;
		var_3827_int = var_3933_int;
		func_1166(var_3932_float, var_3933_int);
		if((1 * var_3932_float) == 0) goto Label_3792;
		int var_3935_int; int var_3938_int;
		var_3826_int = var_3935_int;
		var_3836_int = var_3938_int;
		func_445(var_3935_int, "pers_bomber", "bomber.xml", var_3938_int);
	}
Label_3792:
	bool var_3884_bool; int var_3885_int; int var_3886_int;
	var_3827_int = var_3885_int;
	var_3828_int = var_3886_int;
	func_1256(var_3884_bool, var_3885_int, var_3886_int);
	if(var_3884_bool != 0) {
		int var_3887_int;
		var_3826_int = var_3887_int;
		func_445(var_3887_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3891_bool; int var_3892_int;
	var_3827_int = var_3892_int;
	func_1283(var_3891_bool, var_3892_int);
	if(var_3891_bool != 0) {
		int var_3893_int;
		var_3826_int = var_3893_int;
		func_445(var_3893_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_7727(object var_4427_object, object var_4428_object, int var_4429_int)
{
	object var_4431_object;
	var_4428_object = var_4431_object;
	object var_4430_object;
	func_7710(var_4430_object, var_4431_object, ("term" + var_4429_int), "pers_patrool", "guard_term.xml");
	var_4430_object = var_4427_object;
}


// @pe
void func_9778(int var_5727_int, float var_5728_float)
{
	float var_5732_float;
	var_5728_float = var_5732_float;
	int var_5729_int;
	func_12163(var_5729_int, 501413, 501412, var_5732_float);
	var_5729_int = var_5727_int;
}


// @pe
void func_4659(int var_3410_int, int var_3411_int, object var_3412_object, object var_3413_object, object var_3414_object, object var_3415_object)
{
	if(var_3411_int == 0) {
		func_738(1, false);
		func_755(1, false, 1);
		int var_3424_int; object var_3425_object; object var_3426_object; object var_3427_object;
		var_3410_int = var_3424_int;
		var_3412_object = var_3425_object;
		var_3413_object = var_3426_object;
		var_3414_object = var_3427_object;
		func_662(1, var_3424_int, var_3425_object, var_3426_object, var_3427_object);
		object var_3428_object;
		var_3415_object = var_3428_object;
		func_248(var_3428_object, 2);
		func_812(1, false, 8);
		func_874(1, true, 8);
	}
	func_721(1, false);
	int var_3439_int; int var_3440_int;
	var_3410_int = var_3439_int;
	var_3411_int = var_3440_int;
	func_4181(1, var_3439_int, var_3440_int);
}


// @pe
void func_564(int var_565_int, object var_567_object, object var_568_object, object var_569_object)
{
	int var_570_int;
	var_565_int = var_570_int;
	func_484(var_570_int, true);
	object var_598_object;
	var_567_object = var_598_object;
	func_191(var_598_object);
	object var_609_object;
	var_568_object = var_609_object;
	func_191(var_609_object);
	object var_610_object;
	var_569_object = var_610_object;
	func_191(var_610_object);
}


// @pe
void func_11827(bool var_6039_bool)
{
	int var_6042_int;
	func_105(var_6042_int, "d9JuliaVisit");
	if(var_6042_int != 0) {
		var_6039_bool = true;
		return 0;
	}
	var_6039_bool = false;
}


void func_10806(void)
{
	object var_4725_object;
	func_12171(var_4725_object);
	object var_4723_object;
	var_4725_object = var_4723_object;
	object var_4724_object;
	var_4723_object->FindMark(var_4724_object, "d3q01AlexandrGotoOspina");
	if(var_4724_object != 0)
		var_4724_object->Remove();
	var_4723_object->FindMark(var_4724_object, "d3q01BigVladAgreed");
	if(var_4724_object != 0)
		var_4724_object->Remove();
	var_4723_object->FindMark(var_4724_object, "d3q01OspinaGotoBigVlad");
	if(var_4724_object != 0)
		var_4724_object->Remove();
	var_4723_object->FindMark(var_4724_object, "d3q01RubinGotoAlexandr");
	if(var_4724_object != 0)
		var_4724_object->Remove();
	var_4723_object->FindMark(var_4724_object, "d3q02GeorgGotoViktor");
	if(var_4724_object != 0)
		var_4724_object->Remove();
	var_4723_object->FindMark(var_4724_object, "d3q02HanGotoMladVlad");
	if(var_4724_object != 0)
		var_4724_object->Remove();
	var_4723_object->FindMark(var_4724_object, "d3q02MishkaGotoMladVlad");
	if(var_4724_object != 0)
		var_4724_object->Remove();
	var_4723_object->FindMark(var_4724_object, "d3q02MladVladGotoButcher");
	if(var_4724_object != 0)
		var_4724_object->Remove();
	var_4723_object->FindMark(var_4724_object, "d3q02MladVladGotoViktor");
	if(var_4724_object != 0)
		var_4724_object->Remove();
	var_4723_object->FindMark(var_4724_object, "d3q02ViktorGotoHan");
	if(var_4724_object != 0)
		var_4724_object->Remove();
	var_4723_object->FindMark(var_4724_object, "d3q02ViktorGotoMladVlad");
	if(var_4724_object != 0)
		var_4724_object->Remove();
	var_4723_object->FindMark(var_4724_object, "d3q03KapellaBoyLocation");
	if(var_4724_object != 0)
		var_4724_object->Remove();
	bool var_4750_bool;
	func_12146(var_4750_bool, 25);
	bool var_4752_bool;
	func_12146(var_4752_bool, 26);
	bool var_4754_bool;
	func_12146(var_4754_bool, 27);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_7738(bool var_4471_bool)
{
	object var_4473_object;
	@FindActor(var_4473_object, "arena_light");
	var_4473_object->Switch(var_4471_bool);
}
EMIT "Stack[-1] = 0";


// @pe
void func_9787(int var_5735_int, float var_5736_float)
{
	float var_5740_float;
	var_5736_float = var_5740_float;
	int var_5737_int;
	func_12163(var_5737_int, 502662, 502661, var_5740_float);
	var_5737_int = var_5735_int;
}


// @pe
void func_11839(bool var_6067_bool)
{
	int var_6070_int;
	func_105(var_6070_int, "d10AglajaVisit");
	if(var_6070_int != 0) {
		var_6067_bool = true;
		return 0;
	}
	var_6067_bool = false;
}


void func_7746(void)
{
	object var_4235_object; bool var_4236_bool; cvector var_4237_cvector; cvector var_4238_cvector; int var_4239_int; object var_4240_object;
	@Trace("Setting arena...");
	var_4242_object = GlobalVars[11];
	if(var_4242_object == null) {
		@GetMainOutdoorScene(var_4235_object);
		var_4235_object->GetLocator("pt_arena_manager", var_4236_bool, var_4237_cvector, var_4238_cvector);
		if(!var_4236_bool) { //@nz
			@Trace("Locator doesn't exist for arena manager");
		} else {
				var_4266_object = GlobalVars[11];
				object var_4267_object; object var_4268_object; cvector var_4269_cvector; cvector var_4270_cvector;
				var_4235_object = var_4268_object;
				var_4237_cvector = var_4269_cvector;
				var_4238_cvector = var_4270_cvector;
				func_14506(var_4267_object, var_4268_object, var_4269_cvector, var_4270_cvector);
				var_4267_object = var_4266_object;
				GlobalVars[11] = var_4266_object;
		}
		var_4239_int = 0;

		for(;;) {
			if(var_4239_int < 6) {
				var_4235_object->GetLocator(("pt_arena_torch" + (var_4239_int + 1)), var_4236_bool, var_4237_cvector, var_4238_cvector);
				if(!var_4236_bool) { //@nz
					@Trace("Locator doesn't exist for arena torch " + (var_4239_int + 1));
				} else {
				@AddActorByType(var_4240_object, "scripted", var_4235_object, var_4237_cvector, var_4238_cvector, "torch.xml");
				var_4261_object = GlobalVars[12];
				var_4261_object->add(var_4240_object);
				var_4240_object = null;
			}
			func_7738(true);
			var_4235_object = null;
	}
		return 12;

		}
		var_4239_int += 1;
	}
	
}


// @pe
void func_9796(int var_5639_int, float var_5640_float)
{
	float var_5644_float;
	var_5640_float = var_5644_float;
	int var_5641_int;
	func_12163(var_5641_int, 532770, 532769, var_5644_float);
	var_5641_int = var_5639_int;
}


// @pe
void func_583(int var_2028_int, int var_2029_int, object var_2030_object, object var_2031_object, object var_2032_object)
{
	int var_2033_int;
	var_2028_int = var_2033_int;
	func_484(var_2033_int, false);
	object var_2035_object;
	var_2030_object = var_2035_object;
	func_191(var_2035_object);
	object var_2036_object;
	var_2031_object = var_2036_object;
	func_191(var_2036_object);
	object var_2037_object;
	var_2032_object = var_2037_object;
	func_191(var_2037_object);
	if(var_2029_int < 8) {
		object var_2041_object;
		var_2030_object = var_2041_object;
		func_518((("pt_blockpost" + (var_2028_int + 1)) + "_1_"), var_2041_object, "pers_patrool", "patrol_stat.xml");
		object var_2067_object;
		var_2032_object = var_2067_object;
		func_540((("pt_fog" + (var_2028_int + 1)) + "_"), var_2067_object);
	} else {
		object var_2094_object;
		var_2030_object = var_2094_object;
		func_518((("pt_blockpost" + (var_2028_int + 1)) + "_1_"), var_2094_object, "pers_soldat", "soldier.xml");
		object var_2103_object;
		var_2031_object = var_2103_object;
		func_518((("pt_blockpost" + (var_2028_int + 1)) + "_2_"), var_2103_object, "pers_sanitar", "sanitar_stat.xml");
		object var_2112_object;
		var_2032_object = var_2112_object;
		func_540((("pt_fog" + (var_2028_int + 1)) + "_"), var_2112_object);
	}
	
}


// @pe
void func_11851(bool var_6107_bool)
{
	int var_6110_int;
	func_105(var_6110_int, "d11ViktorVisit");
	if(var_6110_int != 0) {
		var_6107_bool = true;
		return 0;
	}
	var_6107_bool = false;
}


// @pe
void func_9805(int var_5623_int, float var_5624_float)
{
	float var_5628_float;
	var_5624_float = var_5628_float;
	int var_5625_int;
	func_12163(var_5625_int, 532768, 532767, var_5628_float);
	var_5625_int = var_5623_int;
}


// @pe
void func_9814(int var_5260_int, float var_5261_float)
{
	float var_5265_float;
	var_5261_float = var_5265_float;
	int var_5262_int;
	func_12163(var_5262_int, 501175, 501174, var_5265_float);
	var_5262_int = var_5260_int;
}


// @pe
void func_11863(bool var_6137_bool)
{
	int var_6140_int;
	func_105(var_6140_int, "d9AglajaVisit");
	if(var_6140_int != 0) {
		var_6137_bool = true;
		return 0;
	}
	var_6137_bool = false;
}


// @pe
void func_6744(int var_2943_int, int var_2944_int, object var_2945_object, object var_2946_object, object var_2947_object, object var_2948_object)
{
	if(var_2944_int == 0) {
		func_738(12, true);
		func_755(12, true, 1);
		int var_2957_int; object var_2958_object; object var_2959_object; object var_2960_object;
		var_2943_int = var_2957_int;
		var_2945_object = var_2958_object;
		var_2946_object = var_2959_object;
		var_2947_object = var_2960_object;
		func_583(12, var_2957_int, var_2958_object, var_2959_object, var_2960_object);
		object var_2961_object;
		var_2948_object = var_2961_object;
		func_248(var_2961_object, 1);
		func_812(12, true, 4);
		func_874(12, false, 4);
	}
	func_721(12, false);
	int var_2972_int; int var_2973_int;
	var_2943_int = var_2972_int;
	var_2944_int = var_2973_int;
	func_2735(12, var_2972_int, var_2973_int);
}


// @pe
void func_5723(int var_2672_int, int var_2673_int, object var_2674_object, object var_2675_object, object var_2676_object, object var_2677_object)
{
	if(var_2673_int == 0) {
		func_738(7, true);
		func_755(7, true, 1);
		int var_2686_int; object var_2687_object; object var_2688_object; object var_2689_object;
		var_2672_int = var_2686_int;
		var_2674_object = var_2687_object;
		var_2675_object = var_2688_object;
		var_2676_object = var_2689_object;
		func_583(7, var_2686_int, var_2687_object, var_2688_object, var_2689_object);
		object var_2690_object;
		var_2677_object = var_2690_object;
		func_248(var_2690_object, 1);
		func_812(7, true, 6);
		func_874(7, false, 6);
	}
	func_721(7, false);
	int var_2701_int; int var_2702_int;
	var_2672_int = var_2701_int;
	var_2673_int = var_2702_int;
	func_2735(7, var_2701_int, var_2702_int);
}


// @pe
void func_9823(int var_5743_int, float var_5744_float)
{
	float var_5748_float;
	var_5744_float = var_5748_float;
	int var_5745_int;
	func_12163(var_5745_int, 522198, 522197, var_5748_float);
	var_5745_int = var_5743_int;
}


// @pe
void func_11875(bool var_6153_bool)
{
	int var_6156_int;
	func_105(var_6156_int, "d9ViktorVisit");
	if(var_6156_int != 0) {
		var_6153_bool = true;
		return 0;
	}
	var_6153_bool = false;
}


// @pe
void func_4711(object var_79_object)
{
	var_79_object->add("dt_house1_union2_05l");
	var_79_object->add("dt_house1_union2_05r");
	var_79_object->add("dt_house2_01");
	var_79_object->add("dt_house2_02");
	var_79_object->add("dt_house2_03");
	var_79_object->add("dt_house2_04");
	var_79_object->add("dt_house2_05");
	var_79_object->add("dt_house3_10_i2");
	var_79_object->add("dt_house3_10");
	var_79_object->add("dt_house3_11_i2");
	var_79_object->add("dt_house3_11");
	var_79_object->add("dt_house3_12_i2");
	var_79_object->add("dt_house3_12");
	var_79_object->add("dt_house_1_06");
	var_79_object->add("dt_house3_07_i2");
	var_79_object->add("dt_house3_07");
}


// @pe
void func_9832(int var_6083_int, float var_6084_float)
{
	float var_6088_float;
	var_6084_float = var_6088_float;
	int var_6085_int;
	func_12163(var_6085_int, 538398, 538397, var_6088_float);
	var_6085_int = var_6083_int;
}


// @pe
void func_11887(bool var_5492_bool, object var_5493_object)
{
	object var_5496_object;
	var_5493_object = var_5496_object;
	func_12089(var_5496_object);
	bool var_5495_bool;
	if(var_5495_bool != 0) {
		var_5492_bool = true;
		return 0;
	}
	var_5492_bool = false;
}


// @pe
void func_9841(int var_6091_int, float var_6092_float)
{
	float var_6096_float;
	var_6092_float = var_6096_float;
	int var_6093_int;
	func_12163(var_6093_int, 538400, 538399, var_6096_float);
	var_6093_int = var_6091_int;
}


// @pe
void func_11897(bool var_4805_bool)
{
	int var_4808_int;
	func_105(var_4808_int, "d1q01KaterinaUHave1day");
	if(var_4808_int == 1)
		var_4805_bool = true;
	var_4805_bool = false;
}


// @pe
void func_9850(int var_5298_int, float var_5299_float)
{
	float var_5303_float;
	var_5299_float = var_5303_float;
	int var_5300_int;
	func_12163(var_5300_int, 515303, 515302, var_5303_float);
	var_5300_int = var_5298_int;
}


void func_7809(void)
{
	int var_4511_int; int var_4512_int; object var_4513_object;
	@Trace("Cleaning arena...");
	var_4515_object = GlobalVars[11];
	if(var_4515_object != null) {
		var_4517_object = GlobalVars[11];
		var_4517_object->Remove();
		var_4518_object = GlobalVars[12];
		var_4518_object->size(var_4511_int);
		var_4512_int = 0;

		while(var_4512_int < var_4511_int) {
			var_4520_object = GlobalVars[12];
			var_4520_object->get(var_4513_object, var_4512_int);
			@Trigger(var_4513_object, "remove");
			var_4513_object = null;
			var_4512_int += 1;
		}

		var_4523_object = GlobalVars[12];
		var_4523_object->clear();
		func_7738(false);
	}
}


// @pe
void func_9859(int var_5282_int, float var_5283_float)
{
	float var_5287_float;
	var_5283_float = var_5287_float;
	int var_5284_int;
	func_12163(var_5284_int, 502851, 502850, var_5287_float);
	var_5284_int = var_5282_int;
}


// @pe
void func_11909(bool var_5033_bool)
{
	int var_5036_int;
	func_105(var_5036_int, "d6q03");
	if(var_5036_int == 0) {
		var_5033_bool = true;
		return 0;
	}
	var_5033_bool = false;
}


// @pe
void func_6796(int var_4073_int, int var_4074_int, object var_4075_object, object var_4076_object, object var_4077_object, object var_4078_object)
{
	if(var_4074_int == 0) {
		func_738(12, false);
		func_755(12, false, 1);
		int var_4087_int; object var_4088_object; object var_4089_object; object var_4090_object;
		var_4073_int = var_4087_int;
		var_4075_object = var_4088_object;
		var_4076_object = var_4089_object;
		var_4077_object = var_4090_object;
		func_662(12, var_4087_int, var_4088_object, var_4089_object, var_4090_object);
		object var_4091_object;
		var_4078_object = var_4091_object;
		func_248(var_4091_object, 2);
		func_812(12, false, 4);
		func_874(12, true, 4);
	}
	func_721(12, false);
	int var_4102_int; int var_4103_int;
	var_4073_int = var_4102_int;
	var_4074_int = var_4103_int;
	func_3630(12, var_4102_int, var_4103_int);
}


// @pe
void func_9868(int var_5671_int, float var_5672_float)
{
	float var_5676_float;
	var_5672_float = var_5676_float;
	int var_5673_int;
	func_12163(var_5673_int, 532895, 532894, var_5676_float);
	var_5673_int = var_5671_int;
}


// @pe
void func_5775(int var_3798_int, int var_3799_int, object var_3800_object, object var_3801_object, object var_3802_object, object var_3803_object)
{
	if(var_3799_int == 0) {
		func_738(7, false);
		func_755(7, false, 1);
		int var_3812_int; object var_3813_object; object var_3814_object; object var_3815_object;
		var_3798_int = var_3812_int;
		var_3800_object = var_3813_object;
		var_3801_object = var_3814_object;
		var_3802_object = var_3815_object;
		func_662(7, var_3812_int, var_3813_object, var_3814_object, var_3815_object);
		object var_3816_object;
		var_3803_object = var_3816_object;
		func_248(var_3816_object, 2);
		func_812(7, false, 6);
		func_874(7, true, 6);
	}
	func_721(7, false);
	int var_3827_int; int var_3828_int;
	var_3798_int = var_3827_int;
	var_3799_int = var_3828_int;
	func_3630(7, var_3827_int, var_3828_int);
}


// @pe
void func_11921(bool var_5230_bool)
{
	int var_5233_int;
	func_105(var_5233_int, "d11q03BurahVisit");
	if(var_5233_int != 0) {
		var_5230_bool = true;
		return 0;
	}
	var_5230_bool = false;
}


void func_8851(int var_500_int, int var_501_int, int var_502_int)
{
	var_511_object = GlobalVars[8];
	object var_507_object;
	var_511_object->get(var_507_object, var_500_int);
	var_512_object = GlobalVars[9];
	object var_508_object;
	var_512_object->get(var_508_object, var_500_int);
	var_513_object = GlobalVars[10];
	object var_509_object;
	var_513_object->get(var_509_object, var_500_int);
	var_514_object = GlobalVars[13];
	object var_510_object;
	var_514_object->get(var_510_object, var_500_int);
	if(var_500_int == 0) {
		int var_517_int; int var_518_int; object var_519_object; object var_520_object; object var_521_object; object var_522_object;
		var_501_int = var_517_int;
		var_502_int = var_518_int;
		var_507_object = var_519_object;
		var_508_object = var_520_object;
		var_509_object = var_521_object;
		var_510_object = var_522_object;
		func_4358(var_517_int, var_518_int, var_519_object, var_520_object, var_521_object, var_522_object);
	} else if(var_500_int == 1) {
			int var_877_int; int var_878_int; object var_879_object; object var_880_object; object var_881_object; object var_882_object;
			var_501_int = var_877_int;
			var_502_int = var_878_int;
			var_507_object = var_879_object;
			var_508_object = var_880_object;
			var_509_object = var_881_object;
			var_510_object = var_882_object;
			func_4555(var_877_int, var_878_int, var_879_object, var_880_object, var_881_object, var_882_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_500_int == 2) {
		int var_1026_int; int var_1027_int; object var_1028_object; object var_1029_object; object var_1030_object; object var_1031_object;
		var_501_int = var_1026_int;
		var_502_int = var_1027_int;
		var_507_object = var_1028_object;
		var_508_object = var_1029_object;
		var_509_object = var_1030_object;
		var_510_object = var_1031_object;
		func_4761(var_1026_int, var_1027_int, var_1028_object, var_1029_object, var_1030_object, var_1031_object);
	} else if(var_500_int == 3) {
		int var_1251_int; int var_1252_int; object var_1253_object; object var_1254_object; object var_1255_object; object var_1256_object;
		var_501_int = var_1251_int;
		var_502_int = var_1252_int;
		var_507_object = var_1253_object;
		var_508_object = var_1254_object;
		var_509_object = var_1255_object;
		var_510_object = var_1256_object;
		func_4991(var_1251_int, var_1252_int, var_1253_object, var_1254_object, var_1255_object, var_1256_object);
	} else if(var_500_int == 4) {
		int var_1299_int; int var_1300_int; object var_1301_object; object var_1302_object; object var_1303_object; object var_1304_object;
		var_501_int = var_1299_int;
		var_502_int = var_1300_int;
		var_507_object = var_1301_object;
		var_508_object = var_1302_object;
		var_509_object = var_1303_object;
		var_510_object = var_1304_object;
		func_5209(var_1299_int, var_1300_int, var_1301_object, var_1302_object, var_1303_object, var_1304_object);
	} else if(var_500_int == 5) {
		int var_1344_int; int var_1345_int; object var_1346_object; object var_1347_object; object var_1348_object; object var_1349_object;
		var_501_int = var_1344_int;
		var_502_int = var_1345_int;
		var_507_object = var_1346_object;
		var_508_object = var_1347_object;
		var_509_object = var_1348_object;
		var_510_object = var_1349_object;
		func_5448(var_1344_int, var_1345_int, var_1346_object, var_1347_object, var_1348_object, var_1349_object);
	} else if(var_500_int == 6) {
		int var_1377_int; int var_1378_int; object var_1379_object; object var_1380_object; object var_1381_object; object var_1382_object;
		var_501_int = var_1377_int;
		var_502_int = var_1378_int;
		var_507_object = var_1379_object;
		var_508_object = var_1380_object;
		var_509_object = var_1381_object;
		var_510_object = var_1382_object;
		func_5606(var_1382_object);
	} else if(var_500_int == 7) {
		int var_1387_int; int var_1388_int; object var_1389_object; object var_1390_object; object var_1391_object; object var_1392_object;
		var_501_int = var_1387_int;
		var_502_int = var_1388_int;
		var_507_object = var_1389_object;
		var_508_object = var_1390_object;
		var_509_object = var_1391_object;
		var_510_object = var_1392_object;
		func_5671(var_1387_int, var_1388_int, var_1389_object, var_1390_object, var_1391_object, var_1392_object);
	} else if(var_500_int == 8) {
		int var_1575_int; int var_1576_int; object var_1577_object; object var_1578_object; object var_1579_object; object var_1580_object;
		var_501_int = var_1575_int;
		var_502_int = var_1576_int;
		var_507_object = var_1577_object;
		var_508_object = var_1578_object;
		var_509_object = var_1579_object;
		var_510_object = var_1580_object;
		func_5871(var_1575_int, var_1576_int, var_1577_object, var_1578_object, var_1579_object, var_1580_object);
	} else if(var_500_int == 9) {
		int var_1608_int; int var_1609_int; object var_1610_object; object var_1611_object; object var_1612_object; object var_1613_object;
		var_501_int = var_1608_int;
		var_502_int = var_1609_int;
		var_507_object = var_1610_object;
		var_508_object = var_1611_object;
		var_509_object = var_1612_object;
		var_510_object = var_1613_object;
		func_6074(var_1608_int, var_1609_int, var_1610_object, var_1611_object, var_1612_object, var_1613_object);
	} else if(var_500_int == 10) {
		int var_1641_int; int var_1642_int; object var_1643_object; object var_1644_object; object var_1645_object; object var_1646_object;
		var_501_int = var_1641_int;
		var_502_int = var_1642_int;
		var_507_object = var_1643_object;
		var_508_object = var_1644_object;
		var_509_object = var_1645_object;
		var_510_object = var_1646_object;
		func_6283(var_1641_int, var_1642_int, var_1643_object, var_1644_object, var_1645_object, var_1646_object);
	} else if(var_500_int == 11) {
		int var_1674_int; int var_1675_int; object var_1676_object; object var_1677_object; object var_1678_object; object var_1679_object;
		var_501_int = var_1674_int;
		var_502_int = var_1675_int;
		var_507_object = var_1676_object;
		var_508_object = var_1677_object;
		var_509_object = var_1678_object;
		var_510_object = var_1679_object;
		func_6495(var_1674_int, var_1675_int, var_1676_object, var_1677_object, var_1678_object, var_1679_object);
	} else if(var_500_int == 12) {
		int var_1707_int; int var_1708_int; object var_1709_object; object var_1710_object; object var_1711_object; object var_1712_object;
		var_501_int = var_1707_int;
		var_502_int = var_1708_int;
		var_507_object = var_1709_object;
		var_508_object = var_1710_object;
		var_509_object = var_1711_object;
		var_510_object = var_1712_object;
		func_6692(var_1707_int, var_1708_int, var_1709_object, var_1710_object, var_1711_object, var_1712_object);
	} else if(var_500_int == 13) {
		int var_1740_int; int var_1741_int; object var_1742_object; object var_1743_object; object var_1744_object; object var_1745_object;
		var_501_int = var_1740_int;
		var_502_int = var_1741_int;
		var_507_object = var_1742_object;
		var_508_object = var_1743_object;
		var_509_object = var_1744_object;
		var_510_object = var_1745_object;
		func_6895(var_1740_int, var_1741_int, var_1742_object, var_1743_object, var_1744_object, var_1745_object);
	} else if(var_500_int == 14) {
		int var_1773_int; int var_1774_int; object var_1775_object; object var_1776_object; object var_1777_object; object var_1778_object;
		var_501_int = var_1773_int;
		var_502_int = var_1774_int;
		var_507_object = var_1775_object;
		var_508_object = var_1776_object;
		var_509_object = var_1777_object;
		var_510_object = var_1778_object;
		func_7095(var_1773_int, var_1774_int, var_1775_object, var_1776_object, var_1777_object, var_1778_object);
	} else if(var_500_int == 15) {
		int var_1957_int; int var_1958_int; object var_1959_object; object var_1960_object; object var_1961_object; object var_1962_object;
		var_501_int = var_1957_int;
		var_502_int = var_1958_int;
		var_507_object = var_1959_object;
		var_508_object = var_1960_object;
		var_509_object = var_1961_object;
		var_510_object = var_1962_object;
		func_7277(var_1957_int, var_1958_int, var_1959_object, var_1960_object, var_1961_object, var_1962_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_9877(int var_5751_int, float var_5752_float)
{
	float var_5756_float;
	var_5752_float = var_5756_float;
	int var_5753_int;
	func_12163(var_5753_int, 522200, 522199, var_5756_float);
	var_5753_int = var_5751_int;
}


// @pe
void func_662(int var_3209_int, int var_3210_int, object var_3211_object, object var_3212_object, object var_3213_object)
{
	int var_3214_int;
	var_3209_int = var_3214_int;
	func_484(var_3214_int, false);
	object var_3216_object;
	var_3211_object = var_3216_object;
	func_191(var_3216_object);
	object var_3217_object;
	var_3212_object = var_3217_object;
	func_191(var_3217_object);
	object var_3218_object;
	var_3213_object = var_3218_object;
	func_191(var_3218_object);
	if(var_3210_int < 8) {
		object var_3222_object;
		var_3211_object = var_3222_object;
		func_518((("pt_blockpost" + (var_3209_int + 1)) + "_1_"), var_3222_object, "pers_patrool", "patrol_stat.xml");
	} else {
		object var_3231_object;
		var_3211_object = var_3231_object;
		func_518((("pt_blockpost" + (var_3209_int + 1)) + "_1_"), var_3231_object, "pers_soldat", "soldier.xml");
		object var_3240_object;
		var_3212_object = var_3240_object;
		func_518((("pt_blockpost" + (var_3209_int + 1)) + "_2_"), var_3240_object, "pers_sanitar", "sanitar_stat.xml");
	}
	
}


// @pe
void func_4761(int var_1026_int, int var_1027_int, object var_1028_object, object var_1029_object, object var_1030_object, object var_1031_object)
{
	if(var_1027_int == 0) {
		func_738(2, false);
		func_755(2, false, 1);
		int var_1039_int; int var_1040_int; object var_1041_object; object var_1042_object; object var_1043_object;
		var_1039_int = 2;
		var_1026_int = var_1040_int;
		var_1028_object = var_1041_object;
		var_1029_object = var_1042_object;
		var_1030_object = var_1043_object;
		func_564(var_1040_int, var_1041_object, var_1042_object, var_1043_object);
		object var_1044_object;
		var_1031_object = var_1044_object;
		func_248(var_1044_object, 0);
		func_812(2, false, 5);
		func_874(2, false, 5);
	}
	int var_1053_int;
	var_1027_int = var_1053_int;
	func_992(2, var_1053_int);
	int var_1055_int; int var_1056_int;
	var_1026_int = var_1055_int;
	var_1027_int = var_1056_int;
	func_1826(2, var_1055_int, var_1056_int);
}


// @pe
void func_11933(bool var_5210_bool)
{
	int var_5213_int;
	func_105(var_5213_int, "d11q04KlaraVisit");
	if(var_5213_int != 0) {
		var_5210_bool = true;
		return 0;
	}
	var_5210_bool = false;
}


void func_10910(void)
{
	object var_4851_object;
	func_12171(var_4851_object);
	object var_4849_object;
	var_4851_object = var_4849_object;
	object var_4850_object;
	var_4849_object->FindMark(var_4850_object, "d4q01BigVladGotoLara");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q01BigVladGotoSklad");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q01BigVladGotoSobor");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q01BigVladGotoTheater");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q01LaraGotoMladVlad");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q01LaraGotoMladVladSelf");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q01LaraGotoOspina");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q01MladVladGotoBigVlad");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q01MladVladGotoOspina");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q01OspinaGotoLara");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q01WastedMale");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q01Whitemask");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q02BirdmaskNearHome");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q02MladVladGotoAnna");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q02MladVladGotoJulia");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q02MladVladGotoLara");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q03AlexandrAboutVolnica");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q03AlexandrGotoGrif");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q03GrifGotoAlexandr");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	var_4849_object->FindMark(var_4850_object, "d4q03GrifGotoAlexandrSelf");
	if(var_4850_object != 0)
		var_4850_object->Remove();
	bool var_4892_bool;
	func_12146(var_4892_bool, 20);
	bool var_4894_bool;
	func_12146(var_4894_bool, 21);
	bool var_4896_bool;
	func_12146(var_4896_bool, 22);
	bool var_4898_bool;
	func_12146(var_4898_bool, 710);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_9886(int var_6099_int, float var_6100_float)
{
	float var_6104_float;
	var_6100_float = var_6104_float;
	int var_6101_int;
	func_12163(var_6101_int, 538402, 538401, var_6104_float);
	var_6101_int = var_6099_int;
}


void func_7843(void)
{
	object var_323_object;
	@GetMainOutdoorScene(var_323_object);
	int var_324_int = 1;
	
	while(var_324_int <= 17) {
		var_327_object = GlobalVars[15];
		object var_328_object; object var_329_object;
		var_323_object = var_329_object;
		func_132(var_328_object, var_329_object, ("pt_bull" + var_324_int), "pers_bull", "bull.xml");
		var_327_object->add(var_328_object);
		var_324_int += 1;
	}
	
}
EMIT "Stack[-2] = 0";


// @pe
void func_9895(int var_5655_int, float var_5656_float)
{
	float var_5660_float;
	var_5656_float = var_5660_float;
	int var_5657_int;
	func_12163(var_5657_int, 503307, 503306, var_5660_float);
	var_5657_int = var_5655_int;
}


// @pe
void func_11945(bool var_5252_bool)
{
	int var_5255_int;
	func_105(var_5255_int, "d2TalkToAlexandr");
	if(var_5255_int != 0) {
		var_5252_bool = true;
		return 0;
	}
	var_5252_bool = false;
}


void func_2735(int var_2700_int, int var_2701_int, int var_2702_int)
{
	int var_2705_int; int var_2706_int;
	bool var_2707_bool = false;
	if(var_2702_int > 8) {
		if(var_2702_int < 21)
			var_2707_bool = true;
	}
	if(var_2707_bool != 0) {
		int var_2712_int;
		var_2700_int = var_2712_int;
		func_445(var_2712_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_2716_int;
		var_2700_int = var_2716_int;
		func_445(var_2716_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2720_int;
		var_2700_int = var_2720_int;
		func_445(var_2720_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2724_int;
		var_2700_int = var_2724_int;
		func_471(var_2724_int, "fog", "fog.xml", 6);
		if(var_2701_int >= 5) {
			int var_2730_int;
			var_2700_int = var_2730_int;
			func_471(var_2730_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2735_float; int var_2736_int;
		func_1166(var_2735_float, var_2736_int);
		if((1 * var_2735_float) != 0) {
			int var_2738_int; int var_2741_int;
			var_2700_int = var_2738_int;
			var_2705_int = var_2741_int;
			func_445(var_2738_int, "pers_bomber", "bomber.xml", var_2741_int);
		}
	} else {
		int var_2779_int;
		var_2700_int = var_2779_int;
		func_445(var_2779_int, "pers_vaxxabit", "vaxxabit_d.xml", 4);
		int var_2783_int;
		var_2700_int = var_2783_int;
		func_445(var_2783_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 4);
		int var_2787_int;
		var_2700_int = var_2787_int;
		func_445(var_2787_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2791_int;
		var_2700_int = var_2791_int;
		func_471(var_2791_int, "fog", "fog.xml", 6);
		if(var_2736_int >= 5) {
			int var_2797_int;
			var_2700_int = var_2797_int;
			func_471(var_2797_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2802_float; int var_2803_int;
		var_2701_int = var_2803_int;
		func_1166(var_2802_float, var_2803_int);
		if((1 * var_2802_float) == 0) goto Label_2853;
		int var_2805_int; int var_2808_int;
		var_2700_int = var_2805_int;
		var_2706_int = var_2808_int;
		func_445(var_2805_int, "pers_bomber", "bomber.xml", var_2808_int);
	}
Label_2853:
	int var_2742_int;
	var_2700_int = var_2742_int;
	func_458(var_2742_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2748_int;
	var_2700_int = var_2748_int;
	func_458(var_2748_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2754_int;
	var_2700_int = var_2754_int;
	func_458(var_2754_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2760_int;
	var_2700_int = var_2760_int;
	func_458(var_2760_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_2766_bool; int var_2767_int; int var_2768_int;
	var_2701_int = var_2767_int;
	var_2702_int = var_2768_int;
	func_1256(var_2766_bool, var_2767_int, var_2768_int);
	if(var_2766_bool != 0) {
		int var_2769_int;
		var_2700_int = var_2769_int;
		func_445(var_2769_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_2773_bool; int var_2774_int;
	var_2701_int = var_2774_int;
	func_1283(var_2773_bool, var_2774_int);
	if(var_2773_bool != 0) {
		int var_2775_int;
		var_2700_int = var_2775_int;
		func_445(var_2775_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_9904(int var_5950_int, float var_5951_float)
{
	float var_5955_float;
	var_5951_float = var_5955_float;
	int var_5952_int;
	func_12163(var_5952_int, 536320, 536319, var_5955_float);
	var_5952_int = var_5950_int;
}


// @pe
void func_11957(bool var_5268_bool)
{
	int var_5271_int;
	func_105(var_5271_int, "d3RubinVisit");
	if(var_5271_int == 1)
		var_5268_bool = true;
	var_5268_bool = false;
}


// @pe
void func_9913(int var_5314_int, float var_5315_float)
{
	float var_5319_float;
	var_5315_float = var_5319_float;
	int var_5316_int;
	func_12163(var_5316_int, 515334, 515333, var_5319_float);
	var_5316_int = var_5314_int;
}


void func_7866(void)
{
	var_4426_object = GlobalVars[15];
	object var_4425_object;
	var_4426_object = var_4425_object;
	func_191(var_4425_object);
}


// @pe
void func_6848(object var_279_object)
{
	var_279_object->add("r7_house2_01");
	var_279_object->add("r7_house2_02");
	var_279_object->add("r7_house2_03");
	var_279_object->add("r7_house2_04");
	var_279_object->add("r7_house3_03_i2");
	var_279_object->add("r7_house3_03");
	var_279_object->add("r7_house3_04_i2");
	var_279_object->add("r7_house3_04");
	var_279_object->add("r7_house3_05_i2");
	var_279_object->add("r7_house3_05");
	var_279_object->add("r7_house3_06_i2");
	var_279_object->add("r7_house3_01_i2");
	var_279_object->add("r7_house3_01");
	var_279_object->add("r7_house3_02_i2");
	var_279_object->add("r7_house3_02");
}


void func_7873(void)
{
	bool var_34_bool; int var_35_int; bool var_36_bool; int var_37_int; bool var_38_bool; object var_39_object;
	var_40_object = GlobalVars[15];
	object var_41_object;
	func_99(var_41_object);
	var_41_object = var_40_object;
	GlobalVars[15] = var_40_object;
	var_44_object = GlobalVars[13];
	object var_45_object;
	func_99(var_45_object);
	var_45_object = var_44_object;
	GlobalVars[13] = var_44_object;
	var_46_object = GlobalVars[8];
	object var_47_object;
	func_99(var_47_object);
	var_47_object = var_46_object;
	GlobalVars[8] = var_46_object;
	var_48_object = GlobalVars[9];
	object var_49_object;
	func_99(var_49_object);
	var_49_object = var_48_object;
	GlobalVars[9] = var_48_object;
	var_50_object = GlobalVars[10];
	object var_51_object;
	func_99(var_51_object);
	var_51_object = var_50_object;
	GlobalVars[10] = var_50_object;
	int var_30_int = 0;
	
	while(var_30_int < 16) {
		var_54_object = GlobalVars[8];
		object var_55_object;
		func_99(var_55_object);
		var_54_object->add(var_55_object);
		var_56_object = GlobalVars[9];
		object var_57_object;
		func_99(var_57_object);
		var_56_object->add(var_57_object);
		var_58_object = GlobalVars[10];
		object var_59_object;
		func_99(var_59_object);
		var_58_object->add(var_59_object);
		var_30_int += 1;
	}
	
	object var_31_object;
	@CreateStringVector(var_31_object);
	var_61_object = GlobalVars[13];
	var_61_object->add(var_31_object);
	object var_62_object;
	var_31_object = var_62_object;
	func_4356();
	@CreateStringVector(var_31_object);
	var_63_object = GlobalVars[13];
	var_63_object->add(var_31_object);
	object var_64_object;
	var_31_object = var_64_object;
	func_4514(var_64_object);
	@CreateStringVector(var_31_object);
	var_78_object = GlobalVars[13];
	var_78_object->add(var_31_object);
	object var_79_object;
	var_31_object = var_79_object;
	func_4711(var_79_object);
	@CreateStringVector(var_31_object);
	var_96_object = GlobalVars[13];
	var_96_object->add(var_31_object);
	object var_97_object;
	var_31_object = var_97_object;
	func_4917(var_97_object);
	@CreateStringVector(var_31_object);
	var_122_object = GlobalVars[13];
	var_122_object->add(var_31_object);
	object var_123_object;
	var_31_object = var_123_object;
	func_5147(var_123_object);
	@CreateStringVector(var_31_object);
	var_144_object = GlobalVars[13];
	var_144_object->add(var_31_object);
	object var_145_object;
	var_31_object = var_145_object;
	func_5365(var_145_object);
	@CreateStringVector(var_31_object);
	var_173_object = GlobalVars[13];
	var_173_object->add(var_31_object);
	object var_174_object;
	var_31_object = var_174_object;
	func_5604();
	@CreateStringVector(var_31_object);
	var_175_object = GlobalVars[13];
	var_175_object->add(var_31_object);
	object var_176_object;
	var_31_object = var_176_object;
	func_5627(var_176_object);
	@CreateStringVector(var_31_object);
	var_191_object = GlobalVars[13];
	var_191_object->add(var_31_object);
	object var_192_object;
	var_31_object = var_192_object;
	func_5827(var_192_object);
	@CreateStringVector(var_31_object);
	var_207_object = GlobalVars[13];
	var_207_object->add(var_31_object);
	object var_208_object;
	var_31_object = var_208_object;
	func_6027(var_208_object);
	@CreateStringVector(var_31_object);
	var_224_object = GlobalVars[13];
	var_224_object->add(var_31_object);
	object var_225_object;
	var_31_object = var_225_object;
	func_6230(var_225_object);
	@CreateStringVector(var_31_object);
	var_243_object = GlobalVars[13];
	var_243_object->add(var_31_object);
	object var_244_object;
	var_31_object = var_244_object;
	func_6439(var_244_object);
	@CreateStringVector(var_31_object);
	var_263_object = GlobalVars[13];
	var_263_object->add(var_31_object);
	object var_264_object;
	var_31_object = var_264_object;
	func_6651(var_264_object);
	@CreateStringVector(var_31_object);
	var_278_object = GlobalVars[13];
	var_278_object->add(var_31_object);
	object var_279_object;
	var_31_object = var_279_object;
	func_6848(var_279_object);
	@CreateStringVector(var_31_object);
	var_295_object = GlobalVars[13];
	var_295_object->add(var_31_object);
	object var_296_object;
	var_31_object = var_296_object;
	func_7051(var_296_object);
	@CreateStringVector(var_31_object);
	var_311_object = GlobalVars[13];
	var_311_object->add(var_31_object);
	object var_312_object;
	var_31_object = var_312_object;
	func_7251(var_312_object);
	func_7843();
	object var_32_object;
	@GetMainOutdoorScene(var_32_object);
	var_348_object = GlobalVars[6];
	object var_349_object;
	func_99(var_349_object);
	var_349_object = var_348_object;
	GlobalVars[6] = var_348_object;
	int var_33_int = 0;
	
	for(;;) {
		var_32_object->GetLocator(("pt_plant" + (var_33_int + 1)), var_34_bool);
		if(!var_34_bool) { //@nz
		} else {
			var_33_int += 1;
		}
		var_355_object = GlobalVars[6];
		var_355_object->resize(var_33_int);
		@Trace("Total plants: " + var_33_int);
		var_358_object = GlobalVars[7];
		object var_359_object;
		func_99(var_359_object);
		var_359_object = var_358_object;
		GlobalVars[7] = var_358_object;
		var_35_int = 0;

		for(;;) {
			var_32_object->GetLocator(("pt_grave_supply" + (var_35_int + 1)), var_36_bool);
			if(!var_36_bool) { //@nz
			} else {
				var_35_int += 1;
			}
			var_365_object = GlobalVars[7];
			var_365_object->resize(var_35_int);
			@Trace("Total grave supplies: " + var_35_int);
			var_368_object = GlobalVars[14];
			object var_369_object;
			func_99(var_369_object);
			var_369_object = var_368_object;
			GlobalVars[14] = var_368_object;

			for(;;) {
				var_32_object->GetLocator(("pt_bonfire" + (0 + 1)), var_38_bool);
				if(!var_38_bool) //@nz
					break;
				var_377_object = GlobalVars[14];
				var_377_object->add(Obj());
				int var_378_int;
				var_37_int = var_378_int;
				func_7650(var_378_int);
				var_39_object = null;
				var_37_int += 1;
			}
			@Trace("Total bonfires: " + var_37_int);

		}

	}
}
EMIT "Stack[-8] = 0";
EMIT "Stack[-9] = 0";


// @pe
void func_11969(bool var_5290_bool)
{
	int var_5293_int;
	func_105(var_5293_int, "d3GeorgVisit");
	if(var_5293_int == 1)
		var_5290_bool = true;
	var_5290_bool = false;
}


// @pe
void func_5827(object var_192_object)
{
	var_192_object->add("r2_house_2_01");
	var_192_object->add("r2_house_2_02");
	var_192_object->add("r2_house_2_03");
	var_192_object->add("r2_house7_02");
	var_192_object->add("r2_house01_01");
	var_192_object->add("r2_house7_01");
	var_192_object->add("r2_house3_01_i2");
	var_192_object->add("r2_house3_01");
	var_192_object->add("r2_house3_02_i2");
	var_192_object->add("r2_house3_02");
	var_192_object->add("r2_house3_03_i2");
	var_192_object->add("r2_house3_03");
	var_192_object->add("r3_house7_01");
	var_192_object->add("r3_house7_02");
}


// @pe
void func_9922(int var_5687_int, float var_5688_float)
{
	float var_5692_float;
	var_5688_float = var_5692_float;
	int var_5689_int;
	func_12163(var_5689_int, 533079, 533078, var_5692_float);
	var_5689_int = var_5687_int;
}


// @pe
void func_9931(int var_5759_int, float var_5760_float)
{
	float var_5764_float;
	var_5760_float = var_5764_float;
	int var_5761_int;
	func_12163(var_5761_int, 522202, 522201, var_5764_float);
	var_5761_int = var_5759_int;
}


// @pe
void func_4813(int var_2417_int, int var_2418_int, object var_2419_object, object var_2420_object, object var_2421_object, object var_2422_object)
{
	if(var_2418_int == 0) {
		func_738(2, true);
		func_755(2, true, 1);
		int var_2431_int; object var_2432_object; object var_2433_object; object var_2434_object;
		var_2417_int = var_2431_int;
		var_2419_object = var_2432_object;
		var_2420_object = var_2433_object;
		var_2421_object = var_2434_object;
		func_583(2, var_2431_int, var_2432_object, var_2433_object, var_2434_object);
		object var_2435_object;
		var_2422_object = var_2435_object;
		func_248(var_2435_object, 1);
		func_812(2, true, 5);
		func_874(2, false, 5);
	}
	func_721(2, false);
	int var_2446_int; int var_2447_int;
	var_2417_int = var_2446_int;
	var_2418_int = var_2447_int;
	func_2915(2, var_2446_int, var_2447_int);
}


// @pe
void func_11981(bool var_5306_bool)
{
	int var_5309_int;
	func_105(var_5309_int, "d4BigVladVisit");
	if(var_5309_int == 1)
		var_5306_bool = true;
	var_5306_bool = false;
}


void func_721(int var_736_int, bool var_737_bool)
{
	object var_740_object;
	@GetMainOutdoorScene(var_740_object);
	if(var_740_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_740_object->EnableSubsets((var_736_int + 1), 100, var_737_bool, true);
}
EMIT "Stack[-2] = 0";


// @pe
void func_9940(int var_5358_int, float var_5359_float)
{
	float var_5363_float;
	var_5359_float = var_5363_float;
	int var_5360_int;
	func_12163(var_5360_int, 502853, 502852, var_5363_float);
	var_5360_int = var_5358_int;
}


// @pe
void func_14040(object var_5913_object, bool var_5914_bool, int var_5915_int)
{
	var_5913_object->add(6);
	var_5913_object->add(26);
	var_5913_object->add(2);
	var_5913_object->add(22);
	if(var_5914_bool == false) {
		var_5913_object->add(15);
		var_5913_object->add(5);
		var_5913_object->add(16);
		var_5913_object->add(19);
	} else if(var_5915_int != 0) {
		var_5913_object->add(15);
	}
	
}


// @pe
void func_11993(bool var_5875_bool)
{
	int var_5878_int;
	func_105(var_5878_int, "d12q01KlaraVisit");
	if(var_5878_int != 0) {
		var_5875_bool = true;
		return 0;
	}
	var_5875_bool = false;
}


// @pe
void func_9949(int var_4962_int, float var_4963_float)
{
	float var_4967_float;
	var_4963_float = var_4967_float;
	int var_4964_int;
	func_12163(var_4964_int, 503175, 503174, var_4967_float);
	var_4964_int = var_4962_int;
}


void func_738(int var_451_int, bool var_452_bool)
{
	object var_455_object;
	@GetMainOutdoorScene(var_455_object);
	if(var_455_object == null)
		@Trace("City manager: Can't find main outdoor scene");
	var_455_object->EnableSubsets((var_451_int + 1), 200, var_452_bool, false);
}
EMIT "Stack[-2] = 0";


// @pe
void func_12005(bool var_5350_bool)
{
	int var_5353_int;
	func_105(var_5353_int, "d5RubinVisit");
	if(var_5353_int == 1)
		var_5350_bool = true;
	var_5350_bool = false;
}


// @pe
void func_9958(int var_5767_int, float var_5768_float)
{
	float var_5772_float;
	var_5768_float = var_5772_float;
	int var_5769_int;
	func_12163(var_5769_int, 522204, 522203, var_5772_float);
	var_5769_int = var_5767_int;
}


void func_3818(int var_3574_int, int var_3575_int, int var_3576_int)
{
	int var_3581_int; int var_3582_int; int var_3583_int; int var_3584_int;
	bool var_3585_bool = false;
	if(var_3576_int > 8) {
		if(var_3576_int < 21)
			var_3585_bool = true;
	}
	if(var_3585_bool != 0) {
		int var_3590_int;
		var_3574_int = var_3590_int;
		func_445(var_3590_int, "pers_rat", "rat.xml", 2);
		int var_3594_int;
		var_3574_int = var_3594_int;
		func_445(var_3594_int, "pers_alkash", "alkash.xml", 2);
		int var_3598_int;
		var_3574_int = var_3598_int;
		func_445(var_3598_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3603_float; int var_3604_int;
		func_1076(var_3603_float, var_3604_int);
		if((2 * var_3603_float) != 0) {
			int var_3606_int; int var_3609_int;
			var_3574_int = var_3606_int;
			var_3581_int = var_3609_int;
			func_445(var_3606_int, "pers_grabitel", "grabitel.xml", var_3609_int);
		}
		if((var_3604_int + 1) >= 2) {
			int var_3614_int;
			var_3574_int = var_3614_int;
			func_445(var_3614_int, "pers_patrool", "patrol.xml", 2);
			bool var_3618_bool; int var_3619_int;
			var_3575_int = var_3619_int;
			func_1283(var_3618_bool, var_3619_int);
			if(var_3618_bool != 0) {
				int var_3620_int;
				var_3574_int = var_3620_int;
				func_445(var_3620_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3625_float; int var_3626_int;
		var_3575_int = var_3626_int;
		func_1166(var_3625_float, var_3626_int);
		if((1 * var_3625_float) != 0) {
			int var_3628_int; int var_3631_int;
			var_3574_int = var_3628_int;
			var_3582_int = var_3631_int;
			func_445(var_3628_int, "pers_bomber", "bomber.xml", var_3631_int);
		}
	} else {
		int var_3645_int;
		var_3574_int = var_3645_int;
		func_445(var_3645_int, "pers_rat", "rat.xml", 4);
		int var_3649_int;
		var_3574_int = var_3649_int;
		func_445(var_3649_int, "pers_alkash", "alkash.xml", 1);
		int var_3653_int;
		var_3574_int = var_3653_int;
		func_445(var_3653_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3658_float; int var_3659_int;
		func_1076(var_3658_float, var_3659_int);
		if((3 * var_3658_float) != 0) {
			int var_3661_int; int var_3664_int;
			var_3574_int = var_3661_int;
			var_3583_int = var_3664_int;
			func_445(var_3661_int, "pers_grabitel", "grabitel.xml", var_3664_int);
		}
		if((var_3659_int + 1) >= 2) {
			int var_3669_int;
			var_3574_int = var_3669_int;
			func_445(var_3669_int, "pers_patrool", "patrol.xml", 1);
			bool var_3673_bool; int var_3674_int;
			var_3575_int = var_3674_int;
			func_1283(var_3673_bool, var_3674_int);
			if(var_3673_bool != 0) {
				int var_3675_int;
				var_3574_int = var_3675_int;
				func_445(var_3675_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3680_float; int var_3681_int;
		var_3575_int = var_3681_int;
		func_1166(var_3680_float, var_3681_int);
		if((1 * var_3680_float) == 0) goto Label_3980;
		int var_3683_int; int var_3686_int;
		var_3574_int = var_3683_int;
		var_3584_int = var_3686_int;
		func_445(var_3683_int, "pers_bomber", "bomber.xml", var_3686_int);
	}
Label_3980:
	bool var_3632_bool; int var_3633_int; int var_3634_int;
	var_3575_int = var_3633_int;
	var_3576_int = var_3634_int;
	func_1256(var_3632_bool, var_3633_int, var_3634_int);
	if(var_3632_bool != 0) {
		int var_3635_int;
		var_3574_int = var_3635_int;
		func_445(var_3635_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_3639_bool; int var_3640_int;
	var_3575_int = var_3640_int;
	func_1283(var_3639_bool, var_3640_int);
	if(var_3639_bool != 0) {
		int var_3641_int;
		var_3574_int = var_3641_int;
		func_445(var_3641_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_6895(int var_1740_int, int var_1741_int, object var_1742_object, object var_1743_object, object var_1744_object, object var_1745_object)
{
	if(var_1741_int == 0) {
		func_738(13, false);
		func_755(13, false, 1);
		int var_1753_int; int var_1754_int; object var_1755_object; object var_1756_object; object var_1757_object;
		var_1753_int = 13;
		var_1740_int = var_1754_int;
		var_1742_object = var_1755_object;
		var_1743_object = var_1756_object;
		var_1744_object = var_1757_object;
		func_564(var_1754_int, var_1755_object, var_1756_object, var_1757_object);
		object var_1758_object;
		var_1745_object = var_1758_object;
		func_248(var_1758_object, 0);
		func_812(13, false, 4);
		func_874(13, false, 4);
	}
	int var_1767_int;
	var_1741_int = var_1767_int;
	func_992(13, var_1767_int);
	int var_1769_int; int var_1770_int;
	var_1740_int = var_1769_int;
	var_1741_int = var_1770_int;
	func_1549(13, var_1769_int, var_1770_int);
}


// @pe
void func_5871(int var_1575_int, int var_1576_int, object var_1577_object, object var_1578_object, object var_1579_object, object var_1580_object)
{
	if(var_1576_int == 0) {
		func_738(8, false);
		func_755(8, false, 1);
		int var_1588_int; int var_1589_int; object var_1590_object; object var_1591_object; object var_1592_object;
		var_1588_int = 8;
		var_1575_int = var_1589_int;
		var_1577_object = var_1590_object;
		var_1578_object = var_1591_object;
		var_1579_object = var_1592_object;
		func_564(var_1589_int, var_1590_object, var_1591_object, var_1592_object);
		object var_1593_object;
		var_1580_object = var_1593_object;
		func_248(var_1593_object, 0);
		func_812(8, false, 4);
		func_874(8, false, 4);
	}
	int var_1602_int;
	var_1576_int = var_1602_int;
	func_925(8, var_1602_int);
	int var_1604_int; int var_1605_int;
	var_1575_int = var_1604_int;
	var_1576_int = var_1605_int;
	func_1549(8, var_1604_int, var_1605_int);
}


// @pe
void func_9967(int var_5406_int, float var_5407_float)
{
	float var_5411_float;
	var_5407_float = var_5411_float;
	int var_5408_int;
	func_12163(var_5408_int, 503177, 503176, var_5411_float);
	var_5408_int = var_5406_int;
}


// @pe
void func_12017(bool var_5382_bool)
{
	int var_5385_int;
	func_105(var_5385_int, "d6KapellaVisit");
	if(var_5385_int == 1)
		var_5382_bool = true;
	var_5382_bool = false;
}


void func_755(int var_527_int, bool var_528_bool, int var_529_int)
{
	string var_537_string; object var_538_object; int var_539_int; string var_540_string; object var_541_object; int var_542_int; object var_543_object;
	var_537_string = "street_rags" + (var_527_int + 1);
	if(var_528_bool != 0) {
		@GetMainOutdoorScene(var_538_object);
		if(var_538_object == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return 14;
		}
		var_539_int = 1;

		for(;;) {
			if(var_539_int <= var_529_int) {
				var_540_string = (var_537_string + "_") + var_539_int;
				@FindActor(var_541_object, var_540_string);
				if(!var_541_object) //@nz
					@AddActor(var_541_object, var_540_string, var_538_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "do_invis.xml");
				else
					var_541_object->RemoveOnUnload(false);
			var_538_object = null;
	} else {
			var_542_int = 1;

			for(;;) {
				if(!(var_542_int <= var_529_int)) goto Label_811;
				@FindActor(var_543_object, ((var_537_string + "_") + var_542_int));
				if(var_543_object != 0)
					var_543_object->RemoveOnUnload();
				var_543_object = null;
				var_542_int += 1;
			}
	}
	Label_811:
		return 14;

		}
		var_541_object = null;
		var_539_int += 1;
	}
	
}


// @pe
void func_9976(int var_5390_int, float var_5391_float)
{
	float var_5395_float;
	var_5391_float = var_5395_float;
	int var_5392_int;
	func_12163(var_5392_int, 503181, 503180, var_5395_float);
	var_5392_int = var_5390_int;
}


void func_14076(int var_5930_int)
{
	int var_5932_int;
	@GetVariable(("vol_" + var_5930_int), var_5932_int);
	@SetVariable(("vol_" + var_5930_int), (var_5932_int | 8));
}


// @pe
void func_12029(bool var_5366_bool)
{
	int var_5369_int;
	func_105(var_5369_int, "d6MariaVisit");
	if(var_5369_int == 1)
		var_5366_bool = true;
	var_5366_bool = false;
}


// @pe
void func_4865(int var_3546_int, int var_3547_int, object var_3548_object, object var_3549_object, object var_3550_object, object var_3551_object)
{
	if(var_3547_int == 0) {
		func_738(2, false);
		func_755(2, false, 1);
		int var_3560_int; object var_3561_object; object var_3562_object; object var_3563_object;
		var_3546_int = var_3560_int;
		var_3548_object = var_3561_object;
		var_3549_object = var_3562_object;
		var_3550_object = var_3563_object;
		func_662(2, var_3560_int, var_3561_object, var_3562_object, var_3563_object);
		object var_3564_object;
		var_3551_object = var_3564_object;
		func_248(var_3564_object, 2);
		func_812(2, false, 5);
		func_874(2, true, 5);
	}
	func_721(2, false);
	int var_3575_int; int var_3576_int;
	var_3546_int = var_3575_int;
	var_3547_int = var_3576_int;
	func_3818(2, var_3575_int, var_3576_int);
}


// @pe
void func_9985(int var_5374_int, float var_5375_float)
{
	float var_5379_float;
	var_5375_float = var_5379_float;
	int var_5376_int;
	func_12163(var_5376_int, 503179, 503178, var_5379_float);
	var_5376_int = var_5374_int;
}


void func_14088(void)
{
	object var_5909_object; int var_5912_int;
	@CreateIntVector(var_5909_object);
	object var_5913_object;
	var_5909_object = var_5913_object;
	func_14040(var_5913_object, false, -1);
	int var_5910_int;
	var_5909_object->size(var_5910_int);
	int var_5911_int = 0;
	
	while(var_5911_int < var_5910_int) {
		var_5909_object->get(var_5912_int, var_5911_int);
		int var_5930_int;
		var_5912_int = var_5930_int;
		func_14076(var_5930_int);
		var_5911_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


// @pe
void func_12041(bool var_5398_bool)
{
	int var_5401_int;
	func_105(var_5401_int, "d6BigVladVisit");
	if(var_5401_int == 1)
		var_5398_bool = true;
	var_5398_bool = false;
}


// @pe
void func_9994(int var_5040_int, float var_5041_float)
{
	float var_5045_float;
	var_5041_float = var_5045_float;
	int var_5042_int;
	func_12163(var_5042_int, 512530, 512529, var_5045_float);
	var_5042_int = var_5040_int;
}


// @pe
void func_10003(int var_5422_int, float var_5423_float)
{
	float var_5427_float;
	var_5423_float = var_5427_float;
	int var_5424_int;
	func_12163(var_5424_int, 515382, 515381, var_5427_float);
	var_5424_int = var_5422_int;
}


// @pe
void func_12053(bool var_5414_bool)
{
	int var_5417_int;
	func_105(var_5417_int, "d6ViktorVisit");
	if(var_5417_int == 1)
		var_5414_bool = true;
	var_5414_bool = false;
}


// @pe
void func_10012(int var_5446_int, float var_5447_float)
{
	float var_5451_float;
	var_5447_float = var_5451_float;
	int var_5448_int;
	func_12163(var_5448_int, 515433, 515432, var_5451_float);
	var_5448_int = var_5446_int;
}


// @pe
void func_14113(void)
{
	func_14088();
}


void func_1826(int var_1054_int, int var_1055_int, int var_1056_int)
{
	int var_1058_int;
	if((var_1055_int + 1) == 12)
		return 2;
	bool var_1063_bool = false;
	bool var_1064_bool = true;
	var_1066_bool = var_1056_int < 7;
	if(var_1066_bool != 1) {
		var_1068_bool = var_1056_int > 21;
		if(var_1068_bool != 1)
			var_1064_bool = false;
	}
	if(var_1064_bool != 0) {
		if(var_1055_int != 0)
			var_1063_bool = true;
	}
	if(var_1063_bool != 0) {
		float var_1071_float; int var_1072_int;
		var_1055_int = var_1072_int;
		func_1052(var_1071_float, var_1072_int);
		var_1071_float = var_1058_int;
		if(var_1058_int != 0) {
			int var_1074_int; int var_1077_int;
			var_1054_int = var_1074_int;
			var_1058_int = var_1077_int;
			func_445(var_1074_int, "pers_grabitel", "grabitel.xml", var_1077_int);
		}
	}
	bool var_1078_bool = false;
	bool var_1079_bool = false;
	if(var_1055_int == 0) {
		if(var_1056_int < 21)
			var_1079_bool = true;
	}
	if(var_1079_bool != 0) {
		int var_1084_int;
		func_12188(var_1084_int);
		if(var_1084_int == 1)
			var_1078_bool = true;
	}
	if(var_1078_bool != 0) {
		int var_1087_int;
		var_1054_int = var_1087_int;
		func_445(var_1087_int, "pers_unosha", "unosha_attacker.xml", 1);
		int var_1091_int;
		var_1054_int = var_1091_int;
		func_445(var_1091_int, "pers_unosha", "unosha2_attacker.xml", 1);
		int var_1095_int;
		var_1054_int = var_1095_int;
		func_445(var_1095_int, "pers_worker", "worker_attacker.xml", 1);
		int var_1099_int;
		var_1054_int = var_1099_int;
		func_445(var_1099_int, "pers_worker", "worker2_attacker.xml", 1);
		int var_1103_int;
		var_1054_int = var_1103_int;
		func_445(var_1103_int, "pers_woman", "woman.xml", 1);
		int var_1107_int;
		var_1054_int = var_1107_int;
		func_445(var_1107_int, "pers_alkash", "alkash.xml", 1);
		int var_1111_int;
		var_1054_int = var_1111_int;
		func_445(var_1111_int, "pers_girl", "girl.xml", 1);
		int var_1115_int;
		var_1054_int = var_1115_int;
		func_445(var_1115_int, "pers_girl", "girl2.xml", 1);
	} else {
			bool var_1156_bool = false;
			if(var_1056_int > 8) {
				if(var_1056_int < 21)
					var_1156_bool = true;
			}
			if(var_1156_bool == 0) goto Label_2032;
			int var_1161_int;
			var_1054_int = var_1161_int;
			func_445(var_1161_int, "pers_woman", "woman.xml", 1);
			int var_1165_int;
			var_1054_int = var_1165_int;
			func_445(var_1165_int, "pers_unosha", "unosha.xml", 1);
			int var_1169_int;
			var_1054_int = var_1169_int;
			func_445(var_1169_int, "pers_unosha", "unosha2.xml", 1);
			int var_1173_int;
			var_1054_int = var_1173_int;
			func_445(var_1173_int, "pers_worker", "worker.xml", 1);
			int var_1177_int;
			var_1054_int = var_1177_int;
			func_445(var_1177_int, "pers_worker", "worker2.xml", 1);
			int var_1181_int;
			var_1054_int = var_1181_int;
			func_445(var_1181_int, "pers_alkash", "alkash.xml", 1);
			int var_1185_int;
			var_1054_int = var_1185_int;
			func_445(var_1185_int, "pers_girl", "girl.xml", 1);
			int var_1189_int;
			var_1054_int = var_1189_int;
			func_445(var_1189_int, "pers_girl", "girl2.xml", 1);
			if((var_1055_int + 1) >= 3) {
				int var_1197_int;
				var_1054_int = var_1197_int;
				func_445(var_1197_int, "pers_dohodyaga", "dohodyaga.xml", 1);
			}
			if((var_1055_int + 1) >= 7) {
				int var_1205_int;
				var_1054_int = var_1205_int;
				func_445(var_1205_int, "pers_butcher", "butcher.xml", 2);
			}
	}
Label_2098:
	for(;;) {
		bool var_1119_bool = false;
		bool var_1120_bool = false;
		if(var_1055_int == 0) {
			if(var_1056_int > 12)
				var_1120_bool = true;
		}
		if(var_1120_bool != 0) {
			if(var_1056_int < 22)
				var_1119_bool = true;
		}
		if(var_1119_bool != 0) {
			int var_1127_int;
			var_1054_int = var_1127_int;
			func_445(var_1127_int, "pers_woman", "woman_killme.xml", 1);
		}
		bool var_1131_bool; int var_1132_int; int var_1133_int;
		var_1055_int = var_1132_int;
		var_1056_int = var_1133_int;
		func_1256(var_1131_bool, var_1132_int, var_1133_int);
		if(var_1131_bool != 0) {
			int var_1138_int;
			var_1054_int = var_1138_int;
			func_445(var_1138_int, "pers_soldat", "soldier_marauder.xml", 2);
		}
		bool var_1142_bool; int var_1143_int; int var_1144_int;
		var_1055_int = var_1143_int;
		var_1056_int = var_1144_int;
		func_1266(var_1142_bool, var_1143_int, var_1144_int);
		if(var_1142_bool != 0) {
			int var_1152_int;
			var_1054_int = var_1152_int;
			func_445(var_1152_int, "pers_nudegirl", "nudegirl.xml", 1);
		}
		return 2;

	}
	
Label_2032:
	int var_1209_int;
	var_1054_int = var_1209_int;
	func_445(var_1209_int, "pers_woman", "woman.xml", 1);
	int var_1213_int;
	var_1054_int = var_1213_int;
	func_445(var_1213_int, "pers_unosha", "unosha.xml", 1);
	int var_1217_int;
	var_1054_int = var_1217_int;
	func_445(var_1217_int, "pers_unosha", "unosha2.xml", 1);
	int var_1221_int;
	var_1054_int = var_1221_int;
	func_445(var_1221_int, "pers_worker", "worker.xml", 1);
	int var_1225_int;
	var_1054_int = var_1225_int;
	func_445(var_1225_int, "pers_worker", "worker2.xml", 1);
	int var_1229_int;
	var_1054_int = var_1229_int;
	func_445(var_1229_int, "pers_alkash", "alkash.xml", 1);
	if((var_1055_int + 1) >= 3) {
		int var_1237_int;
		var_1054_int = var_1237_int;
		func_445(var_1237_int, "pers_dohodyaga", "dohodyaga.xml", 1);
	}
	if(!((var_1055_int + 1) >= 7)) goto Label_2098;
	int var_1245_int;
	var_1054_int = var_1245_int;
	func_445(var_1245_int, "pers_butcher", "butcher.xml", 3);
}


// @pe
void func_6947(int var_2976_int, int var_2977_int, object var_2978_object, object var_2979_object, object var_2980_object, object var_2981_object)
{
	if(var_2977_int == 0) {
		func_738(13, true);
		func_755(13, true, 1);
		int var_2990_int; object var_2991_object; object var_2992_object; object var_2993_object;
		var_2976_int = var_2990_int;
		var_2978_object = var_2991_object;
		var_2979_object = var_2992_object;
		var_2980_object = var_2993_object;
		func_583(13, var_2990_int, var_2991_object, var_2992_object, var_2993_object);
		object var_2994_object;
		var_2981_object = var_2994_object;
		func_248(var_2994_object, 1);
		func_812(13, true, 4);
		func_874(13, false, 4);
	}
	func_721(13, false);
	int var_3005_int; int var_3006_int;
	var_2976_int = var_3005_int;
	var_2977_int = var_3006_int;
	func_2735(13, var_3005_int, var_3006_int);
}


// @pe
void func_5923(int var_2811_int, int var_2812_int, object var_2813_object, object var_2814_object, object var_2815_object, object var_2816_object)
{
	if(var_2812_int == 0) {
		func_738(8, true);
		func_755(8, true, 1);
		int var_2825_int; object var_2826_object; object var_2827_object; object var_2828_object;
		var_2811_int = var_2825_int;
		var_2813_object = var_2826_object;
		var_2814_object = var_2827_object;
		var_2815_object = var_2828_object;
		func_583(8, var_2825_int, var_2826_object, var_2827_object, var_2828_object);
		object var_2829_object;
		var_2816_object = var_2829_object;
		func_248(var_2829_object, 1);
		func_812(8, true, 4);
		func_874(8, false, 4);
	}
	func_721(8, false);
	int var_2840_int; int var_2841_int;
	var_2811_int = var_2840_int;
	var_2812_int = var_2841_int;
	func_2735(8, var_2840_int, var_2841_int);
}


// @pe
void func_12065(bool var_5438_bool)
{
	int var_5441_int;
	func_105(var_5441_int, "d7AglajaVisit");
	if(var_5441_int == 1)
		var_5438_bool = true;
	var_5438_bool = false;
}


void func_14117(void)
{
}


// @pe
void func_14118(bool var_142_bool, int var_143_int)
{
	if(var_143_int == 6) {
		var_142_bool = false;
		return 0;
	}
	bool var_146_bool;
	func_226(var_146_bool, 4);
	if(var_146_bool != 0) {
		if(var_143_int == 15) {
			var_142_bool = false;
			return 0;
		}
		if(var_143_int == 9) {
			var_142_bool = false;
			return 0;
		}
	} else {
			bool var_158_bool;
			func_226(var_158_bool, 5);
			if(var_158_bool == 0) goto Label_14151;
			if(var_143_int == 15) {
				var_142_bool = false;
				return 0;
			}
	}
Label_14161:
	for(;;) {
		var_142_bool = true;
		return 0;

	}
	
Label_14151:
	bool var_162_bool;
	func_226(var_162_bool, 6);
	if(var_162_bool == 0) goto Label_14161;
	if(!(var_143_int == 15)) goto Label_14161;
	var_142_bool = false;
}


// @pe
void func_10021(int var_5775_int, float var_5776_float)
{
	float var_5780_float;
	var_5776_float = var_5780_float;
	int var_5777_int;
	func_12163(var_5777_int, 522206, 522205, var_5780_float);
	var_5777_int = var_5775_int;
}


void func_812(int var_638_int, bool var_639_bool, int var_640_int)
{
	string var_649_string; object var_650_object; int var_651_int; string var_652_string; object var_653_object; int var_654_int; string var_655_string; object var_656_object;
	var_649_string = "dr_mark" + (var_638_int + 1);
	if(var_639_bool != 0) {
		@GetMainOutdoorScene(var_650_object);
		if(var_650_object == null) {
			@Trace("City manager: Can't find main outdoor scene");
			return 16;
		}
		var_651_int = 1;

		for(;;) {
			if(var_651_int <= var_640_int) {
				var_652_string = (var_649_string + "_") + var_651_int;
				@FindActor(var_653_object, var_652_string);
				if(!var_653_object) { //@nz
					@AddActor(var_653_object, var_652_string, var_650_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "disease_object.xml");
				} else {
				bool var_671_bool; string var_672_string;
				var_652_string = var_672_string;
				func_167(var_671_bool, var_672_string, "restore");
			}
			var_650_object = null;
	} else {
			var_654_int = 1;

			for(;;) {
				if(!(var_654_int <= var_640_int)) goto Label_873;
				@FindActor(var_656_object, ((var_649_string + "_") + var_654_int));
				if(var_656_object != 0) {
					bool var_681_bool; string var_682_string;
					var_655_string = var_682_string;
					func_167(var_681_bool, var_682_string, "cleanup");
				}
				var_656_object = null;
				var_654_int += 1;
			}
	}
	Label_873:
		return 16;

		}
		var_653_object = null;
		var_651_int += 1;
	}
	
}


// @pe
void func_12077(bool var_5462_bool)
{
	int var_5465_int;
	func_105(var_5465_int, "d11AglajaVisit");
	if(var_5465_int == 1)
		var_5462_bool = true;
	var_5462_bool = false;
}


// @pe
void func_10030(int var_5454_int, float var_5455_float)
{
	float var_5459_float;
	var_5455_float = var_5459_float;
	int var_5456_int;
	func_12163(var_5456_int, 515439, 515438, var_5459_float);
	var_5456_int = var_5454_int;
}


// @pe
void func_4917(object var_97_object)
{
	var_97_object->add("house5_02");
	var_97_object->add("dt_house1_union2_03l");
	var_97_object->add("dt_house1_union2_03r");
	var_97_object->add("dt_house1_union2_01l");
	var_97_object->add("dt_house1_union2_01r");
	var_97_object->add("house5_unoinl");
	var_97_object->add("house5_unoinr");
	var_97_object->add("dt_house_1_01");
	var_97_object->add("house5_05");
	var_97_object->add("house5_06");
	var_97_object->add("dt_house_1_02");
	var_97_object->add("house5_unoin_solid01l");
	var_97_object->add("house5_unoin_solid01r");
	var_97_object->add("house5_03");
	var_97_object->add("house5_04");
	var_97_object->add("house1_se_02l");
	var_97_object->add("house1_se_02r");
	var_97_object->add("dt_house3_01_i2");
	var_97_object->add("dt_house3_02_i2");
	var_97_object->add("dt_house3_02");
	var_97_object->add("dt_house3_03_i2");
	var_97_object->add("dt_house3_03");
	var_97_object->add("dt_house3_04_i2");
	var_97_object->add("house5_21");
}


// @pe
void func_10039(int var_5430_int, float var_5431_float)
{
	float var_5435_float;
	var_5431_float = var_5435_float;
	int var_5432_int;
	func_12163(var_5432_int, 515431, 515430, var_5435_float);
	var_5432_int = var_5430_int;
}


// @pe
void func_12089(bool var_5495_bool)
{
	var_5495_bool = false;
}


void func_12092(void)
{
	object var_4601_object;
	@CreateDiaryEntry(var_4601_object, 30, 0, 504079);
	bool var_4605_bool; object var_4606_object;
	var_4601_object = var_4606_object;
	func_12118(var_4605_bool, var_4606_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_10048(int var_5695_int, float var_5696_float)
{
	float var_5700_float;
	var_5696_float = var_5700_float;
	int var_5697_int;
	func_12163(var_5697_int, 533228, 533227, var_5700_float);
	var_5697_int = var_5695_int;
}


void func_11074(void)
{
	object var_4921_object;
	func_12171(var_4921_object);
	object var_4919_object;
	var_4921_object = var_4919_object;
	object var_4920_object;
	var_4919_object->FindMark(var_4920_object, "d5q01AlexandrGotoKaterina");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	var_4919_object->FindMark(var_4920_object, "d5q01BigVladGotoAlexandr");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	var_4919_object->FindMark(var_4920_object, "d5q01BigVladGotoLara");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	var_4919_object->FindMark(var_4920_object, "d5q01BurahMeeting");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	var_4919_object->FindMark(var_4920_object, "d5q01GrifWantsMoney");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	var_4919_object->FindMark(var_4920_object, "d5q01PatrolGotoGrif");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	var_4919_object->FindMark(var_4920_object, "d5q01RubinGotoBigVlad");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	var_4919_object->FindMark(var_4920_object, "d5q01RubinGotoBigVladSelf");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	var_4919_object->FindMark(var_4920_object, "d5q02AnnaGotoGorbun");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	var_4919_object->FindMark(var_4920_object, "d5q02AnnaGotoGorbunSelf");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	var_4919_object->FindMark(var_4920_object, "d5q02AnnaGotoKabak");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	var_4919_object->FindMark(var_4920_object, "d5q02GorbunFindTheDaughter");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	var_4919_object->FindMark(var_4920_object, "d5q02NudeMeeting");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	var_4919_object->FindMark(var_4920_object, "d5q03BirdmaskBringMoneySelf");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	var_4919_object->FindMark(var_4920_object, "d5q03BirdmaskGotoMladVlad");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	var_4919_object->FindMark(var_4920_object, "d5q03BirdmaskGotoViktor");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	var_4919_object->FindMark(var_4920_object, "d5q03SavePrisoners");
	if(var_4920_object != 0)
		var_4920_object->Remove();
	bool var_4956_bool;
	func_12146(var_4956_bool, 139);
	bool var_4958_bool;
	func_12146(var_4958_bool, 148);
	bool var_4960_bool;
	func_12146(var_4960_bool, 154);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_12105(object var_4614_object)
{
	object var_4616_object;
	@GetDiaryRoot(var_4616_object);
	if(!var_4616_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_4614_object = false;
	}
	var_4616_object = var_4614_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_10057(int var_5966_int, float var_5967_float)
{
	float var_5971_float;
	var_5967_float = var_5971_float;
	int var_5968_int;
	func_12163(var_5968_int, 536365, 536364, var_5971_float);
	var_5968_int = var_5966_int;
}


// @pe
void func_10066(int var_5783_int, float var_5784_float)
{
	float var_5788_float;
	var_5784_float = var_5788_float;
	int var_5785_int;
	func_12163(var_5785_int, 522208, 522207, var_5788_float);
	var_5785_int = var_5783_int;
}


void func_14163(int var_4525_int, int var_4526_int)
{
	object var_4530_object; object var_4531_object;
	@Trace((("Updating game " + var_4525_int) + " ") + var_4526_int);
	bool var_4537_bool = false;
	if(var_4525_int == 5) {
		if(var_4526_int == 0)
			var_4537_bool = true;
	}
	if(var_4537_bool != 0) {
		@FindActor(var_4530_object, "house7_03@door1");
		var_4530_object->SetProperty("lp", true);
		@FindActor(var_4530_object, "house7_03@door2");
		var_4530_object->SetProperty("lp", true);
		var_4530_object = null;
	} else {
		bool var_4548_bool = false;
		if(var_4525_int == 7) {
			if(var_4526_int == 0)
				var_4548_bool = true;
		}
		if(var_4548_bool == 0) goto Label_14214;
		@GetSceneByName(var_4531_object, "sobor");
		@Trigger(var_4531_object, "aglaja");
		var_4531_object = null;
	}
Label_14214:
	
}


void func_12118(bool var_4605_bool, object var_4606_object, int var_4607_int)
{
	object var_4614_object;
	func_12105(var_4614_object);
	object var_4611_object;
	var_4614_object = var_4611_object;
	object var_4612_object;
	var_4611_object->Find(var_4607_int, var_4612_object);
	if(!var_4612_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_4607_int);
		var_4605_bool = false;
	}
	var_4612_object->AddChild(var_4606_object);
	@SendWorldWndMessage(7);
	int var_4613_int;
	var_4606_object->GetCategory(var_4613_int);
	@SetDiarySection(var_4613_int);
	var_4605_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_6999(int var_4106_int, int var_4107_int, object var_4108_object, object var_4109_object, object var_4110_object, object var_4111_object)
{
	if(var_4107_int == 0) {
		func_738(13, false);
		func_755(13, false, 1);
		int var_4120_int; object var_4121_object; object var_4122_object; object var_4123_object;
		var_4106_int = var_4120_int;
		var_4108_object = var_4121_object;
		var_4109_object = var_4122_object;
		var_4110_object = var_4123_object;
		func_662(13, var_4120_int, var_4121_object, var_4122_object, var_4123_object);
		object var_4124_object;
		var_4111_object = var_4124_object;
		func_248(var_4124_object, 2);
		func_812(13, false, 4);
		func_874(13, true, 4);
	}
	func_721(13, false);
	int var_4135_int; int var_4136_int;
	var_4106_int = var_4135_int;
	var_4107_int = var_4136_int;
	func_3630(13, var_4135_int, var_4136_int);
}


// @pe
void func_5975(int var_3941_int, int var_3942_int, object var_3943_object, object var_3944_object, object var_3945_object, object var_3946_object)
{
	if(var_3942_int == 0) {
		func_738(8, false);
		func_755(8, false, 1);
		int var_3955_int; object var_3956_object; object var_3957_object; object var_3958_object;
		var_3941_int = var_3955_int;
		var_3943_object = var_3956_object;
		var_3944_object = var_3957_object;
		var_3945_object = var_3958_object;
		func_662(8, var_3955_int, var_3956_object, var_3957_object, var_3958_object);
		object var_3959_object;
		var_3946_object = var_3959_object;
		func_248(var_3959_object, 2);
		func_812(8, false, 4);
		func_874(8, true, 4);
	}
	func_721(8, false);
	int var_3970_int; int var_3971_int;
	var_3941_int = var_3970_int;
	var_3942_int = var_3971_int;
	func_3630(8, var_3970_int, var_3971_int);
}


// @pe
void func_10075(int var_6129_int, float var_6130_float)
{
	float var_6134_float;
	var_6130_float = var_6134_float;
	int var_6131_int;
	func_12163(var_6131_int, 538406, 538405, var_6134_float);
	var_6131_int = var_6129_int;
}


void func_2915(int var_2445_int, int var_2446_int, int var_2447_int)
{
	int var_2450_int; int var_2451_int;
	bool var_2452_bool = false;
	if(var_2447_int > 8) {
		if(var_2447_int < 21)
			var_2452_bool = true;
	}
	if(var_2452_bool != 0) {
		int var_2457_int;
		var_2445_int = var_2457_int;
		func_445(var_2457_int, "pers_vaxxabit", "vaxxabit_d.xml", 6);
		int var_2461_int;
		var_2445_int = var_2461_int;
		func_445(var_2461_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 6);
		int var_2465_int;
		var_2445_int = var_2465_int;
		func_445(var_2465_int, "pers_rat_big", "rat_big.xml", 2);
		int var_2469_int;
		var_2445_int = var_2469_int;
		func_471(var_2469_int, "fog", "fog.xml", 6);
		if(var_2446_int >= 5) {
			int var_2475_int;
			var_2445_int = var_2475_int;
			func_471(var_2475_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2480_float; int var_2481_int;
		func_1166(var_2480_float, var_2481_int);
		if((1 * var_2480_float) != 0) {
			int var_2483_int; int var_2486_int;
			var_2445_int = var_2483_int;
			var_2450_int = var_2486_int;
			func_445(var_2483_int, "pers_bomber", "bomber.xml", var_2486_int);
		}
	} else {
		int var_2531_int;
		var_2445_int = var_2531_int;
		func_445(var_2531_int, "pers_vaxxabit", "vaxxabit_d.xml", 5);
		int var_2535_int;
		var_2445_int = var_2535_int;
		func_445(var_2535_int, "pers_vaxxabitka", "vaxxabitka_d.xml", 5);
		int var_2539_int;
		var_2445_int = var_2539_int;
		func_445(var_2539_int, "pers_rat_big", "rat_big.xml", 3);
		int var_2543_int;
		var_2445_int = var_2543_int;
		func_471(var_2543_int, "fog", "fog.xml", 6);
		if(var_2481_int >= 5) {
			int var_2549_int;
			var_2445_int = var_2549_int;
			func_471(var_2549_int, "fog", "fog_hunter.xml", 2);
		}
		float var_2554_float; int var_2555_int;
		var_2446_int = var_2555_int;
		func_1166(var_2554_float, var_2555_int);
		if((1 * var_2554_float) == 0) goto Label_3033;
		int var_2557_int; int var_2560_int;
		var_2445_int = var_2557_int;
		var_2451_int = var_2560_int;
		func_445(var_2557_int, "pers_bomber", "bomber.xml", var_2560_int);
	}
Label_3033:
	int var_2487_int;
	var_2445_int = var_2487_int;
	func_458(var_2487_int, "pers_worker", "agony1_man.xml", 2, 4, 4);
	int var_2493_int;
	var_2445_int = var_2493_int;
	func_458(var_2493_int, "pers_unosha", "agony1_man.xml", 2, 4, 4);
	int var_2499_int;
	var_2445_int = var_2499_int;
	func_458(var_2499_int, "pers_woman", "agony1_woman.xml", 2, 4, 4);
	int var_2505_int;
	var_2445_int = var_2505_int;
	func_458(var_2505_int, "pers_wasted_girl", "agony1_woman.xml", 2, 4, 4);
	bool var_2511_bool; int var_2512_int; int var_2513_int;
	var_2446_int = var_2512_int;
	var_2447_int = var_2513_int;
	func_1256(var_2511_bool, var_2512_int, var_2513_int);
	if(var_2511_bool != 0) {
		int var_2514_int;
		var_2445_int = var_2514_int;
		func_445(var_2514_int, "pers_soldat", "soldier_marauder.xml", 2);
	}
	bool var_2518_bool; int var_2519_int; int var_2520_int;
	var_2446_int = var_2519_int;
	var_2447_int = var_2520_int;
	func_1266(var_2518_bool, var_2519_int, var_2520_int);
	if(var_2518_bool != 0) {
		int var_2521_int;
		var_2445_int = var_2521_int;
		func_445(var_2521_int, "pers_nudegirl", "nudegirl.xml", 1);
	}
	bool var_2525_bool; int var_2526_int;
	var_2446_int = var_2526_int;
	func_1283(var_2525_bool, var_2526_int);
	if(var_2525_bool != 0) {
		int var_2527_int;
		var_2445_int = var_2527_int;
		func_445(var_2527_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_10084(int var_5711_int, float var_5712_float)
{
	float var_5716_float;
	var_5712_float = var_5716_float;
	int var_5713_int;
	func_12163(var_5713_int, 533323, 533322, var_5716_float);
	var_5713_int = var_5711_int;
}


void func_874(int var_685_int, bool var_686_bool, int var_687_int)
{
	object var_695_object; object var_696_object; string var_698_string; object var_699_object;
	@FindActor(var_695_object, ("br_" + (var_685_int + 1)));
	if(var_686_bool != 0) {
		if(!var_695_object) { //@nz
			@GetMainOutdoorScene(var_696_object);
			@AddActor(var_695_object, ("br_" + (var_685_int + 1)), var_696_object, [0.0, 0.0, 0.0]);
			var_696_object = null;
		}
	} else if(var_695_object != 0) {
		@RemoveActor(var_695_object);
	}
	int var_697_int = 1;
	
	while(var_697_int <= var_687_int) {
		@FindActor(var_699_object, ((("dr_mark" + (var_685_int + 1)) + "_") + var_697_int));
		if(var_699_object != 0) {
			bool var_718_bool; string var_719_string;
			var_698_string = var_719_string;
			func_167(var_718_bool, var_719_string, "cleanup");
		}
		var_699_object = null;
		var_697_int += 1;
	}
	
	
}
EMIT "Stack[-5] = 0";


// @pe
void func_10093(int var_6145_int, float var_6146_float)
{
	float var_6150_float;
	var_6146_float = var_6150_float;
	int var_6147_int;
	func_12163(var_6147_int, 538721, 538720, var_6150_float);
	var_6147_int = var_6145_int;
}


void func_12146(bool var_4612_bool, int var_4613_int)
{
	object var_4618_object;
	func_12105(var_4618_object);
	object var_4616_object;
	var_4618_object = var_4616_object;
	object var_4617_object;
	var_4616_object->Find(var_4613_int, var_4617_object);
	if(!var_4617_object) //@nz
		var_4612_bool = false;
	var_4617_object->Remove();
	var_4612_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_9076(int var_1998_int, int var_1999_int, int var_2000_int)
{
	var_2009_object = GlobalVars[8];
	object var_2005_object;
	var_2009_object->get(var_2005_object, var_1998_int);
	var_2010_object = GlobalVars[9];
	object var_2006_object;
	var_2010_object->get(var_2006_object, var_1998_int);
	var_2011_object = GlobalVars[10];
	object var_2007_object;
	var_2011_object->get(var_2007_object, var_1998_int);
	var_2012_object = GlobalVars[13];
	object var_2008_object;
	var_2012_object->get(var_2008_object, var_1998_int);
	if(var_1998_int == 0) {
		int var_2015_int; int var_2016_int; object var_2017_object; object var_2018_object; object var_2019_object; object var_2020_object;
		var_1999_int = var_2015_int;
		var_2000_int = var_2016_int;
		var_2005_object = var_2017_object;
		var_2006_object = var_2018_object;
		var_2007_object = var_2019_object;
		var_2008_object = var_2020_object;
		func_4410(var_2015_int, var_2016_int, var_2017_object, var_2018_object, var_2019_object, var_2020_object);
	} else if(var_1998_int == 1) {
			int var_2285_int; int var_2286_int; object var_2287_object; object var_2288_object; object var_2289_object; object var_2290_object;
			var_1999_int = var_2285_int;
			var_2000_int = var_2286_int;
			var_2005_object = var_2287_object;
			var_2006_object = var_2288_object;
			var_2007_object = var_2289_object;
			var_2008_object = var_2290_object;
			func_4607(var_2285_int, var_2286_int, var_2287_object, var_2288_object, var_2289_object, var_2290_object);
	}

	for(;;) {
		return 8;

	}
	
	if(var_1998_int == 2) {
		int var_2417_int; int var_2418_int; object var_2419_object; object var_2420_object; object var_2421_object; object var_2422_object;
		var_1999_int = var_2417_int;
		var_2000_int = var_2418_int;
		var_2005_object = var_2419_object;
		var_2006_object = var_2420_object;
		var_2007_object = var_2421_object;
		var_2008_object = var_2422_object;
		func_4813(var_2417_int, var_2418_int, var_2419_object, var_2420_object, var_2421_object, var_2422_object);
	} else if(var_1998_int == 3) {
		int var_2563_int; int var_2564_int; object var_2565_object; object var_2566_object; object var_2567_object; object var_2568_object;
		var_1999_int = var_2563_int;
		var_2000_int = var_2564_int;
		var_2005_object = var_2565_object;
		var_2006_object = var_2566_object;
		var_2007_object = var_2567_object;
		var_2008_object = var_2568_object;
		func_5043(var_2563_int, var_2564_int, var_2565_object, var_2566_object, var_2567_object, var_2568_object);
	} else if(var_1998_int == 4) {
		int var_2596_int; int var_2597_int; object var_2598_object; object var_2599_object; object var_2600_object; object var_2601_object;
		var_1999_int = var_2596_int;
		var_2000_int = var_2597_int;
		var_2005_object = var_2598_object;
		var_2006_object = var_2599_object;
		var_2007_object = var_2600_object;
		var_2008_object = var_2601_object;
		func_5261(var_2596_int, var_2597_int, var_2598_object, var_2599_object, var_2600_object, var_2601_object);
	} else if(var_1998_int == 5) {
		int var_2629_int; int var_2630_int; object var_2631_object; object var_2632_object; object var_2633_object; object var_2634_object;
		var_1999_int = var_2629_int;
		var_2000_int = var_2630_int;
		var_2005_object = var_2631_object;
		var_2006_object = var_2632_object;
		var_2007_object = var_2633_object;
		var_2008_object = var_2634_object;
		func_5500(var_2629_int, var_2630_int, var_2631_object, var_2632_object, var_2633_object, var_2634_object);
	} else if(var_1998_int == 6) {
		int var_2662_int; int var_2663_int; object var_2664_object; object var_2665_object; object var_2666_object; object var_2667_object;
		var_1999_int = var_2662_int;
		var_2000_int = var_2663_int;
		var_2005_object = var_2664_object;
		var_2006_object = var_2665_object;
		var_2007_object = var_2666_object;
		var_2008_object = var_2667_object;
		func_5613();
	} else if(var_1998_int == 7) {
		int var_2672_int; int var_2673_int; object var_2674_object; object var_2675_object; object var_2676_object; object var_2677_object;
		var_1999_int = var_2672_int;
		var_2000_int = var_2673_int;
		var_2005_object = var_2674_object;
		var_2006_object = var_2675_object;
		var_2007_object = var_2676_object;
		var_2008_object = var_2677_object;
		func_5723(var_2672_int, var_2673_int, var_2674_object, var_2675_object, var_2676_object, var_2677_object);
	} else if(var_1998_int == 8) {
		int var_2811_int; int var_2812_int; object var_2813_object; object var_2814_object; object var_2815_object; object var_2816_object;
		var_1999_int = var_2811_int;
		var_2000_int = var_2812_int;
		var_2005_object = var_2813_object;
		var_2006_object = var_2814_object;
		var_2007_object = var_2815_object;
		var_2008_object = var_2816_object;
		func_5923(var_2811_int, var_2812_int, var_2813_object, var_2814_object, var_2815_object, var_2816_object);
	} else if(var_1998_int == 9) {
		int var_2844_int; int var_2845_int; object var_2846_object; object var_2847_object; object var_2848_object; object var_2849_object;
		var_1999_int = var_2844_int;
		var_2000_int = var_2845_int;
		var_2005_object = var_2846_object;
		var_2006_object = var_2847_object;
		var_2007_object = var_2848_object;
		var_2008_object = var_2849_object;
		func_6126(var_2844_int, var_2845_int, var_2846_object, var_2847_object, var_2848_object, var_2849_object);
	} else if(var_1998_int == 10) {
		int var_2877_int; int var_2878_int; object var_2879_object; object var_2880_object; object var_2881_object; object var_2882_object;
		var_1999_int = var_2877_int;
		var_2000_int = var_2878_int;
		var_2005_object = var_2879_object;
		var_2006_object = var_2880_object;
		var_2007_object = var_2881_object;
		var_2008_object = var_2882_object;
		func_6335(var_2877_int, var_2878_int, var_2879_object, var_2880_object, var_2881_object, var_2882_object);
	} else if(var_1998_int == 11) {
		int var_2910_int; int var_2911_int; object var_2912_object; object var_2913_object; object var_2914_object; object var_2915_object;
		var_1999_int = var_2910_int;
		var_2000_int = var_2911_int;
		var_2005_object = var_2912_object;
		var_2006_object = var_2913_object;
		var_2007_object = var_2914_object;
		var_2008_object = var_2915_object;
		func_6547(var_2910_int, var_2911_int, var_2912_object, var_2913_object, var_2914_object, var_2915_object);
	} else if(var_1998_int == 12) {
		int var_2943_int; int var_2944_int; object var_2945_object; object var_2946_object; object var_2947_object; object var_2948_object;
		var_1999_int = var_2943_int;
		var_2000_int = var_2944_int;
		var_2005_object = var_2945_object;
		var_2006_object = var_2946_object;
		var_2007_object = var_2947_object;
		var_2008_object = var_2948_object;
		func_6744(var_2943_int, var_2944_int, var_2945_object, var_2946_object, var_2947_object, var_2948_object);
	} else if(var_1998_int == 13) {
		int var_2976_int; int var_2977_int; object var_2978_object; object var_2979_object; object var_2980_object; object var_2981_object;
		var_1999_int = var_2976_int;
		var_2000_int = var_2977_int;
		var_2005_object = var_2978_object;
		var_2006_object = var_2979_object;
		var_2007_object = var_2980_object;
		var_2008_object = var_2981_object;
		func_6947(var_2976_int, var_2977_int, var_2978_object, var_2979_object, var_2980_object, var_2981_object);
	} else if(var_1998_int == 14) {
		int var_3009_int; int var_3010_int; object var_3011_object; object var_3012_object; object var_3013_object; object var_3014_object;
		var_1999_int = var_3009_int;
		var_2000_int = var_3010_int;
		var_2005_object = var_3011_object;
		var_2006_object = var_3012_object;
		var_2007_object = var_3013_object;
		var_2008_object = var_3014_object;
		func_7147(var_3009_int, var_3010_int, var_3011_object, var_3012_object, var_3013_object, var_3014_object);
	} else if(var_1998_int == 15) {
		int var_3148_int; int var_3149_int; object var_3150_object; object var_3151_object; object var_3152_object; object var_3153_object;
		var_1999_int = var_3148_int;
		var_2000_int = var_3149_int;
		var_2005_object = var_3150_object;
		var_2006_object = var_3151_object;
		var_2007_object = var_3152_object;
		var_2008_object = var_3153_object;
		func_7329(var_3148_int, var_3149_int, var_3150_object, var_3151_object, var_3152_object, var_3153_object);
	}
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


// @pe
void func_10102(int var_6031_int, float var_6032_float)
{
	float var_6036_float;
	var_6032_float = var_6036_float;
	int var_6033_int;
	func_12163(var_6033_int, 536369, 536368, var_6036_float);
	var_6033_int = var_6031_int;
}


// @pe
void func_4991(int var_1251_int, int var_1252_int, object var_1253_object, object var_1254_object, object var_1255_object, object var_1256_object)
{
	if(var_1252_int == 0) {
		func_738(3, false);
		func_755(3, false, 1);
		int var_1264_int; int var_1265_int; object var_1266_object; object var_1267_object; object var_1268_object;
		var_1264_int = 3;
		var_1251_int = var_1265_int;
		var_1253_object = var_1266_object;
		var_1254_object = var_1267_object;
		var_1255_object = var_1268_object;
		func_564(var_1265_int, var_1266_object, var_1267_object, var_1268_object);
		object var_1269_object;
		var_1256_object = var_1269_object;
		func_248(var_1269_object, 0);
		func_812(3, false, 7);
		func_874(3, false, 7);
	}
	int var_1278_int;
	var_1252_int = var_1278_int;
	func_925(3, var_1278_int);
	int var_1295_int; int var_1296_int;
	var_1251_int = var_1295_int;
	var_1252_int = var_1296_int;
	func_1826(3, var_1295_int, var_1296_int);
}


// @pe
void func_10111(int var_5791_int, float var_5792_float)
{
	float var_5796_float;
	var_5792_float = var_5796_float;
	int var_5793_int;
	func_12163(var_5793_int, 522210, 522209, var_5796_float);
	var_5793_int = var_5791_int;
}


void func_12163(int var_4655_int, int var_4656_int, int var_4657_int, float var_4658_float)
{
	int var_4660_int;
	@AddMessage(var_4656_int, var_4657_int, var_4658_float, var_4660_int);
	@SendWorldWndMessage(6);
	var_4660_int = var_4655_int;
}


void func_14215(int var_23_int)
{
	int var_31_int; int var_32_int; int var_34_int; int var_35_int;
	@Trace("Disease update");
	int var_30_int = 0;
	if(var_23_int == 0) {
		var_30_int = 0;
	} else {
						if(var_23_int == 1)
							var_30_int = 0;
	}

	for(;;) {
		if((var_23_int + 1) != 12) {
			@Trace("Diseased regions : " + var_30_int);

			for(;;) {
				if(0 < 16) {
					bool var_47_bool; int var_48_int;
					var_31_int = var_48_int;
					func_372(var_47_bool, var_48_int);
					if(var_47_bool != 0) {
						int var_59_int;
						var_31_int = var_59_int;
						func_414(var_59_int);
					} else {
					bool var_72_bool; int var_73_int;
					var_31_int = var_73_int;
					func_402(var_72_bool, var_73_int);
					if(var_72_bool == 0) goto Label_14311;
					int var_81_int;
					var_31_int = var_81_int;
					func_354(var_81_int);
				}
				if(var_23_int == 2) {
					@Trace("Special diseased region: 5");
					func_384(5);
				} else {
					if(var_23_int == 3) {
						@Trace("Special diseased region: 3");
						func_384(3);
						@Trace("Special diseased region: 13");
						func_384(13);
		}

					for(;;) {
						if(!(0 < 16)) goto Label_14384;
						bool var_179_bool = true;
						bool var_180_bool; int var_181_int;
						var_35_int = var_181_int;
						func_372(var_180_bool, var_181_int);
						if(var_180_bool != 1) {
							bool var_182_bool; int var_183_int;
							var_35_int = var_183_int;
							func_402(var_182_bool, var_183_int);
							if(var_182_bool != 1)
								var_179_bool = false;
						}
						if(var_179_bool != 0) {
							int var_184_int;
							var_35_int = var_184_int;
							func_354(var_184_int);
						}
						var_35_int += 1;
					}

				}
				int var_108_int;
				func_286(var_108_int);
				var_108_int = var_32_int;
				if(var_32_int < var_30_int) {
					var_34_int = 0;

					for(;;) {
						if(!(var_34_int < (var_30_int - var_32_int))) goto Label_14358;
						func_304();
						var_34_int += 1;
					}
				}
			Label_14358:
				} else {
			if(var_23_int == 2) {
				var_30_int = 1;
			} else if(var_23_int == 3) {
				var_30_int = 2;
			} else if(var_23_int == 4) {
				var_30_int = 3;
			} else if(var_23_int == 5) {
				var_30_int = 4;
			} else if(var_23_int == 6) {
				var_30_int = 5;
			} else if(var_23_int == 7) {
				var_30_int = 5;
			} else if(var_23_int == 8) {
				var_30_int = 6;
			} else if(var_23_int == 9) {
				var_30_int = 6;
			} else if(var_23_int == 10) {
				var_30_int = 7;
			} else if(var_23_int == 11) {
				var_30_int = 8;
				}
			}
		Label_14384:
			return 12;
			}
		Label_14311:
			var_31_int += 1;
		}

	}
	
}


// @pe
void func_10120(int var_6059_int, float var_6060_float)
{
	float var_6064_float;
	var_6060_float = var_6064_float;
	int var_6061_int;
	func_12163(var_6061_int, 536371, 536370, var_6064_float);
	var_6061_int = var_6059_int;
}


// @pe
void func_7051(object var_296_object)
{
	var_296_object->add("lc_house7_02");
	var_296_object->add("lc_house7_03");
	var_296_object->add("lc_house7_04");
	var_296_object->add("lc_house7_05");
	var_296_object->add("lc_house7_06");
	var_296_object->add("lc_house7_07");
	var_296_object->add("lc_House6_02");
	var_296_object->add("lc_house7_01");
	var_296_object->add("lc_house_2_02");
	var_296_object->add("lc_House6_01");
	var_296_object->add("lc_house3_03_i2");
	var_296_object->add("lc_house3_03");
	var_296_object->add("lc_House6_03");
	var_296_object->add("lc_House6_04");
}


// @pe
void func_6027(object var_208_object)
{
	var_208_object->add("r3_house_2_02");
	var_208_object->add("r3_house3_02_i2");
	var_208_object->add("r3_house3_02");
	var_208_object->add("r3_house4_05_i2");
	var_208_object->add("r3_house4_05");
	var_208_object->add("r3_house4_03_i2");
	var_208_object->add("r3_house4_04_i2");
	var_208_object->add("r3_house4_04");
	var_208_object->add("r3_house4_01_i2");
	var_208_object->add("r3_house4_01");
	var_208_object->add("r3_house_2_01");
	var_208_object->add("r3_house4_02_i2");
	var_208_object->add("r3_house4_02");
	var_208_object->add("r3_house3_01_i2");
	var_208_object->add("r3_house3_01");
}


void func_12171(object var_4567_object)
{
	object var_4570_object; object var_4571_object;
	@GetMainOutdoorScene(var_4570_object);
	if(var_4570_object == null) {
		@Trace("Can't find main outdoor scene");
		var_4571_object = null;
		var_4571_object = var_4567_object;
	}
	var_4570_object->GetMap(var_4571_object);
	var_4571_object = var_4567_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_10129(int var_5719_int, float var_5720_float)
{
	float var_5724_float;
	var_5720_float = var_5724_float;
	int var_5721_int;
	func_12163(var_5721_int, 533585, 533584, var_5724_float);
	var_5721_int = var_5719_int;
}


// @pe
void func_10138(int var_5994_int, float var_5995_float)
{
	float var_5999_float;
	var_5995_float = var_5999_float;
	int var_5996_int;
	func_12163(var_5996_int, 536367, 536366, var_5999_float);
	var_5996_int = var_5994_int;
}


void func_12188(int var_796_int)
{
	int var_798_int;
	@GetVariable("branch", var_798_int);
	var_798_int = var_796_int;
}


// @pe
void func_925(int var_1277_int, int var_1278_int)
{
	bool var_1279_bool = true;
	bool var_1280_bool = true;
	var_1282_bool = var_1278_int >= 20;
	if(var_1282_bool != 1) {
		var_1284_bool = var_1278_int < 2;
		if(var_1284_bool != 1)
			var_1280_bool = false;
	}
	if(var_1280_bool != 1) {
		bool var_1285_bool = false;
		if(var_1278_int >= 6) {
			if(var_1278_int < 10)
				var_1285_bool = true;
		}
		if(var_1285_bool != 1)
			var_1279_bool = false;
	}
	if(var_1279_bool != 0) {
		int var_1290_int;
		var_1277_int = var_1290_int;
		func_721(var_1290_int, true);
	} else {
		int var_1292_int;
		var_1277_int = var_1292_int;
		func_721(var_1292_int, false);
	}
	
}


void func_12194(bool var_4149_bool, int var_4150_int)
{
	int var_4157_int; int var_4158_int; int var_4159_int;
	bool var_4160_bool = false;
	if(var_4150_int > 42000) {
		if(var_4150_int < 42288)
			var_4160_bool = true;
	}
	if(var_4160_bool != 0) {
		var_4157_int = (var_4150_int - 42000) % 24;
		int var_4172_int;
		var_4157_int = var_4172_int;
		func_8237((((var_4150_int - 42000) / 24) + 1), var_4172_int);
		var_4149_bool = true;
		return 8;
	}
	bool var_4198_bool = false;
	if(var_4150_int > 40000) {
		if(var_4150_int < 40288)
			var_4198_bool = true;
	}
	if(var_4198_bool != 0) {
		var_4158_int = (var_4150_int - 40000) / 24;
		var_4159_int = (var_4150_int - 40000) % 24;
		int var_4210_int;
		var_4159_int = var_4210_int;
		func_8282((var_4158_int + 1), var_4210_int);
		int var_4526_int;
		var_4159_int = var_4526_int;
		func_14163((var_4158_int + 1), var_4526_int);
		var_4149_bool = true;
		return 8;
	}
	var_4149_bool = false;
}


// @pe
void func_10147(int var_6173_int, float var_6174_float)
{
	float var_6178_float;
	var_6174_float = var_6178_float;
	int var_6175_int;
	func_12163(var_6175_int, 538734, 538733, var_6178_float);
	var_6175_int = var_6173_int;
}


void func_4006(int var_3258_int, int var_3259_int, int var_3260_int)
{
	int var_3265_int; int var_3266_int; int var_3267_int; int var_3268_int;
	bool var_3269_bool = false;
	if(var_3260_int > 8) {
		if(var_3260_int < 21)
			var_3269_bool = true;
	}
	if(var_3269_bool != 0) {
		int var_3274_int;
		var_3258_int = var_3274_int;
		func_445(var_3274_int, "pers_rat", "rat.xml", 4);
		int var_3278_int;
		var_3258_int = var_3278_int;
		func_445(var_3278_int, "pers_alkash", "alkash.xml", 2);
		int var_3282_int;
		var_3258_int = var_3282_int;
		func_445(var_3282_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3287_float; int var_3288_int;
		func_1076(var_3287_float, var_3288_int);
		if((2 * var_3287_float) != 0) {
			int var_3334_int; int var_3337_int;
			var_3258_int = var_3334_int;
			var_3265_int = var_3337_int;
			func_445(var_3334_int, "pers_grabitel", "grabitel.xml", var_3337_int);
		}
		if((var_3288_int + 1) >= 2) {
			int var_3342_int;
			var_3258_int = var_3342_int;
			func_445(var_3342_int, "pers_patrool", "patrol.xml", 2);
			bool var_3346_bool; int var_3347_int;
			var_3259_int = var_3347_int;
			func_1283(var_3346_bool, var_3347_int);
			if(var_3346_bool != 0) {
				int var_3348_int;
				var_3258_int = var_3348_int;
				func_445(var_3348_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3353_float; int var_3354_int;
		var_3259_int = var_3354_int;
		func_1166(var_3353_float, var_3354_int);
		if((1 * var_3353_float) != 0) {
			int var_3356_int; int var_3359_int;
			var_3258_int = var_3356_int;
			var_3266_int = var_3359_int;
			func_445(var_3356_int, "pers_bomber", "bomber.xml", var_3359_int);
		}
	} else {
		int var_3366_int;
		var_3258_int = var_3366_int;
		func_445(var_3366_int, "pers_rat", "rat.xml", 7);
		int var_3370_int;
		var_3258_int = var_3370_int;
		func_445(var_3370_int, "pers_alkash", "alkash.xml", 1);
		int var_3374_int;
		var_3258_int = var_3374_int;
		func_445(var_3374_int, "pers_dohodyaga", "dohodyaga.xml", 1);
		float var_3379_float; int var_3380_int;
		func_1076(var_3379_float, var_3380_int);
		if((2 * var_3379_float) != 0) {
			int var_3382_int; int var_3385_int;
			var_3258_int = var_3382_int;
			var_3267_int = var_3385_int;
			func_445(var_3382_int, "pers_grabitel", "grabitel.xml", var_3385_int);
		}
		if((var_3380_int + 1) >= 2) {
			int var_3390_int;
			var_3258_int = var_3390_int;
			func_445(var_3390_int, "pers_patrool", "patrol.xml", 1);
			bool var_3394_bool; int var_3395_int;
			var_3259_int = var_3395_int;
			func_1283(var_3394_bool, var_3395_int);
			if(var_3394_bool != 0) {
				int var_3396_int;
				var_3258_int = var_3396_int;
				func_445(var_3396_int, "pers_soldat_hand", "soldier_patrol.xml", 1);
			}
		}
		float var_3401_float; int var_3402_int;
		var_3259_int = var_3402_int;
		func_1166(var_3401_float, var_3402_int);
		if((1 * var_3401_float) == 0) goto Label_4168;
		int var_3404_int; int var_3407_int;
		var_3258_int = var_3404_int;
		var_3268_int = var_3407_int;
		func_445(var_3404_int, "pers_bomber", "bomber.xml", var_3407_int);
	}
Label_4168:
	bool var_3360_bool; int var_3361_int;
	var_3259_int = var_3361_int;
	func_1283(var_3360_bool, var_3361_int);
	if(var_3360_bool != 0) {
		int var_3362_int;
		var_3258_int = var_3362_int;
		func_445(var_3362_int, "pers_sanitar", "sanitar.xml", 1);
	}
	
}


// @pe
void func_10156(void)
{
	func_150("house_vlad@door2", true);
}


// @pe
void func_5043(int var_2563_int, int var_2564_int, object var_2565_object, object var_2566_object, object var_2567_object, object var_2568_object)
{
	if(var_2564_int == 0) {
		func_738(3, true);
		func_755(3, true, 1);
		int var_2577_int; object var_2578_object; object var_2579_object; object var_2580_object;
		var_2563_int = var_2577_int;
		var_2565_object = var_2578_object;
		var_2566_object = var_2579_object;
		var_2567_object = var_2580_object;
		func_583(3, var_2577_int, var_2578_object, var_2579_object, var_2580_object);
		object var_2581_object;
		var_2568_object = var_2581_object;
		func_248(var_2581_object, 1);
		func_812(3, true, 7);
		func_874(3, false, 7);
	}
	func_721(3, false);
	int var_2592_int; int var_2593_int;
	var_2563_int = var_2592_int;
	var_2564_int = var_2593_int;
	func_2915(3, var_2592_int, var_2593_int);
}


// @pe
void func_10163(void)
{
	func_150("warehouse_rubin@door1", false);
}


// @pe
void func_7095(int var_1773_int, int var_1774_int, object var_1775_object, object var_1776_object, object var_1777_object, object var_1778_object)
{
	if(var_1774_int == 0) {
		func_738(14, false);
		func_755(14, false, 1);
		int var_1786_int; int var_1787_int; object var_1788_object; object var_1789_object; object var_1790_object;
		var_1786_int = 14;
		var_1773_int = var_1787_int;
		var_1775_object = var_1788_object;
		var_1776_object = var_1789_object;
		var_1777_object = var_1790_object;
		func_564(var_1787_int, var_1788_object, var_1789_object, var_1790_object);
		object var_1791_object;
		var_1778_object = var_1791_object;
		func_248(var_1791_object, 0);
		func_812(14, false, 5);
		func_874(14, false, 5);
	}
	int var_1800_int;
	var_1774_int = var_1800_int;
	func_1029(14, var_1800_int);
	int var_1811_int; int var_1812_int;
	var_1773_int = var_1811_int;
	var_1774_int = var_1812_int;
	func_1287(14, var_1811_int, var_1812_int);
}


// @pe
void func_6074(int var_1608_int, int var_1609_int, object var_1610_object, object var_1611_object, object var_1612_object, object var_1613_object)
{
	if(var_1609_int == 0) {
		func_738(9, false);
		func_755(9, false, 1);
		int var_1621_int; int var_1622_int; object var_1623_object; object var_1624_object; object var_1625_object;
		var_1621_int = 9;
		var_1608_int = var_1622_int;
		var_1610_object = var_1623_object;
		var_1611_object = var_1624_object;
		var_1612_object = var_1625_object;
		func_564(var_1622_int, var_1623_object, var_1624_object, var_1625_object);
		object var_1626_object;
		var_1613_object = var_1626_object;
		func_248(var_1626_object, 0);
		func_812(9, false, 7);
		func_874(9, false, 7);
	}
	int var_1635_int;
	var_1609_int = var_1635_int;
	func_992(9, var_1635_int);
	int var_1637_int; int var_1638_int;
	var_1608_int = var_1637_int;
	var_1609_int = var_1638_int;
	func_1549(9, var_1637_int, var_1638_int);
}


void func_10170(void)
{
	object var_4827_object;
	func_12171(var_4827_object);
	object var_4826_object;
	var_4827_object = var_4826_object;
	float var_4832_float;
	func_212(var_4832_float);
	var_4826_object->AddMark("d1KaterinaMapMark", "pt_map_katerina", 3, 508640, var_4832_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_962(int var_1325_int, int var_1326_int)
{
	bool var_1327_bool = true;
	var_1329_bool = var_1326_int >= 20;
	if(var_1329_bool != 1) {
		bool var_1330_bool = false;
		if(var_1326_int >= 6) {
			if(var_1326_int < 10)
				var_1330_bool = true;
		}
		if(var_1330_bool != 1)
			var_1327_bool = false;
	}
	if(var_1327_bool != 0) {
		int var_1335_int;
		var_1325_int = var_1335_int;
		func_721(var_1335_int, true);
	} else {
		int var_1337_int;
		var_1325_int = var_1337_int;
		func_721(var_1337_int, false);
	}
	
}


void func_10186(void)
{
	object var_5106_object;
	func_12171(var_5106_object);
	object var_5104_object;
	var_5106_object = var_5104_object;
	object var_5105_object;
	var_5104_object->FindMark(var_5105_object, "d8q01MatGotoToyHouse");
	if(var_5105_object != 0)
		var_5105_object->Remove();
	var_5104_object->FindMark(var_5105_object, "d8q01MatGotoBoiny");
	if(var_5105_object != 0)
		var_5105_object->Remove();
	var_5104_object->FindMark(var_5105_object, "d8q01MladVladGotoMat");
	if(var_5105_object != 0)
		var_5105_object->Remove();
	var_5104_object->FindMark(var_5105_object, "d8q01MladVladgotoOspina");
	if(var_5105_object != 0)
		var_5105_object->Remove();
	var_5104_object->FindMark(var_5105_object, "d8q01OspinaGotoMladVlad");
	if(var_5105_object != 0)
		var_5105_object->Remove();
	var_5104_object->FindMark(var_5105_object, "d8q02GotoKapella");
	if(var_5105_object != 0)
		var_5105_object->Remove();
	var_5104_object->FindMark(var_5105_object, "d8q04MladVladGotoMark");
	if(var_5105_object != 0)
		var_5105_object->Remove();
	bool var_5121_bool;
	func_12146(var_5121_bool, 175);
	bool var_5123_bool;
	func_12146(var_5123_bool, 127);
	bool var_5125_bool;
	func_12146(var_5125_bool, 124);
	bool var_5127_bool;
	func_12146(var_5127_bool, 649);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_11213(void)
{
	object var_4983_object;
	func_12171(var_4983_object);
	object var_4981_object;
	var_4983_object = var_4981_object;
	object var_4982_object;
	var_4981_object->FindMark(var_4982_object, "d6q01AlexandrGotoJulia");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q01AlexandrGotoKaterina");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q01AlexandrGotoLara");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q01AlexangrGotoJulLaraSelf");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q01BigVladGotoAnna");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q01BigVladGotoAnnaOspinaSelf");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q01BigVladGotoOspina");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q01KaterinaGotoLaska");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q01KaterinagotoLaskaSelf");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q01KillerIsKlara");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q01LaskaGotoAlbinos");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q01ViktorGotoAlexandr");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q01ViktorGotoAlxBigSelf");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q01ViktorGotoBigVlad");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q02BigVlad");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q02KapellaGotoMladVlad");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q02MladVladGotoBigVlad");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	var_4981_object->FindMark(var_4982_object, "d6q02MladVladGotoBigVladSelf");
	if(var_4982_object != 0)
		var_4982_object->Remove();
	bool var_5020_bool;
	func_12146(var_5020_bool, 111);
	bool var_5022_bool;
	func_12146(var_5022_bool, 102);
	bool var_5024_bool;
	func_12146(var_5024_bool, 107);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_12255(void)
{
	float var_4410_float; float var_4412_float;
	@GetGameTime(var_4410_float);
	int var_4411_int = 1;
	
	for(;;) {
		if(var_4411_int < 288) {
			var_4412_float = 1.0 * var_4411_int;
			if(var_4412_float < var_4410_float) {
			} else {
			@SetTimeEvent((40000 + var_4411_int), var_4412_float);
			var_4412_float -= 0.0033333334;
			if(var_4412_float < var_4410_float) {
				goto Label_12280;
			}
			@SetTimeEvent((42000 + var_4411_int), var_4412_float);
		}
		func_8165();
		func_14117();
		}
	Label_12280:
		var_4411_int += 1;
	}
	
}


// @pe
void func_992(int var_723_int, int var_724_int)
{
	bool var_725_bool = true;
	bool var_726_bool = true;
	var_728_bool = var_724_int >= 22;
	if(var_728_bool != 1) {
		var_730_bool = var_724_int < 4;
		if(var_730_bool != 1)
			var_726_bool = false;
	}
	if(var_726_bool != 1) {
		bool var_731_bool = false;
		if(var_724_int >= 6) {
			if(var_724_int < 8)
				var_731_bool = true;
		}
		if(var_731_bool != 1)
			var_725_bool = false;
	}
	if(var_725_bool != 0) {
		int var_736_int;
		var_723_int = var_736_int;
		func_721(var_736_int, true);
	} else {
		int var_747_int;
		var_723_int = var_747_int;
		func_721(var_747_int, false);
	}
	
}


void func_8165(void)
{
	object var_4425_object;
	@GetMainOutdoorScene(var_4425_object);
	var_4426_object = GlobalVars[0];
	object var_4427_object; object var_4428_object;
	var_4425_object = var_4428_object;
	func_7727(var_4427_object, var_4428_object, 1);
	var_4427_object = var_4426_object;
	GlobalVars[0] = var_4426_object;
	var_4449_object = GlobalVars[1];
	object var_4450_object; object var_4451_object;
	var_4425_object = var_4451_object;
	func_7727(var_4450_object, var_4451_object, 2);
	var_4450_object = var_4449_object;
	GlobalVars[1] = var_4449_object;
	var_4453_object = GlobalVars[2];
	object var_4454_object; object var_4455_object;
	var_4425_object = var_4455_object;
	func_7727(var_4454_object, var_4455_object, 3);
	var_4454_object = var_4453_object;
	GlobalVars[2] = var_4453_object;
	var_4457_object = GlobalVars[3];
	object var_4458_object; object var_4459_object;
	var_4425_object = var_4459_object;
	func_7727(var_4458_object, var_4459_object, 4);
	var_4458_object = var_4457_object;
	GlobalVars[3] = var_4457_object;
	var_4461_object = GlobalVars[4];
	object var_4462_object; object var_4463_object;
	var_4425_object = var_4463_object;
	func_7727(var_4462_object, var_4463_object, 5);
	var_4462_object = var_4461_object;
	GlobalVars[4] = var_4461_object;
	var_4465_object = GlobalVars[5];
	object var_4466_object; object var_4467_object;
	var_4425_object = var_4467_object;
	func_7727(var_4466_object, var_4467_object, 6);
	var_4466_object = var_4465_object;
	GlobalVars[5] = var_4465_object;
	var_4469_object = GlobalVars[12];
	object var_4470_object;
	func_99(var_4470_object);
	var_4470_object = var_4469_object;
	GlobalVars[12] = var_4469_object;
	func_7738(false);
	func_8448();
	func_8523();
	@SendWorldWndMessage(100);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5095(int var_3689_int, int var_3690_int, object var_3691_object, object var_3692_object, object var_3693_object, object var_3694_object)
{
	if(var_3690_int == 0) {
		func_738(3, false);
		func_755(3, false, 1);
		int var_3703_int; object var_3704_object; object var_3705_object; object var_3706_object;
		var_3689_int = var_3703_int;
		var_3691_object = var_3704_object;
		var_3692_object = var_3705_object;
		var_3693_object = var_3706_object;
		func_662(3, var_3703_int, var_3704_object, var_3705_object, var_3706_object);
		object var_3707_object;
		var_3694_object = var_3707_object;
		func_248(var_3707_object, 2);
		func_812(3, false, 7);
		func_874(3, true, 7);
	}
	func_721(3, false);
	int var_3718_int; int var_3719_int;
	var_3689_int = var_3718_int;
	var_3690_int = var_3719_int;
	func_3818(3, var_3718_int, var_3719_int);
}


// @pe
void func_7147(int var_3009_int, int var_3010_int, object var_3011_object, object var_3012_object, object var_3013_object, object var_3014_object)
{
	if(var_3010_int == 0) {
		func_738(14, true);
		func_755(14, true, 1);
		int var_3023_int; object var_3024_object; object var_3025_object; object var_3026_object;
		var_3009_int = var_3023_int;
		var_3011_object = var_3024_object;
		var_3012_object = var_3025_object;
		var_3013_object = var_3026_object;
		func_583(14, var_3023_int, var_3024_object, var_3025_object, var_3026_object);
		object var_3027_object;
		var_3014_object = var_3027_object;
		func_248(var_3027_object, 1);
		func_812(14, true, 5);
		func_874(14, false, 5);
	}
	func_721(14, false);
	int var_3038_int; int var_3039_int;
	var_3009_int = var_3038_int;
	var_3010_int = var_3039_int;
	func_2555(14, var_3038_int, var_3039_int);
}


// @pe
void func_6126(int var_2844_int, int var_2845_int, object var_2846_object, object var_2847_object, object var_2848_object, object var_2849_object)
{
	if(var_2845_int == 0) {
		func_738(9, true);
		func_755(9, true, 1);
		int var_2858_int; object var_2859_object; object var_2860_object; object var_2861_object;
		var_2844_int = var_2858_int;
		var_2846_object = var_2859_object;
		var_2847_object = var_2860_object;
		var_2848_object = var_2861_object;
		func_583(9, var_2858_int, var_2859_object, var_2860_object, var_2861_object);
		object var_2862_object;
		var_2849_object = var_2862_object;
		func_248(var_2862_object, 1);
		func_812(9, true, 7);
		func_874(9, false, 7);
	}
	func_721(9, false);
	int var_2873_int; int var_2874_int;
	var_2844_int = var_2873_int;
	var_2845_int = var_2874_int;
	func_2735(9, var_2873_int, var_2874_int);
}


