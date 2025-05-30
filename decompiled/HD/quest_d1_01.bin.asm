GlobalVarCount = 0

Strings:
	d1q01_trigger
	d1q01_trigger.xml
	warehouse_rubin
	norubin
	place_masks
	pt_d1q01_birdmask
	pers_birdmask
	d1q01_birdmask.xml
	pt_d1q01_whitemask
	pers_whitemask
	d1q01_whitemask.xml
	remove_masks
	Remove
	cutscene_end
	pt_d1q01_morlok
	pers_morlok
	d1q01_morlok.xml
	pt_d1q01_worker
	pers_worker
	d1q01_worker.xml
	remove_cutscene
	attack
	place_patrol
	pt_d1q01_patrol1
	pers_patrool
	d1q01_patrol.xml
	pt_d1q01_patrol2
	place_morlok_run
	pt_d1q01_morlok_run_path
	d1q01_morlok_run.xml
	place_rubin
	cot_viktor
	pt_d1q01_rubin
	NPC_Rubin
	d1q01_rubin.xml
	unlock_doors
	cleanup
	d1q01
	fail
	completed
	icot_eva@door1
	GetLocator
	Locator 
	 doesn't exist
	AddStationaryActor
	Door 
	 not found
	locked
	SetProperty
	cot_anna@door1
	cot_julia@door1
	cot_lara@door1
	house_vlad@door1
	dt_house_1_04@door1

