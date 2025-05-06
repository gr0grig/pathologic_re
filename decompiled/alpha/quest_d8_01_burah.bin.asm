GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	cleanup
	restore
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	d8q03
	burah gives blood
	d8q03_blood
	burah gives serum
	burah_serum
	ood8Burah1
	microscope_d8q03_blood
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	player
	Adding diary entry
	ui/NPC_Burah.png

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x274
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x26c Vars = (object)
		EVENT_26 Op = 0x278 Vars = (string)
		EVENT_6 Op = 0x294 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x2a6

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x402

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x404

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x3c1

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x2de

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x45: PushEmpty(string)
0x46: Stack[-1] = "Neutral"
0x47: Call 0x9b

0x48: Pop(1)
0x49: Push((int) 13423)
0x4a: @@ SetMessage(Stack[-1])
0x4b: Pop(1)
0x4c: @@ ClearReplies()
0x4d: Pop(0)
0x4e: PushEmpty(bool, object)
0x4f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x50: Call 0x367

0x51: Pop(1)
0x52: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x53: Push((int) 13424)
0x54: Push((int) 14661)
0x55: Push((int) 14660)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: PushEmpty(bool)
0x59: Stack[-1] = (bool) 0
0x5a: PushEmpty(bool, object)
0x5b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Call 0x373

0x5d: Pop(1)
0x5e: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call 0x37f

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x64: Stack[-1] = (bool) 1
0x65: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x66: Push((int) 13447)
0x67: Push((int) 14684)
0x68: Push((int) 14683)
0x69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a: Pop(3)
0x6b: PushEmpty(bool, object)
0x6c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Call 0x38b

0x6e: Pop(1)
0x6f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x70: Push((int) 13433)
0x71: Push((int) 14670)
0x72: Push((int) 14669)
0x73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74: Pop(3)
0x75: Push((int) 13460)
0x76: Push((int) -1)
0x77: Push((int) 14697)
0x78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79: Pop(3)
0x7a: GOTO 0x7d

0x7b: Return(); Pop(0)

0x7c: GOTO 0x43

0x7d: PushEmpty(bool)
0x7e: Call 0x406

0x7f: Pop(0)
0x80: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x81: @ lshWaitForAnimEnd()
0x82: Pop(0)
0x83: Push( Stack[3 + Tasks[-1].StackPointer] )
0x84: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x85: GOTO 0x8b

0x86: PushEmpty(string)
0x87: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x88: Call 0x2e2

0x89: Pop(1)
0x8a: GOTO 0x81

0x8b: GOTO 0x9a

0x8c: Push("all")
0x8d: Push("idle")
0x8e: @ PlayAnimation(Stack[-2], Stack[-1])
0x8f: Pop(2)
0x90: @ WaitForAnimEnd()
0x91: Pop(0)
0x92: Push( Stack[3 + Tasks[-1].StackPointer] )
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: GOTO 0x9a