Import:
	GetMainOutdoorScene (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	Hold (0 args)
	Trace (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, object, object, bool) Params = 0
		EVENT_26 Op = 0x18 Vars = (string)


0x0: PushEmpty(object, object)
0x1: PushEmpty()
0x2: Call2 0x158

0x3: Pop(0)
0x4: @ GetMainOutdoorScene(Stack[-1])
0x5: Pop(0)
0x6: PushEmpty(object, object, string, string)
0x7: Stack[-3] = Stack[-5]
0x8: Stack[-2] = "d1q01_trigger"
0x9: Stack[-1] = "d1q01_trigger.xml"
0xa: Call2 0x11b

0xb: Stack[2 + Tasks[-1].StackPointer] = Stack[-4]
0xc: Pop(4)
0xd: Push("warehouse_rubin")
0xe: @ GetSceneByName(Stack[-2], Stack[-1])
0xf: Pop(1)
0x10: Push("norubin")
0x11: @ Trigger(Stack[-2], Stack[-1])
0x12: Pop(1)
0x13: @ Hold()
0x14: Pop(0)
0x15: GOTO 0x13

0x16: Return(); Pop(2)

0x17: Stack[-1] = 0
0x18: PushEmpty(object, object, object, object, object, int, object, object, object, object, object, int)
0x19: @ Trace(Stack[-13])
0x1a: Pop(0)
0x1b: Push("place_masks")
0x1c: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x1d: IF (Stack[-1] == 0) GOTO 0x32; Pop(1)

0x1e: @ GetMainOutdoorScene(Stack[-6])
0x1f: Pop(0)
0x20: PushEmpty(object, object, string, string, string)
0x21: Stack[-4] = Stack[-11]
0x22: Stack[-3] = "pt_d1q01_birdmask"
0x23: Stack[-2] = "pers_birdmask"
0x24: Stack[-1] = "d1q01_birdmask.xml"
0x25: Call2 0x135

0x26: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x27: Pop(5)
0x28: PushEmpty(object, object, string, string, string)
0x29: Stack[-4] = Stack[-11]
0x2a: Stack[-3] = "pt_d1q01_whitemask"
0x2b: Stack[-2] = "pers_whitemask"
0x2c: Stack[-1] = "d1q01_whitemask.xml"
0x2d: Call2 0x135

0x2e: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x2f: Pop(5)
0x30: Stack[-6] = 0
0x31: GOTO 0xc5

0x32: Push("remove_masks")
0x33: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x34: IF (Stack[-1] == 0) GOTO 0x3a; Pop(1)

0x35: @@ Remove()
0x36: Pop(0)
0x37: @@ Remove()
0x38: Pop(0)
0x39: GOTO 0xc5

0x3a: Push("cutscene_end")
0x3b: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x3c: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x3d: @ GetMainOutdoorScene(Stack[-5])
0x3e: Pop(0)
0x3f: PushEmpty(object, object, string, string, string)
0x40: Stack[-4] = Stack[-10]
0x41: Stack[-3] = "pt_d1q01_morlok"
0x42: Stack[-2] = "pers_morlok"
0x43: Stack[-1] = "d1q01_morlok.xml"
0x44: Call2 0x123

0x45: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x46: Pop(5)
0x47: PushEmpty(object, object, string, string, string)
0x48: Stack[-4] = Stack[-10]
0x49: Stack[-3] = "pt_d1q01_worker"
0x4a: Stack[-2] = "pers_worker"
0x4b: Stack[-1] = "d1q01_worker.xml"
0x4c: Call2 0x123

0x4d: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x4e: Pop(5)
0x4f: Push( Stack[8 + Tasks[-1].StackPointer] )
0x50: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x51: PushEmpty()
0x52: Call2 0xd6

0x53: Pop(0)
0x54: Stack[-5] = 0
0x55: GOTO 0xc5

0x56: Push("remove_cutscene")
0x57: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x58: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x59: PushEmpty()
0x5a: Call2 0xd6

0x5b: Pop(0)
0x5c: GOTO 0xc5

0x5d: Push("attack")
0x5e: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x5f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x60: Push( Stack[3 + Tasks[-1].StackPointer] )
0x61: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x62: Push("attack")
0x63: @ Trigger(Stack[-3], Stack[-1])
0x64: Pop(1)
0x65: Push( Stack[4 + Tasks[-1].StackPointer] )
0x66: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x67: Push("attack")
0x68: @ Trigger(Stack[-4], Stack[-1])
0x69: Pop(1)
0x6a: GOTO 0xc5

0x6b: Push("place_patrol")
0x6c: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x6d: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x6e: @ GetMainOutdoorScene(Stack[-4])
0x6f: Pop(0)
0x70: PushEmpty(object, object, string, string, string)
0x71: Stack[-4] = Stack[-9]
0x72: Stack[-3] = "pt_d1q01_patrol1"
0x73: Stack[-2] = "pers_patrool"
0x74: Stack[-1] = "d1q01_patrol.xml"
0x75: Call2 0x123

0x76: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0x77: Pop(5)
0x78: PushEmpty(object, object, string, string, string)
0x79: Stack[-4] = Stack[-9]
0x7a: Stack[-3] = "pt_d1q01_patrol2"
0x7b: Stack[-2] = "pers_patrool"
0x7c: Stack[-1] = "d1q01_patrol.xml"
0x7d: Call2 0x123

0x7e: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0x7f: Pop(5)
0x80: Stack[-4] = 0
0x81: GOTO 0xc5

0x82: Push("place_morlok_run")
0x83: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x84: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x85: @ GetMainOutdoorScene(Stack[-3])
0x86: Pop(0)
0x87: PushEmpty(object, object, string, string, string)
0x88: Stack[-4] = Stack[-8]
0x89: Stack[-3] = "pt_d1q01_morlok_run_path"
0x8a: Stack[-2] = "pers_morlok"
0x8b: Stack[-1] = "d1q01_morlok_run.xml"
0x8c: Call2 0x123

0x8d: Pop(5)
0x8e: Stack[-3] = 0
0x8f: GOTO 0xc5

0x90: Push("place_rubin")
0x91: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x93: Push("cot_viktor")
0x94: @ GetSceneByName(Stack[-3], Stack[-1])
0x95: Pop(1)
0x96: PushEmpty(object, object, string, string, string)
0x97: Stack[-4] = Stack[-7]
0x98: Stack[-3] = "pt_d1q01_rubin"
0x99: Stack[-2] = "NPC_Rubin"
0x9a: Stack[-1] = "d1q01_rubin.xml"
0x9b: Call2 0x123

0x9c: Stack[7 + Tasks[-1].StackPointer] = Stack[-5]
0x9d: Pop(5)
0x9e: Stack[-2] = 0
0x9f: GOTO 0xc5

0xa0: Push("unlock_doors")
0xa1: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa3: PushEmpty()
0xa4: Call2 0x172

0xa5: Pop(0)
0xa6: GOTO 0xc5

0xa7: Push("cleanup")
0xa8: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xaa: Push("d1q01")
0xab: @ GetVariable(Stack[-1], Stack[-2])
0xac: Pop(1)
0xad: Push((int) 1000)
0xae: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xb0: PushEmpty()
0xb1: Call2 0xc6

0xb2: Pop(0)
0xb3: GOTO 0xb7

0xb4: PushEmpty()
0xb5: Call2 0xe7

0xb6: Pop(0)
0xb7: GOTO 0xc5

0xb8: Push("fail")
0xb9: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xba: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbb: PushEmpty()
0xbc: Call2 0xc6

0xbd: Pop(0)
0xbe: GOTO 0xc5

0xbf: Push("completed")
0xc0: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0xce

0xc4: Pop(0)
0xc5: Return(); Pop(12)

0xc6: Push("d1q01")
0xc7: Push((int) -1)
0xc8: @ SetVariable(Stack[-2], Stack[-1])
0xc9: Pop(2)
0xca: PushEmpty()
0xcb: Call2 0xe7

0xcc: Pop(0)
0xcd: Return(); Pop(0)

0xce: Push("d1q01")
0xcf: Push((int) 1000)
0xd0: @ SetVariable(Stack[-2], Stack[-1])
0xd1: Pop(2)
0xd2: PushEmpty()
0xd3: Call2 0xe7

0xd4: Pop(0)
0xd5: Return(); Pop(0)

0xd6: Push( Stack[2 + Tasks[-1].StackPointer] )
0xd7: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd8: Push("cleanup")
0xd9: @ Trigger(Stack[-2], Stack[-1])
0xda: Pop(1)
0xdb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdc: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdd: Push("cleanup")
0xde: @ Trigger(Stack[-3], Stack[-1])
0xdf: Pop(1)
0xe0: Push( Stack[4 + Tasks[-1].StackPointer] )
0xe1: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe2: Push("cleanup")
0xe3: @ Trigger(Stack[-4], Stack[-1])
0xe4: Pop(1)
0xe5: Stack[8 + Tasks[-1].StackPointer] = (bool)1
0xe6: Return(); Pop(0)

0xe7: PushEmpty(object, object)
0xe8: EventDisable(26)
0xe9: PushEmpty()
0xea: Call2 0xd6

0xeb: Pop(0)
0xec: Push( Stack[0 + Tasks[-1].StackPointer] )
0xed: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xee: @@ Remove()
0xef: Pop(0)
0xf0: Push( Stack[1 + Tasks[-1].StackPointer] )
0xf1: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf2: @@ Remove()
0xf3: Pop(0)
0xf4: Push( Stack[5 + Tasks[-1].StackPointer] )
0xf5: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf6: Push("cleanup")
0xf7: @ Trigger(Stack[-5], Stack[-1])
0xf8: Pop(1)
0xf9: Push( Stack[5 + Tasks[-1].StackPointer] )
0xfa: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfb: Push("cleanup")
0xfc: @ Trigger(Stack[-6], Stack[-1])
0xfd: Pop(1)
0xfe: Push( Stack[7 + Tasks[-1].StackPointer] )
0xff: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0x100: Push("cleanup")
0x101: @ Trigger(Stack[-7], Stack[-1])
0x102: Pop(1)
0x103: Push("warehouse_rubin")
0x104: @ GetSceneByName(Stack[-2], Stack[-1])
0x105: Pop(1)
0x106: Push("rubin")
0x107: @ Trigger(Stack[-2], Stack[-1])
0x108: Pop(1)
0x109: PushEmpty(string, bool)
0x10a: Stack[-2] = "icot_eva@door1"
0x10b: Stack[-1] = (bool) 0
0x10c: Call2 0x147

0x10d: Pop(2)
0x10e: PushEmpty(object)
0x10f: Call2 0x115

0x110: Pop(0)
0x111: @ RemoveActor(Stack[-1])
0x112: Pop(1)
0x113: Return(); Pop(2)

0x114: Stack[-1] = 0
0x115: PushEmpty(object, object)
0x116: @ self(Stack[-1])
0x117: Pop(0)
0x118: Stack[-3] = Stack[-1]
0x119: Return(); Pop(2)

0x11a: Stack[-1] = 0
0x11b: PushEmpty(object, object)
0x11c: Push(CVector(0.0, 0.0, 0.0))
0x11d: Push(CVector(0.0, 0.0, 1.0))
0x11e: @ AddActor(Stack[-3], Stack[-6], Stack[-7], Stack[-2], Stack[-1], Stack[-5])
0x11f: Pop(2)
0x120: Stack[-6] = Stack[-1]
0x121: Return(); Pop(2)

0x122: Stack[-1] = 0
0x123: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x124: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x125: Pop(0)
0x126: Pop(0); Push((bool) Stack[-4] == 0)
0x127: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x128: Push("Locator ")
0x129: Pop(1); Push(Stack[-1] + Stack[-12]);
0x12a: Push(" doesn't exist")
0x12b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12c: @ Trace(Stack[-1])
0x12d: Pop(1)
0x12e: Stack[-1] = 0
0x12f: GOTO 0x132

0x130: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x131: Pop(0)
0x132: Stack[-13] = Stack[-1]
0x133: Return(); Pop(8)

0x134: Stack[-1] = 0
0x135: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x136: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x137: Pop(0)
0x138: Pop(0); Push((bool) Stack[-4] == 0)
0x139: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13a: Push("Locator ")
0x13b: Pop(1); Push(Stack[-1] + Stack[-12]);
0x13c: Push(" doesn't exist")
0x13d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x13e: @ Trace(Stack[-1])
0x13f: Pop(1)
0x140: Stack[-1] = 0
0x141: GOTO 0x144

0x142: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9])
0x143: Pop(0)
0x144: Stack[-13] = Stack[-1]
0x145: Return(); Pop(8)

0x146: Stack[-1] = 0
0x147: PushEmpty(object, object)
0x148: @ FindActor(Stack[-1], Stack[-4])
0x149: Pop(0)
0x14a: Pop(0); Push((bool) Stack[-1] == 0)
0x14b: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14c: Push("Door ")
0x14d: Pop(1); Push(Stack[-1] + Stack[-5]);
0x14e: Push(" not found")
0x14f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x150: @ Trace(Stack[-1])
0x151: Pop(1)
0x152: GOTO 0x156

0x153: Push("locked")
0x154: @@ SetProperty(Stack[-1], Stack[-4])
0x155: Pop(1)
0x156: Return(); Pop(2)

0x157: Stack[-1] = 0
0x158: PushEmpty(string, bool)
0x159: Stack[-2] = "cot_anna@door1"
0x15a: Stack[-1] = (bool) 1
0x15b: Call2 0x147

0x15c: Pop(2)
0x15d: PushEmpty(string, bool)
0x15e: Stack[-2] = "cot_julia@door1"
0x15f: Stack[-1] = (bool) 1
0x160: Call2 0x147

0x161: Pop(2)
0x162: PushEmpty(string, bool)
0x163: Stack[-2] = "cot_lara@door1"
0x164: Stack[-1] = (bool) 1
0x165: Call2 0x147