0x95: Push("all")
0x96: Push("idle")
0x97: @ PlayAnimation(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: GOTO 0x90

0x9a: Return(); Pop(0)

0x9b: PushEmpty()
0x9c: PushEmpty(bool)
0x9d: Call 0x406

0x9e: Pop(0)
0x9f: Pop(1); Push((bool) Stack[-1] == 0)
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(0)

0xa2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Return(); Pop(0)

0xa5: PushEmpty(string)
0xa6: Stack[-1] = Stack[-2]
0xa7: Call 0x2e2

0xa8: Pop(1)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0xae: PushEmpty()
0xaf: Call 0x2f4

0xb0: Pop(0)
0xb1: Push((int) 14668)
0xb2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call 0x330

0xb8: Pop(2)
0xb9: PushEmpty(object, object)
0xba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc: Call 0x342

0xbd: Pop(2)
0xbe: PushEmpty(object, object)
0xbf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc1: Call 0x32a

0xc2: Pop(2)
0xc3: Push((int) 14696)
0xc4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc5: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc6: PushEmpty(object, object)
0xc7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc9: Call 0x356

0xca: Pop(2)
0xcb: PushEmpty(object, object)
0xcc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce: Call 0x32a

0xcf: Pop(2)
0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call 0x339

0xd4: Pop(2)
0xd5: Push((int) 14692)
0xd6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd8: PushEmpty(object, object)
0xd9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xda: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdb: Call 0x34d

0xdc: Pop(2)
0xdd: Push((int) 14669)
0xde: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe0: PushEmpty(object, object)
0xe1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe3: Call 0x361

0xe4: Pop(2)
0xe5: Push((int) 14659)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral"
0xea: Call 0x9b

0xeb: Pop(1)
0xec: Push((int) 13423)
0xed: @@ SetMessage(Stack[-1])
0xee: Pop(1)
0xef: @@ ClearReplies()
0xf0: Pop(0)
0xf1: PushEmpty(bool, object)
0xf2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Call 0x367

0xf4: Pop(1)
0xf5: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf6: Push((int) 13424)
0xf7: Push((int) 14661)
0xf8: Push((int) 14660)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: PushEmpty(bool)
0xfc: Stack[-1] = (bool) 0
0xfd: PushEmpty(bool, object)
0xfe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xff: Call 0x373

0x100: Pop(1)
0x101: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x102: PushEmpty(bool, object)
0x103: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x104: Call 0x37f

0x105: Pop(1)
0x106: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x107: Stack[-1] = (bool) 1
0x108: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x109: Push((int) 13447)
0x10a: Push((int) 14684)
0x10b: Push((int) 14683)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: PushEmpty(bool, object)
0x10f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x110: Call 0x38b

0x111: Pop(1)
0x112: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x113: Push((int) 13433)
0x114: Push((int) 14670)
0x115: Push((int) 14669)
0x116: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(3)
0x118: Push((int) 13460)
0x119: Push((int) -1)
0x11a: Push((int) 14697)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Return(); Pop(0)

0x11e: Push((int) 14670)
0x11f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x121: PushEmpty(string)
0x122: Stack[-1] = "Neutral"
0x123: Call 0x9b

0x124: Pop(1)
0x125: Push((int) 13434)
0x126: @@ SetMessage(Stack[-1])
0x127: Pop(1)
0x128: @@ ClearReplies()
0x129: Pop(0)
0x12a: Push((int) 13435)
0x12b: Push((int) 14672)
0x12c: Push((int) 14671)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: Return(); Pop(0)

0x130: Push((int) 14672)
0x131: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x133: PushEmpty(string)
0x134: Stack[-1] = "Neutral"
0x135: Call 0x9b

0x136: Pop(1)
0x137: Push((int) 13436)
0x138: @@ SetMessage(Stack[-1])
0x139: Pop(1)
0x13a: @@ ClearReplies()
0x13b: Pop(0)
0x13c: Push((int) 13437)
0x13d: Push((int) 14674)
0x13e: Push((int) 14673)
0x13f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: Return(); Pop(0)

0x142: Push((int) 14674)
0x143: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x145: PushEmpty(string)
0x146: Stack[-1] = "Neutral"
0x147: Call 0x9b

0x148: Pop(1)
0x149: Push((int) 13438)
0x14a: @@ SetMessage(Stack[-1])
0x14b: Pop(1)
0x14c: @@ ClearReplies()
0x14d: Pop(0)
0x14e: Push((int) 13494)
0x14f: Push((int) 14736)
0x150: Push((int) 14735)
0x151: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152: Pop(3)
0x153: Push((int) 13491)
0x154: Push((int) 14732)
0x155: Push((int) 14731)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: Return(); Pop(0)

0x159: Push((int) 14732)
0x15a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x15c: PushEmpty(string)
0x15d: Stack[-1] = "Neutral"
0x15e: Call 0x9b

0x15f: Pop(1)
0x160: Push((int) 13492)
0x161: @@ SetMessage(Stack[-1])
0x162: Pop(1)
0x163: @@ ClearReplies()
0x164: Pop(0)
0x165: Push((int) 13493)
0x166: Push((int) 14678)
0x167: Push((int) 14733)
0x168: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169: Pop(3)
0x16a: Return(); Pop(0)

0x16b: Push((int) 14736)
0x16c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x16e: PushEmpty(string)
0x16f: Stack[-1] = "Neutral"
0x170: Call 0x9b

0x171: Pop(1)
0x172: Push((int) 13495)
0x173: @@ SetMessage(Stack[-1])
0x174: Pop(1)
0x175: @@ ClearReplies()
0x176: Pop(0)
0x177: Push((int) 13439)
0x178: Push((int) 14676)
0x179: Push((int) 14675)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: Return(); Pop(0)

0x17d: Push((int) 14676)
0x17e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x180: PushEmpty(string)
0x181: Stack[-1] = "Neutral"
0x182: Call 0x9b

0x183: Pop(1)
0x184: Push((int) 13440)
0x185: @@ SetMessage(Stack[-1])
0x186: Pop(1)
0x187: @@ ClearReplies()
0x188: Pop(0)
0x189: Push((int) 13441)
0x18a: Push((int) 14678)
0x18b: Push((int) 14677)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: Return(); Pop(0)

0x18f: Push((int) 14678)
0x190: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x192: PushEmpty(string)
0x193: Stack[-1] = "Neutral"
0x194: Call 0x9b

0x195: Pop(1)
0x196: Push((int) 13442)
0x197: @@ SetMessage(Stack[-1])
0x198: Pop(1)
0x199: @@ ClearReplies()
0x19a: Pop(0)
0x19b: Push((int) 13444)
0x19c: Push((int) 14681)
0x19d: Push((int) 14680)
0x19e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19f: Pop(3)
0x1a0: Return(); Pop(0)

0x1a1: Push((int) 14681)
0x1a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1a4: PushEmpty(string)
0x1a5: Stack[-1] = "Neutral"
0x1a6: Call 0x9b

0x1a7: Pop(1)
0x1a8: Push((int) 13445)
0x1a9: @@ SetMessage(Stack[-1])
0x1aa: Pop(1)
0x1ab: @@ ClearReplies()
0x1ac: Pop(0)
0x1ad: Push((int) 13446)
0x1ae: Push((int) -1)
0x1af: Push((int) 14682)
0x1b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b1: Pop(3)
0x1b2: Return(); Pop(0)

0x1b3: Push((int) 14684)
0x1b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1b6: PushEmpty(string)
0x1b7: Stack[-1] = "Neutral"
0x1b8: Call 0x9b

0x1b9: Pop(1)
0x1ba: Push((int) 13448)
0x1bb: @@ SetMessage(Stack[-1])
0x1bc: Pop(1)
0x1bd: @@ ClearReplies()
0x1be: Pop(0)
0x1bf: Push((int) 13449)
0x1c0: Push((int) 14686)
0x1c1: Push((int) 14685)
0x1c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c3: Pop(3)
0x1c4: Push((int) 13451)
0x1c5: Push((int) 14688)
0x1c6: Push((int) 14687)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: Return(); Pop(0)

0x1ca: Push((int) 14688)
0x1cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1cd: PushEmpty(string)
0x1ce: Stack[-1] = "Neutral"
0x1cf: Call 0x9b

0x1d0: Pop(1)
0x1d1: Push((int) 13452)
0x1d2: @@ SetMessage(Stack[-1])
0x1d3: Pop(1)
0x1d4: @@ ClearReplies()
0x1d5: Pop(0)
0x1d6: Push((int) 13453)
0x1d7: Push((int) 14690)
0x1d8: Push((int) 14689)
0x1d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1da: Pop(3)
0x1db: Return(); Pop(0)

0x1dc: Push((int) 14690)
0x1dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1df: PushEmpty(string)
0x1e0: Stack[-1] = "Neutral"
0x1e1: Call 0x9b

0x1e2: Pop(1)
0x1e3: Push((int) 13454)
0x1e4: @@ SetMessage(Stack[-1])
0x1e5: Pop(1)
0x1e6: @@ ClearReplies()
0x1e7: Pop(0)
0x1e8: Push((int) 13455)
0x1e9: Push((int) 14694)
0x1ea: Push((int) 14691)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Push((int) 13456)
0x1ee: Push((int) -1)
0x1ef: Push((int) 14692)
0x1f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f1: Pop(3)
0x1f2: Return(); Pop(0)

0x1f3: Push((int) 14686)
0x1f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1f6: PushEmpty(string)
0x1f7: Stack[-1] = "Neutral"
0x1f8: Call 0x9b

0x1f9: Pop(1)
0x1fa: Push((int) 13450)
0x1fb: @@ SetMessage(Stack[-1])
0x1fc: Pop(1)
0x1fd: @@ ClearReplies()
0x1fe: Pop(0)
0x1ff: Push((int) 13457)
0x200: Push((int) 14694)
0x201: Push((int) 14693)
0x202: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x203: Pop(3)
0x204: Return(); Pop(0)

0x205: Push((int) 14694)
0x206: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x208: PushEmpty(string)
0x209: Stack[-1] = "Neutral"
0x20a: Call 0x9b

0x20b: Pop(1)
0x20c: Push((int) 13458)
0x20d: @@ SetMessage(Stack[-1])
0x20e: Pop(1)
0x20f: @@ ClearReplies()
0x210: Pop(0)
0x211: Push((int) 13459)
0x212: Push((int) -1)
0x213: Push((int) 14696)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: Return(); Pop(0)

0x217: Push((int) 14661)
0x218: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x21a: PushEmpty(string)
0x21b: Stack[-1] = "Neutral"
0x21c: Call 0x9b

0x21d: Pop(1)
0x21e: Push((int) 13425)
0x21f: @@ SetMessage(Stack[-1])
0x220: Pop(1)
0x221: @@ ClearReplies()
0x222: Pop(0)
0x223: Push((int) 13426)
0x224: Push((int) 14663)
0x225: Push((int) 14662)
0x226: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x227: Pop(3)
0x228: Return(); Pop(0)

0x229: Push((int) 14663)
0x22a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22b: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x22c: PushEmpty(string)
0x22d: Stack[-1] = "Neutral"
0x22e: Call 0x9b

0x22f: Pop(1)
0x230: Push((int) 13427)
0x231: @@ SetMessage(Stack[-1])
0x232: Pop(1)
0x233: @@ ClearReplies()
0x234: Pop(0)
0x235: Push((int) 13428)
0x236: Push((int) 14665)
0x237: Push((int) 14664)
0x238: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x239: Pop(3)
0x23a: Return(); Pop(0)

0x23b: Push((int) 14665)
0x23c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23d: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x23e: PushEmpty(string)
0x23f: Stack[-1] = "Neutral"
0x240: Call 0x9b

0x241: Pop(1)
0x242: Push((int) 13429)
0x243: @@ SetMessage(Stack[-1])
0x244: Pop(1)
0x245: @@ ClearReplies()
0x246: Pop(0)
0x247: Push((int) 13430)
0x248: Push((int) 14667)
0x249: Push((int) 14666)
0x24a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24b: Pop(3)
0x24c: Return(); Pop(0)

0x24d: Push((int) 14667)
0x24e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x250: PushEmpty(string)
0x251: Stack[-1] = "Neutral"
0x252: Call 0x9b

0x253: Pop(1)
0x254: Push((int) 13431)
0x255: @@ SetMessage(Stack[-1])
0x256: Pop(1)
0x257: @@ ClearReplies()
0x258: Pop(0)
0x259: Push((int) 13432)
0x25a: Push((int) -1)
0x25b: Push((int) 14668)
0x25c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25d: Pop(3)
0x25e: Return(); Pop(0)

0x25f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x260: PushEmpty(bool)
0x261: Call 0x406

0x262: Pop(0)
0x263: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x264: @ lshStopAnimation()
0x265: Pop(0)
0x266: GOTO 0x269

0x267: @ StopAnimation()
0x268: Pop(0)
0x269: Return(); Pop(0)

0x26a: GOTO 0xac

0x26b: Return(); Pop(0)

0x26c: PushEmpty()
0x26d: PushEmpty(int, object)
0x26e: Stack[-1] = Stack[-3]
0x26f: Push(-2, 1); TaskCall(0)
0x270: Call 0x0

0x271: Pop(-2, 1); TaskReturn
0x272: Pop(2)
0x273: Return(); Pop(0)

0x274: @ Hold()
0x275: Pop(0)
0x276: GOTO 0x274

0x277: Return(); Pop(0)

0x278: PushEmpty(bool, bool)
0x279: Push("cleanup")
0x27a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x27b: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x27c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x27d: @ IsLoaded(Stack[-1])
0x27e: Pop(0)
0x27f: PushEmpty(bool)
0x280: Stack[-1] = (bool) 0
0x281: Pop(0); Push((bool) Stack[-2] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x283: PushEmpty(bool)
0x284: Call 0x2a4

0x285: Pop(0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: Stack[-1] = (bool) 1
0x288: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x289: PushEmpty(object)
0x28a: Call 0x2fb

0x28b: Pop(0)
0x28c: @ RemoveActor(Stack[-1])
0x28d: Pop(1)
0x28e: GOTO 0x293

0x28f: Push("restore")
0x290: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x293: Return(); Pop(2)

0x294: PushEmpty(bool)
0x295: Stack[-1] = (bool) 0
0x296: Push( Stack[0 + Tasks[-1].StackPointer] )
0x297: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x298: PushEmpty(bool)
0x299: Call 0x2a4

0x29a: Pop(0)
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: Stack[-1] = (bool) 1
0x29d: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x29e: PushEmpty(object)
0x29f: Call 0x2fb

0x2a0: Pop(0)
0x2a1: @ RemoveActor(Stack[-1])
0x2a2: Pop(1)
0x2a3: Return(); Pop(0)

0x2a4: Stack[-1] = (bool) 1
0x2a5: Return(); Pop(0)

0x2a6: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x2a7: @@ GetPosition(Stack[-7])
0x2a8: Pop(0)
0x2a9: @@ GetEyesHeight(Stack[-8])
0x2aa: Pop(0)
0x2ab: Push(CvectorIndex(Stack[-7], 1))
0x2ac: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x2ad: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2ae: @ GetPosition(Stack[-6])
0x2af: Pop(0)
0x2b0: @ GetEyesHeight(Stack[-8])
0x2b1: Pop(0)
0x2b2: Push(CvectorIndex(Stack[-6], 1))
0x2b3: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x2b4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2b5: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x2b6: Push(CvectorIndex(Stack[-5], 1))
0x2b7: Stack[-1] = (int) 0
0x2b8: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x2b9: Pop(0); Push(Stack[-5] | Stack[-5]);
0x2ba: Pop(1); Push(Sqrt(Stack[-1]))
0x2bb: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x2bc: Stack[-4] = -Stack[-5]; Pop(0);
0x2bd: Push((int) 70)
0x2be: Pop(1); Push(Stack[-6] * Stack[-1]);
0x2bf: PushEmpty(cvector, cvector)
0x2c0: Push(CVector(0.0, 1.0, 0.0))
0x2c1: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x2c2: Call 0x301

0x2c3: Pop(1)
0x2c4: Push((int) 25)
0x2c5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2c6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c7: Push(CVector(0.0, 10.0, 0.0))
0x2c8: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x2c9: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x2ca: @ IsOverrideActive(Stack[-1])
0x2cb: Pop(0)
0x2cc: Push(Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ce: Stack[-18] = (bool) 0
0x2cf: Return(); Pop(16)

0x2d0: @ StopWorld()
0x2d1: Pop(0)
0x2d2: @ CameraTransit(Stack[-2], Stack[-4])
0x2d3: Pop(0)
0x2d4: Push(CvectorIndex(Stack[-3], 0))
0x2d5: Push(CvectorIndex(Stack[-4], 2))
0x2d6: @ Rotate(Stack[-2], Stack[-1])
0x2d7: Pop(2)
0x2d8: @ CameraWaitForPlayFinish()
0x2d9: Pop(0)
0x2da: @ ResumeWorld()
0x2db: Pop(0)
0x2dc: Stack[-18] = (bool) 1
0x2dd: Return(); Pop(16)

0x2de: PushEmpty()
0x2df: @ CameraSwitchToNormal()
0x2e0: Pop(0)
0x2e1: Return(); Pop(0)

0x2e2: PushEmpty(float, float, float, float)
0x2e3: Push("playing ")
0x2e4: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2e5: @ Trace(Stack[-1])
0x2e6: Pop(1)
0x2e7: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2e8: Pop(0)
0x2e9: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x2ea: Pop(0)
0x2eb: Push("start: ")
0x2ec: Pop(1); Push(Stack[-1] + Stack[-3]);
0x2ed: @ Trace(Stack[-1])
0x2ee: Pop(1)
0x2ef: Push("end: ")
0x2f0: Pop(1); Push(Stack[-1] + Stack[-2]);
0x2f1: @ Trace(Stack[-1])
0x2f2: Pop(1)
0x2f3: Return(); Pop(4)

0x2f4: PushEmpty(bool)
0x2f5: Call 0x406

0x2f6: Pop(0)
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f8: @ lshStopSpeech()
0x2f9: Pop(0)
0x2fa: Return(); Pop(0)

0x2fb: PushEmpty(object, object)
0x2fc: @ self(Stack[-1])
0x2fd: Pop(0)
0x2fe: Stack[-3] = Stack[-1]
0x2ff: Return(); Pop(2)

0x300: Stack[-1] = 0
0x301: PushEmpty(float, float)
0x302: Pop(0); Push(Stack[-3] | Stack[-3]);
0x303: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x304: Push((float)0.0)
0x305: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x309; Pop(1)

0x307: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x308: Return(); Pop(2)

0x309: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x30a: Return(); Pop(2)

0x30b: PushEmpty(int, int)
0x30c: @ GetVariable(Stack[-3], Stack[-1])
0x30d: Pop(0)
0x30e: Stack[-4] = Stack[-1]
0x30f: Return(); Pop(2)

0x310: PushEmpty(int, int, bool, int, int, bool)
0x311: @@ GetItemID(Stack[-3])
0x312: Pop(0)
0x313: Push("Category")
0x314: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x315: Pop(1)
0x316: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x317: Pop(0)
0x318: Pop(0); Push((bool) Stack[-1] == 0)
0x319: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x31a: @@ DropItems(Stack[-8], Stack[-7])
0x31b: Pop(0)
0x31c: Return(); Pop(6)

0x31d: PushEmpty(object, object)
0x31e: @ CreateInvItem(Stack[-1])
0x31f: Pop(0)
0x320: @@ SetItemName(Stack[-4])
0x321: Pop(0)
0x322: PushEmpty(object, object, int)
0x323: Stack[-3] = Stack[-8]
0x324: Stack[-2] = Stack[-4]
0x325: Stack[-1] = Stack[-6]
0x326: Call 0x310

0x327: Pop(3)
0x328: Return(); Pop(2)

0x329: Stack[-1] = 0
0x32a: PushEmpty()
0x32b: Push("playsound")
0x32c: Push("giveitem")
0x32d: @ TriggerWorld(Stack[-2], Stack[-1])
0x32e: Pop(2)
0x32f: Return(); Pop(0)

0x330: PushEmpty()
0x331: Push("d8q03")
0x332: Push((int) 1)
0x333: @ SetVariable(Stack[-2], Stack[-1])
0x334: Pop(2)
0x335: PushEmpty()
0x336: Call 0x3d2

0x337: Pop(0)
0x338: Return(); Pop(0)

0x339: PushEmpty()
0x33a: Push("d8q03")
0x33b: Push((int) 1000)
0x33c: @ SetVariable(Stack[-2], Stack[-1])
0x33d: Pop(2)
0x33e: PushEmpty()
0x33f: Call 0x3e2

0x340: Pop(0)
0x341: Return(); Pop(0)

0x342: PushEmpty()
0x343: Push("burah gives blood")
0x344: @ Trace(Stack[-1])
0x345: Pop(1)
0x346: PushEmpty(object, string, int)
0x347: Stack[-3] = Stack[-5]
0x348: Stack[-2] = "d8q03_blood"
0x349: Stack[-1] = (int) 1
0x34a: Call 0x31d

0x34b: Pop(3)
0x34c: Return(); Pop(0)

0x34d: PushEmpty()
0x34e: Push("d8q03")
0x34f: Push((int) -1)
0x350: @ SetVariable(Stack[-2], Stack[-1])
0x351: Pop(2)
0x352: PushEmpty()
0x353: Call 0x3f2

0x354: Pop(0)
0x355: Return(); Pop(0)

0x356: PushEmpty()
0x357: Push("burah gives serum")
0x358: @ Trace(Stack[-1])
0x359: Pop(1)
0x35a: PushEmpty(object, string, int)
0x35b: Stack[-3] = Stack[-5]
0x35c: Stack[-2] = "burah_serum"
0x35d: Stack[-1] = (int) 1
0x35e: Call 0x31d

0x35f: Pop(3)
0x360: Return(); Pop(0)

0x361: PushEmpty()
0x362: Push("ood8Burah1")
0x363: Push((int) 1)
0x364: @ SetVariable(Stack[-2], Stack[-1])
0x365: Pop(2)
0x366: Return(); Pop(0)

0x367: PushEmpty()
0x368: PushEmpty(int, string)
0x369: Stack[-1] = "d8q03"
0x36a: Call 0x30b

0x36b: Pop(1)
0x36c: Push((int) 0)
0x36d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36f: Stack[-2] = (bool) 1
0x370: Return(); Pop(0)

0x371: Stack[-2] = (bool) 0
0x372: Return(); Pop(0)

0x373: PushEmpty()
0x374: PushEmpty(int, string)
0x375: Stack[-1] = "microscope_d8q03_blood"
0x376: Call 0x30b

0x377: Pop(1)
0x378: Push((int) 1)
0x379: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37b: Stack[-2] = (bool) 1
0x37c: Return(); Pop(0)

0x37d: Stack[-2] = (bool) 0
0x37e: Return(); Pop(0)

0x37f: PushEmpty()
0x380: PushEmpty(int, string)
0x381: Stack[-1] = "d8q03"
0x382: Call 0x30b

0x383: Pop(1)
0x384: Push((int) 1)
0x385: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x386: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x387: Stack[-2] = (bool) 1
0x388: Return(); Pop(0)

0x389: Stack[-2] = (bool) 0
0x38a: Return(); Pop(0)

0x38b: PushEmpty()
0x38c: PushEmpty(int, string)
0x38d: Stack[-1] = "ood8Burah1"
0x38e: Call 0x30b

0x38f: Pop(1)
0x390: Push((int) 0)
0x391: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x393: Stack[-2] = (bool) 1
0x394: Return(); Pop(0)

0x395: Stack[-2] = (bool) 0
0x396: Return(); Pop(0)

0x397: PushEmpty(object, object)
0x398: @ GetDiaryRoot(Stack[-1])
0x399: Pop(0)
0x39a: Pop(0); Push((bool) Stack[-1] == 0)
0x39b: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39c: Push("Can't retrieve diary root")
0x39d: @ Trace(Stack[-1])
0x39e: Pop(1)
0x39f: Stack[-3] = (bool) 0
0x3a0: Return(); Pop(2)

0x3a1: Stack[-3] = Stack[-1]
0x3a2: Return(); Pop(2)

0x3a3: Stack[-1] = 0
0x3a4: PushEmpty(object, object, int, object, object, int)
0x3a5: PushEmpty(object)
0x3a6: Call 0x397

0x3a7: Stack[-4] = Stack[-1]
0x3a8: Pop(1)
0x3a9: @@ Find(Stack[-7], Stack[-2])
0x3aa: Pop(0)
0x3ab: Pop(0); Push((bool) Stack[-2] == 0)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3ad: Push("Can't find diary parent with id: ")
0x3ae: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3af: @ Trace(Stack[-1])
0x3b0: Pop(1)
0x3b1: Stack[-9] = (bool) 0
0x3b2: Return(); Pop(6)

0x3b3: @@ AddChild(Stack[-8])
0x3b4: Pop(0)
0x3b5: Push("player_diary")
0x3b6: Push((int) 1)
0x3b7: @ SetVariable(Stack[-2], Stack[-1])
0x3b8: Pop(2)
0x3b9: @@ GetCategory(Stack[-1])
0x3ba: Pop(0)
0x3bb: @ SetDiarySection(Stack[-1])
0x3bc: Pop(0)
0x3bd: Stack[-9] = (bool) 0
0x3be: Return(); Pop(6)

0x3bf: Stack[-2] = 0
0x3c0: Stack[-3] = 0
0x3c1: PushEmpty(int, int)
0x3c2: Push("player")
0x3c3: @ GetVariable(Stack[-1], Stack[-2])
0x3c4: Pop(1)
0x3c5: Push((int) 0)
0x3c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c7: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c8: Stack[-3] = (int) 200001
0x3c9: Return(); Pop(2)

0x3ca: GOTO 0x3d0

0x3cb: Push((int) 1)
0x3cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3ce: Stack[-3] = (int) 200002
0x3cf: Return(); Pop(2)

0x3d0: Stack[-3] = (int) 200003
0x3d1: Return(); Pop(2)

0x3d2: PushEmpty(object, object)
0x3d3: Push("Adding diary entry")
0x3d4: @ Trace(Stack[-1])
0x3d5: Pop(1)
0x3d6: Push((int) 124)
0x3d7: Push((int) 2)
0x3d8: Push((int) 13763)
0x3d9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3da: Pop(3)
0x3db: PushEmpty(bool, object, int)
0x3dc: Stack[-2] = Stack[-4]
0x3dd: Stack[-1] = (int) -1
0x3de: Call 0x3a4

0x3df: Pop(3)
0x3e0: Return(); Pop(2)

0x3e1: Stack[-1] = 0
0x3e2: PushEmpty(object, object)
0x3e3: Push("Adding diary entry")
0x3e4: @ Trace(Stack[-1])
0x3e5: Pop(1)
0x3e6: Push((int) 125)
0x3e7: Push((int) 2)
0x3e8: Push((int) 13764)
0x3e9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3ea: Pop(3)
0x3eb: PushEmpty(bool, object, int)
0x3ec: Stack[-2] = Stack[-4]
0x3ed: Stack[-1] = (int) 124
0x3ee: Call 0x3a4

0x3ef: Pop(3)
0x3f0: Return(); Pop(2)

0x3f1: Stack[-1] = 0
0x3f2: PushEmpty(object, object)
0x3f3: Push("Adding diary entry")
0x3f4: @ Trace(Stack[-1])
0x3f5: Pop(1)
0x3f6: Push((int) 126)
0x3f7: Push((int) 2)
0x3f8: Push((int) 13765)
0x3f9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3fa: Pop(3)
0x3fb: PushEmpty(bool, object, int)
0x3fc: Stack[-2] = Stack[-4]
0x3fd: Stack[-1] = (int) 124
0x3fe: Call 0x3a4

0x3ff: Pop(3)
0x400: Return(); Pop(2)

0x401: Stack[-1] = 0
0x402: Stack[-1] = (int) 11961
0x403: Return(); Pop(0)

0x404: Stack[-1] = "ui/NPC_Burah.png"
0x405: Return(); Pop(0)

0x406: Stack[-1] = (bool) 1
0x407: Return(); Pop(0)