0x166: Pop(2)
0x167: PushEmpty(string, bool)
0x168: Stack[-2] = "house_vlad@door1"
0x169: Stack[-1] = (bool) 1
0x16a: Call2 0x147

0x16b: Pop(2)
0x16c: PushEmpty(string, bool)
0x16d: Stack[-2] = "dt_house_1_04@door1"
0x16e: Stack[-1] = (bool) 1
0x16f: Call2 0x147

0x170: Pop(2)
0x171: Return(); Pop(0)

0x172: PushEmpty(string, bool)
0x173: Stack[-2] = "cot_anna@door1"
0x174: Stack[-1] = (bool) 0
0x175: Call2 0x147

0x176: Pop(2)
0x177: PushEmpty(string, bool)
0x178: Stack[-2] = "cot_julia@door1"
0x179: Stack[-1] = (bool) 0
0x17a: Call2 0x147

0x17b: Pop(2)
0x17c: PushEmpty(string, bool)
0x17d: Stack[-2] = "cot_lara@door1"
0x17e: Stack[-1] = (bool) 0
0x17f: Call2 0x147

0x180: Pop(2)
0x181: PushEmpty(string, bool)
0x182: Stack[-2] = "house_vlad@door1"
0x183: Stack[-1] = (bool) 0
0x184: Call2 0x147

0x185: Pop(2)
0x186: PushEmpty(string, bool)
0x187: Stack[-2] = "dt_house_1_04@door1"
0x188: Stack[-1] = (bool) 0
0x189: Call2 0x147

0x18a: Pop(2)
0x18b: Return(); Pop(0)

