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
	klara blood is given
	d6q01_klara_blood
	playsound
	giveitem
	ood6Klara1
	ood6Klara2
	d6q01KlaraVolonteer
	d6q01AlexandrGotoJulia
	FindMark
	Remove
	d6q01AlexandrGotoKaterina
	d6q01AlexandrGotoLara
	d6q01AlexangrGotoJulLaraSelf
	d6q01BigVladGotoAnna
	d6q01BigVladGotoAnnaOspinaSelf
	d6q01BigVladGotoOspina
	d6q01KaterinaGotoLaska
	d6q01KaterinagotoLaskaSelf
	d6q01KillerIsKlara
	d6q01LaskaGotoAlbinos
	d6q01ViktorGotoAlexandr
	d6q01ViktorGotoAlxBigSelf
	d6q01ViktorGotoBigVlad
	quest_d6_01
	completed
	ood6Klara3
	d6q01
	microscope_d6q01_klara_blood
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Can't find main outdoor scene
	GetMap
	player
	Adding diary entry
	ui/NPC_Klara.png

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
	FindActor (2 args)
	Trigger (2 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x482
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x101 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x47a Vars = (object)
		EVENT_26 Op = 0x486 Vars = (string)
		EVENT_6 Op = 0x4a2 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x4b4

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x6de

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x6e0

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x6bd

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
0x36: Call 0x4ec

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
0x44: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0x45: PushEmpty(bool)
0x46: Stack[-1] = (bool) 1
0x47: PushEmpty(bool)
0x48: Stack[-1] = (bool) 0
0x49: PushEmpty(bool, object)
0x4a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b: Call 0x61d

0x4c: Pop(1)
0x4d: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x4e: PushEmpty(bool, object)
0x4f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x50: Call 0x5f9

0x51: Pop(1)
0x52: IF (Stack[-1] == 0) GOTO 0x54; Pop(1)

0x53: Stack[-1] = (bool) 1
0x54: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x55: PushEmpty(bool)
0x56: Stack[-1] = (bool) 0
0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call 0x605

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5c: PushEmpty(bool, object)
0x5d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Call 0x61d

0x5f: Pop(1)
0x60: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x61: Stack[-1] = (bool) 1
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: Stack[-1] = (bool) 0
0x64: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x65: PushEmpty(object, object)
0x66: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68: Call 0x558

0x69: Pop(2)
0x6a: PushEmpty(string)
0x6b: Stack[-1] = "Neutral"
0x6c: Call 0xf1

0x6d: Pop(1)
0x6e: Push((int) 12737)
0x6f: @@ SetMessage(Stack[-1])
0x70: Pop(1)
0x71: @@ ClearReplies()
0x72: Pop(0)
0x73: Push((int) 12738)
0x74: Push((int) 13933)
0x75: Push((int) 13932)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: Push((int) 12744)
0x79: Push((int) 13965)
0x7a: Push((int) 13938)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: Push((int) 12745)
0x7e: Push((int) 13954)
0x7f: Push((int) 13939)
0x80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81: Pop(3)
0x82: GOTO 0xd3

0x83: PushEmpty(bool)
0x84: Stack[-1] = (bool) 1
0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call 0x629

0x88: Pop(1)
0x89: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8a: PushEmpty(bool, object)
0x8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c: Call 0x611

0x8d: Pop(1)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Stack[-1] = (bool) 0
0x90: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0x91: PushEmpty(string)
0x92: Stack[-1] = "Neutral"
0x93: Call 0xf1

0x94: Pop(1)
0x95: Push((int) 12748)
0x96: @@ SetMessage(Stack[-1])
0x97: Pop(1)
0x98: @@ ClearReplies()
0x99: Pop(0)
0x9a: PushEmpty(bool, object)
0x9b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c: Call 0x635

0x9d: Pop(1)
0x9e: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x9f: Push((int) 12749)
0xa0: Push((int) 3753)
0xa1: Push((int) 13943)
0xa2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3: Pop(3)
0xa4: PushEmpty(bool)
0xa5: Stack[-1] = (bool) 0
0xa6: PushEmpty(bool)
0xa7: Stack[-1] = (bool) 0
0xa8: PushEmpty(bool)
0xa9: Stack[-1] = (bool) 0
0xaa: PushEmpty(bool, object)
0xab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xac: Call 0x665

0xad: Pop(1)
0xae: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xaf: PushEmpty(bool, object)
0xb0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Call 0x641

0xb2: Pop(1)
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: Stack[-1] = (bool) 1
0xb5: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb6: PushEmpty(bool, object)
0xb7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb8: Call 0x64d

0xb9: Pop(1)
0xba: Pop(1); Push((bool) Stack[-1] == 0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbc: Stack[-1] = (bool) 1
0xbd: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xbe: PushEmpty(bool, object)
0xbf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Call 0x659

0xc1: Pop(1)
0xc2: Pop(1); Push((bool) Stack[-1] == 0)
0xc3: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc4: Stack[-1] = (bool) 1
0xc5: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc6: Push((int) 12750)
0xc7: Push((int) 11864)
0xc8: Push((int) 13944)
0xc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca: Pop(3)
0xcb: Push((int) 12769)
0xcc: Push((int) -1)
0xcd: Push((int) 13968)
0xce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf: Pop(3)
0xd0: GOTO 0xd3

0xd1: Return(); Pop(0)

0xd2: GOTO 0x43

0xd3: PushEmpty(bool)
0xd4: Call 0x6e2

0xd5: Pop(0)
0xd6: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xd7: @ lshWaitForAnimEnd()
0xd8: Pop(0)
0xd9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xda: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xdb: GOTO 0xe1

0xdc: PushEmpty(string)
0xdd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xde: Call 0x4f0

0xdf: Pop(1)
0xe0: GOTO 0xd7

0xe1: GOTO 0xf0

0xe2: Push("all")
0xe3: Push("idle")
0xe4: @ PlayAnimation(Stack[-2], Stack[-1])
0xe5: Pop(2)
0xe6: @ WaitForAnimEnd()
0xe7: Pop(0)
0xe8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe9: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xea: GOTO 0xf0

0xeb: Push("all")
0xec: Push("idle")
0xed: @ PlayAnimation(Stack[-2], Stack[-1])
0xee: Pop(2)
0xef: GOTO 0xe6

0xf0: Return(); Pop(0)

0xf1: PushEmpty()
0xf2: PushEmpty(bool)
0xf3: Call 0x6e2

0xf4: Pop(0)
0xf5: Pop(1); Push((bool) Stack[-1] == 0)
0xf6: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf7: Return(); Pop(0)

0xf8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf9: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xfa: Return(); Pop(0)

0xfb: PushEmpty(string)
0xfc: Stack[-1] = Stack[-2]
0xfd: Call 0x4f0

0xfe: Pop(1)
0xff: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x100: Return(); Pop(0)

0x101: PushEmpty()
0x102: Push((int) 1)
0x103: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x104: PushEmpty()
0x105: Call 0x502

0x106: Pop(0)
0x107: Push((int) 13943)
0x108: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10a: PushEmpty(object, object)
0x10b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d: Call 0x55e

0x10e: Pop(2)
0x10f: Push((int) 3807)
0x110: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x112: PushEmpty(object, object)
0x113: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x114: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x115: Call 0x544

0x116: Pop(2)
0x117: PushEmpty(object, object)
0x118: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x119: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11a: Call 0x552

0x11b: Pop(2)
0x11c: Push((int) 3812)
0x11d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x11f: PushEmpty(object, object)
0x120: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x121: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x122: Call 0x544

0x123: Pop(2)
0x124: PushEmpty(object, object)
0x125: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x126: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x127: Call 0x552

0x128: Pop(2)
0x129: Push((int) 13944)
0x12a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12c: PushEmpty(object, object)
0x12d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12f: Call 0x5f3

0x130: Pop(2)
0x131: Push((int) 11873)
0x132: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x134: PushEmpty(object, object)
0x135: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x136: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x137: Call 0x564

0x138: Pop(2)
0x139: Push((int) 13931)
0x13a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13b: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x13c: PushEmpty(bool)
0x13d: Stack[-1] = (bool) 1
0x13e: PushEmpty(bool)
0x13f: Stack[-1] = (bool) 0
0x140: PushEmpty(bool, object)
0x141: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x142: Call 0x61d

0x143: Pop(1)
0x144: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x145: PushEmpty(bool, object)
0x146: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x147: Call 0x5f9

0x148: Pop(1)
0x149: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x14a: Stack[-1] = (bool) 1
0x14b: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x14c: PushEmpty(bool)
0x14d: Stack[-1] = (bool) 0
0x14e: PushEmpty(bool, object)
0x14f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x150: Call 0x605

0x151: Pop(1)
0x152: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x153: PushEmpty(bool, object)
0x154: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x155: Call 0x61d

0x156: Pop(1)
0x157: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x158: Stack[-1] = (bool) 1
0x159: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x15a: Stack[-1] = (bool) 0
0x15b: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x15c: PushEmpty(object, object)
0x15d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15f: Call 0x558

0x160: Pop(2)
0x161: PushEmpty(string)
0x162: Stack[-1] = "Neutral"
0x163: Call 0xf1

0x164: Pop(1)
0x165: Push((int) 12737)
0x166: @@ SetMessage(Stack[-1])
0x167: Pop(1)
0x168: @@ ClearReplies()
0x169: Pop(0)
0x16a: Push((int) 12738)
0x16b: Push((int) 13933)
0x16c: Push((int) 13932)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: Push((int) 12744)
0x170: Push((int) 13965)
0x171: Push((int) 13938)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Push((int) 12745)
0x175: Push((int) 13954)
0x176: Push((int) 13939)
0x177: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x178: Pop(3)
0x179: Return(); Pop(0)

0x17a: PushEmpty(bool)
0x17b: Stack[-1] = (bool) 1
0x17c: PushEmpty(bool, object)
0x17d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17e: Call 0x629

0x17f: Pop(1)
0x180: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x181: PushEmpty(bool, object)
0x182: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x183: Call 0x611

0x184: Pop(1)
0x185: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x186: Stack[-1] = (bool) 0
0x187: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Neutral"
0x18a: Call 0xf1

0x18b: Pop(1)
0x18c: Push((int) 12748)
0x18d: @@ SetMessage(Stack[-1])
0x18e: Pop(1)
0x18f: @@ ClearReplies()
0x190: Pop(0)
0x191: PushEmpty(bool, object)
0x192: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x193: Call 0x635

0x194: Pop(1)
0x195: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x196: Push((int) 12749)
0x197: Push((int) 3753)
0x198: Push((int) 13943)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: PushEmpty(bool)
0x19c: Stack[-1] = (bool) 0
0x19d: PushEmpty(bool)
0x19e: Stack[-1] = (bool) 0
0x19f: PushEmpty(bool)
0x1a0: Stack[-1] = (bool) 0
0x1a1: PushEmpty(bool, object)
0x1a2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a3: Call 0x665

0x1a4: Pop(1)
0x1a5: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a6: PushEmpty(bool, object)
0x1a7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a8: Call 0x641

0x1a9: Pop(1)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1ab: Stack[-1] = (bool) 1
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1ad: PushEmpty(bool, object)
0x1ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1af: Call 0x64d

0x1b0: Pop(1)
0x1b1: Pop(1); Push((bool) Stack[-1] == 0)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b3: Stack[-1] = (bool) 1
0x1b4: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1b5: PushEmpty(bool, object)
0x1b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b7: Call 0x659

0x1b8: Pop(1)
0x1b9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ba: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1bb: Stack[-1] = (bool) 1
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bd: Push((int) 12750)
0x1be: Push((int) 11864)
0x1bf: Push((int) 13944)
0x1c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c1: Pop(3)
0x1c2: Push((int) 12769)
0x1c3: Push((int) -1)
0x1c4: Push((int) 13968)
0x1c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c6: Pop(3)
0x1c7: Return(); Pop(0)

0x1c8: Push((int) 11864)
0x1c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1cb: PushEmpty(string)
0x1cc: Stack[-1] = "Neutral"
0x1cd: Call 0xf1

0x1ce: Pop(1)
0x1cf: Push((int) 10739)
0x1d0: @@ SetMessage(Stack[-1])
0x1d1: Pop(1)
0x1d2: @@ ClearReplies()
0x1d3: Pop(0)
0x1d4: Push((int) 10740)
0x1d5: Push((int) 11866)
0x1d6: Push((int) 11865)
0x1d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d8: Pop(3)
0x1d9: Push((int) 10752)
0x1da: Push((int) 11866)
0x1db: Push((int) 11879)
0x1dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dd: Pop(3)
0x1de: Return(); Pop(0)

0x1df: Push((int) 11866)
0x1e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1e2: PushEmpty(string)
0x1e3: Stack[-1] = "Neutral"
0x1e4: Call 0xf1

0x1e5: Pop(1)
0x1e6: Push((int) 10741)
0x1e7: @@ SetMessage(Stack[-1])
0x1e8: Pop(1)
0x1e9: @@ ClearReplies()
0x1ea: Pop(0)
0x1eb: Push((int) 10742)
0x1ec: Push((int) 11868)
0x1ed: Push((int) 11867)
0x1ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ef: Pop(3)
0x1f0: Push((int) 10751)
0x1f1: Push((int) 11870)
0x1f2: Push((int) 11877)
0x1f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f4: Pop(3)
0x1f5: Return(); Pop(0)

0x1f6: Push((int) 11868)
0x1f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x1f9: PushEmpty(string)
0x1fa: Stack[-1] = "Neutral"
0x1fb: Call 0xf1

0x1fc: Pop(1)
0x1fd: Push((int) 10743)
0x1fe: @@ SetMessage(Stack[-1])
0x1ff: Pop(1)
0x200: @@ ClearReplies()
0x201: Pop(0)
0x202: Push((int) 10744)
0x203: Push((int) 11870)
0x204: Push((int) 11869)
0x205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x206: Pop(3)
0x207: Push((int) 10749)
0x208: Push((int) 11870)
0x209: Push((int) 11874)
0x20a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20b: Pop(3)
0x20c: Push((int) 10750)
0x20d: Push((int) -1)
0x20e: Push((int) 11876)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: Return(); Pop(0)

0x212: Push((int) 11870)
0x213: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x215: PushEmpty(string)
0x216: Stack[-1] = "Neutral"
0x217: Call 0xf1

0x218: Pop(1)
0x219: Push((int) 10745)
0x21a: @@ SetMessage(Stack[-1])
0x21b: Pop(1)
0x21c: @@ ClearReplies()
0x21d: Pop(0)
0x21e: Push((int) 10746)
0x21f: Push((int) -1)
0x220: Push((int) 11871)
0x221: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x222: Pop(3)
0x223: Push((int) 10747)
0x224: Push((int) -1)
0x225: Push((int) 11872)
0x226: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x227: Pop(3)
0x228: Push((int) 10748)
0x229: Push((int) -1)
0x22a: Push((int) 11873)
0x22b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22c: Pop(3)
0x22d: Return(); Pop(0)

0x22e: Push((int) 3753)
0x22f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x231: PushEmpty(string)
0x232: Stack[-1] = "Neutral"
0x233: Call 0xf1

0x234: Pop(1)
0x235: Push((int) 3483)
0x236: @@ SetMessage(Stack[-1])
0x237: Pop(1)
0x238: @@ ClearReplies()
0x239: Pop(0)
0x23a: Push((int) 3484)
0x23b: Push((int) 3756)
0x23c: Push((int) 3754)
0x23d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23e: Pop(3)
0x23f: Push((int) 3485)
0x240: Push((int) 3778)
0x241: Push((int) 3755)
0x242: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x243: Pop(3)
0x244: Push((int) 3508)
0x245: Push((int) 3763)
0x246: Push((int) 3783)
0x247: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x248: Pop(3)
0x249: Return(); Pop(0)

0x24a: Push((int) 3778)
0x24b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24c: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x24d: PushEmpty(string)
0x24e: Stack[-1] = "Neutral"
0x24f: Call 0xf1

0x250: Pop(1)
0x251: Push((int) 3505)
0x252: @@ SetMessage(Stack[-1])
0x253: Pop(1)
0x254: @@ ClearReplies()
0x255: Pop(0)
0x256: Push((int) 3506)
0x257: Push((int) 3775)
0x258: Push((int) 3779)
0x259: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25a: Pop(3)
0x25b: Push((int) 3507)
0x25c: Push((int) 3763)
0x25d: Push((int) 3781)
0x25e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25f: Pop(3)
0x260: Return(); Pop(0)

0x261: Push((int) 3756)
0x262: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x263: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x264: PushEmpty(string)
0x265: Stack[-1] = "Neutral"
0x266: Call 0xf1

0x267: Pop(1)
0x268: Push((int) 3486)
0x269: @@ SetMessage(Stack[-1])
0x26a: Pop(1)
0x26b: @@ ClearReplies()
0x26c: Pop(0)
0x26d: Push((int) 3487)
0x26e: Push((int) 3775)
0x26f: Push((int) 3757)
0x270: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x271: Pop(3)
0x272: Push((int) 3488)
0x273: Push((int) 3770)
0x274: Push((int) 3758)
0x275: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x276: Pop(3)
0x277: Push((int) 3489)
0x278: Push((int) 3760)
0x279: Push((int) 3759)
0x27a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27b: Pop(3)
0x27c: Push((int) 3491)
0x27d: Push((int) 3763)
0x27e: Push((int) 3761)
0x27f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x280: Pop(3)
0x281: Return(); Pop(0)

0x282: Push((int) 3760)
0x283: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x285: PushEmpty(string)
0x286: Stack[-1] = "Neutral"
0x287: Call 0xf1

0x288: Pop(1)
0x289: Push((int) 3490)
0x28a: @@ SetMessage(Stack[-1])
0x28b: Pop(1)
0x28c: @@ ClearReplies()
0x28d: Pop(0)
0x28e: Push((int) 3492)
0x28f: Push((int) 3763)
0x290: Push((int) 3762)
0x291: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x292: Pop(3)
0x293: Push((int) 3509)
0x294: Push((int) 3786)
0x295: Push((int) 3785)
0x296: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x297: Pop(3)
0x298: Return(); Pop(0)

0x299: Push((int) 3786)
0x29a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x29c: PushEmpty(string)
0x29d: Stack[-1] = "Neutral"
0x29e: Call 0xf1

0x29f: Pop(1)
0x2a0: Push((int) 3510)
0x2a1: @@ SetMessage(Stack[-1])
0x2a2: Pop(1)
0x2a3: @@ ClearReplies()
0x2a4: Pop(0)
0x2a5: Push((int) 3511)
0x2a6: Push((int) 3788)
0x2a7: Push((int) 3787)
0x2a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a9: Pop(3)
0x2aa: Push((int) 3515)
0x2ab: Push((int) 3766)
0x2ac: Push((int) 3793)
0x2ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: Return(); Pop(0)

0x2b0: Push((int) 3788)
0x2b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2b3: PushEmpty(string)
0x2b4: Stack[-1] = "Neutral"
0x2b5: Call 0xf1

0x2b6: Pop(1)
0x2b7: Push((int) 3512)
0x2b8: @@ SetMessage(Stack[-1])
0x2b9: Pop(1)
0x2ba: @@ ClearReplies()
0x2bb: Pop(0)
0x2bc: Push((int) 3513)
0x2bd: Push((int) 3775)
0x2be: Push((int) 3789)
0x2bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c0: Pop(3)
0x2c1: Push((int) 3514)
0x2c2: Push((int) 3766)
0x2c3: Push((int) 3791)
0x2c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c5: Pop(3)
0x2c6: Return(); Pop(0)

0x2c7: Push((int) 3763)
0x2c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2ca: PushEmpty(string)
0x2cb: Stack[-1] = "Neutral"
0x2cc: Call 0xf1

0x2cd: Pop(1)
0x2ce: Push((int) 3493)
0x2cf: @@ SetMessage(Stack[-1])
0x2d0: Pop(1)
0x2d1: @@ ClearReplies()
0x2d2: Pop(0)
0x2d3: Push((int) 3494)
0x2d4: Push((int) 3766)
0x2d5: Push((int) 3764)
0x2d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d7: Pop(3)
0x2d8: Push((int) 3495)
0x2d9: Push((int) 3766)
0x2da: Push((int) 3765)
0x2db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2dc: Pop(3)
0x2dd: Return(); Pop(0)

0x2de: Push((int) 3766)
0x2df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2e1: PushEmpty(string)
0x2e2: Stack[-1] = "Neutral"
0x2e3: Call 0xf1

0x2e4: Pop(1)
0x2e5: Push((int) 3496)
0x2e6: @@ SetMessage(Stack[-1])
0x2e7: Pop(1)
0x2e8: @@ ClearReplies()
0x2e9: Pop(0)
0x2ea: Push((int) 3497)
0x2eb: Push((int) 3771)
0x2ec: Push((int) 3769)
0x2ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ee: Pop(3)
0x2ef: Push((int) 3501)
0x2f0: Push((int) 3797)
0x2f1: Push((int) 3773)
0x2f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f3: Pop(3)
0x2f4: Push((int) 3502)
0x2f5: Push((int) -1)
0x2f6: Push((int) 3774)
0x2f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f8: Pop(3)
0x2f9: Return(); Pop(0)

0x2fa: Push((int) 3797)
0x2fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x2fd: PushEmpty(string)
0x2fe: Stack[-1] = "Neutral"
0x2ff: Call 0xf1

0x300: Pop(1)
0x301: Push((int) 3517)
0x302: @@ SetMessage(Stack[-1])
0x303: Pop(1)
0x304: @@ ClearReplies()
0x305: Pop(0)
0x306: Push((int) 3518)
0x307: Push((int) -1)
0x308: Push((int) 3798)
0x309: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: Push((int) 3519)
0x30c: Push((int) -1)
0x30d: Push((int) 3799)
0x30e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30f: Pop(3)
0x310: Push((int) 3520)
0x311: Push((int) 3801)
0x312: Push((int) 3800)
0x313: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x314: Pop(3)
0x315: Return(); Pop(0)

0x316: Push((int) 3801)
0x317: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x318: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x319: PushEmpty(string)
0x31a: Stack[-1] = "Neutral"
0x31b: Call 0xf1

0x31c: Pop(1)
0x31d: Push((int) 3521)
0x31e: @@ SetMessage(Stack[-1])
0x31f: Pop(1)
0x320: @@ ClearReplies()
0x321: Pop(0)
0x322: Push((int) 3522)
0x323: Push((int) 3804)
0x324: Push((int) 3802)
0x325: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x326: Pop(3)
0x327: Push((int) 3523)
0x328: Push((int) -1)
0x329: Push((int) 3803)
0x32a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32b: Pop(3)
0x32c: Return(); Pop(0)

0x32d: Push((int) 3804)
0x32e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32f: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x330: PushEmpty(string)
0x331: Stack[-1] = "Neutral"
0x332: Call 0xf1

0x333: Pop(1)
0x334: Push((int) 3524)
0x335: @@ SetMessage(Stack[-1])
0x336: Pop(1)
0x337: @@ ClearReplies()
0x338: Pop(0)
0x339: Push((int) 3525)
0x33a: Push((int) 3770)
0x33b: Push((int) 3805)
0x33c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33d: Pop(3)
0x33e: Return(); Pop(0)

0x33f: Push((int) 3771)
0x340: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x342: PushEmpty(string)
0x343: Stack[-1] = "Neutral"
0x344: Call 0xf1

0x345: Pop(1)
0x346: Push((int) 3499)
0x347: @@ SetMessage(Stack[-1])
0x348: Pop(1)
0x349: @@ ClearReplies()
0x34a: Pop(0)
0x34b: Push((int) 3500)
0x34c: Push((int) 3770)
0x34d: Push((int) 3772)
0x34e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34f: Pop(3)
0x350: Push((int) 3516)
0x351: Push((int) -1)
0x352: Push((int) 3796)
0x353: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x354: Pop(3)
0x355: Return(); Pop(0)

0x356: Push((int) 3770)
0x357: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x359: PushEmpty(string)
0x35a: Stack[-1] = "Neutral"
0x35b: Call 0xf1

0x35c: Pop(1)
0x35d: Push((int) 3498)
0x35e: @@ SetMessage(Stack[-1])
0x35f: Pop(1)
0x360: @@ ClearReplies()
0x361: Pop(0)
0x362: Push((int) 3526)
0x363: Push((int) -1)
0x364: Push((int) 3807)
0x365: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x366: Pop(3)
0x367: Push((int) 3527)
0x368: Push((int) 3809)
0x369: Push((int) 3808)
0x36a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36b: Pop(3)
0x36c: Return(); Pop(0)

0x36d: Push((int) 3809)
0x36e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x370: PushEmpty(string)
0x371: Stack[-1] = "Neutral"
0x372: Call 0xf1

0x373: Pop(1)
0x374: Push((int) 3528)
0x375: @@ SetMessage(Stack[-1])
0x376: Pop(1)
0x377: @@ ClearReplies()
0x378: Pop(0)
0x379: Push((int) 3529)
0x37a: Push((int) 3811)
0x37b: Push((int) 3810)
0x37c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37d: Pop(3)
0x37e: Return(); Pop(0)

0x37f: Push((int) 3811)
0x380: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x381: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x382: PushEmpty(string)
0x383: Stack[-1] = "Neutral"
0x384: Call 0xf1

0x385: Pop(1)
0x386: Push((int) 3530)
0x387: @@ SetMessage(Stack[-1])
0x388: Pop(1)
0x389: @@ ClearReplies()
0x38a: Pop(0)
0x38b: Push((int) 3531)
0x38c: Push((int) -1)
0x38d: Push((int) 3812)
0x38e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38f: Pop(3)
0x390: Push((int) 3532)
0x391: Push((int) -1)
0x392: Push((int) 3813)
0x393: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x394: Pop(3)
0x395: Return(); Pop(0)

0x396: Push((int) 3775)
0x397: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x399: PushEmpty(string)
0x39a: Stack[-1] = "Neutral"
0x39b: Call 0xf1

0x39c: Pop(1)
0x39d: Push((int) 3503)
0x39e: @@ SetMessage(Stack[-1])
0x39f: Pop(1)
0x3a0: @@ ClearReplies()
0x3a1: Pop(0)
0x3a2: Push((int) 3504)
0x3a3: Push((int) 3770)
0x3a4: Push((int) 3776)
0x3a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a6: Pop(3)
0x3a7: Return(); Pop(0)

0x3a8: Push((int) 13965)
0x3a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3ab: PushEmpty(string)
0x3ac: Stack[-1] = "Neutral"
0x3ad: Call 0xf1

0x3ae: Pop(1)
0x3af: Push((int) 12767)
0x3b0: @@ SetMessage(Stack[-1])
0x3b1: Pop(1)
0x3b2: @@ ClearReplies()
0x3b3: Pop(0)
0x3b4: Push((int) 12768)
0x3b5: Push((int) 13933)
0x3b6: Push((int) 13966)
0x3b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b8: Pop(3)
0x3b9: Return(); Pop(0)

0x3ba: Push((int) 13933)
0x3bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3bd: PushEmpty(string)
0x3be: Stack[-1] = "Neutral"
0x3bf: Call 0xf1

0x3c0: Pop(1)
0x3c1: Push((int) 12739)
0x3c2: @@ SetMessage(Stack[-1])
0x3c3: Pop(1)
0x3c4: @@ ClearReplies()
0x3c5: Pop(0)
0x3c6: Push((int) 12740)
0x3c7: Push((int) 13935)
0x3c8: Push((int) 13934)
0x3c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ca: Pop(3)
0x3cb: Push((int) 12746)
0x3cc: Push((int) 13935)
0x3cd: Push((int) 13940)
0x3ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cf: Pop(3)
0x3d0: Push((int) 12747)
0x3d1: Push((int) 13935)
0x3d2: Push((int) 13941)
0x3d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d4: Pop(3)
0x3d5: Return(); Pop(0)

0x3d6: Push((int) 13935)
0x3d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3d9: PushEmpty(string)
0x3da: Stack[-1] = "Neutral"
0x3db: Call 0xf1

0x3dc: Pop(1)
0x3dd: Push((int) 12741)
0x3de: @@ SetMessage(Stack[-1])
0x3df: Pop(1)
0x3e0: @@ ClearReplies()
0x3e1: Pop(0)
0x3e2: Push((int) 12742)
0x3e3: Push((int) 13937)
0x3e4: Push((int) 13936)
0x3e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e6: Pop(3)
0x3e7: Push((int) 12751)
0x3e8: Push((int) 13947)
0x3e9: Push((int) 13945)
0x3ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3eb: Pop(3)
0x3ec: Push((int) 12752)
0x3ed: Push((int) -1)
0x3ee: Push((int) 13946)
0x3ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f0: Pop(3)
0x3f1: Return(); Pop(0)

0x3f2: Push((int) 13947)
0x3f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3f5: PushEmpty(string)
0x3f6: Stack[-1] = "Neutral"
0x3f7: Call 0xf1

0x3f8: Pop(1)
0x3f9: Push((int) 12753)
0x3fa: @@ SetMessage(Stack[-1])
0x3fb: Pop(1)
0x3fc: @@ ClearReplies()
0x3fd: Pop(0)
0x3fe: Push((int) 12754)
0x3ff: Push((int) 13949)
0x400: Push((int) 13948)
0x401: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x402: Pop(3)
0x403: Return(); Pop(0)

0x404: Push((int) 13949)
0x405: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x407: PushEmpty(string)
0x408: Stack[-1] = "Neutral"
0x409: Call 0xf1

0x40a: Pop(1)
0x40b: Push((int) 12755)
0x40c: @@ SetMessage(Stack[-1])
0x40d: Pop(1)
0x40e: @@ ClearReplies()
0x40f: Pop(0)
0x410: Push((int) 12756)
0x411: Push((int) -1)
0x412: Push((int) 13950)
0x413: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x414: Pop(3)
0x415: Push((int) 12757)
0x416: Push((int) -1)
0x417: Push((int) 13951)
0x418: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x419: Pop(3)
0x41a: Return(); Pop(0)

0x41b: Push((int) 13937)
0x41c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x41e: PushEmpty(string)
0x41f: Stack[-1] = "Neutral"
0x420: Call 0xf1

0x421: Pop(1)
0x422: Push((int) 12743)
0x423: @@ SetMessage(Stack[-1])
0x424: Pop(1)
0x425: @@ ClearReplies()
0x426: Pop(0)
0x427: Push((int) 12758)
0x428: Push((int) 13954)
0x429: Push((int) 13952)
0x42a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42b: Pop(3)
0x42c: Push((int) 12759)
0x42d: Push((int) 13954)
0x42e: Push((int) 13953)
0x42f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(3)
0x431: Return(); Pop(0)

0x432: Push((int) 13954)
0x433: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x435: PushEmpty(string)
0x436: Stack[-1] = "Neutral"
0x437: Call 0xf1

0x438: Pop(1)
0x439: Push((int) 12760)
0x43a: @@ SetMessage(Stack[-1])
0x43b: Pop(1)
0x43c: @@ ClearReplies()
0x43d: Pop(0)
0x43e: Push((int) 12761)
0x43f: Push((int) 13957)
0x440: Push((int) 13956)
0x441: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x442: Pop(3)
0x443: Return(); Pop(0)

0x444: Push((int) 13957)
0x445: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x446: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x447: PushEmpty(string)
0x448: Stack[-1] = "Neutral"
0x449: Call 0xf1

0x44a: Pop(1)
0x44b: Push((int) 12762)
0x44c: @@ SetMessage(Stack[-1])
0x44d: Pop(1)
0x44e: @@ ClearReplies()
0x44f: Pop(0)
0x450: Push((int) 12763)
0x451: Push((int) 13959)
0x452: Push((int) 13958)
0x453: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x454: Pop(3)
0x455: Return(); Pop(0)

0x456: Push((int) 13959)
0x457: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x46d; Pop(1)

0x459: PushEmpty(string)
0x45a: Stack[-1] = "Neutral"
0x45b: Call 0xf1

0x45c: Pop(1)
0x45d: Push((int) 12764)
0x45e: @@ SetMessage(Stack[-1])
0x45f: Pop(1)
0x460: @@ ClearReplies()
0x461: Pop(0)
0x462: Push((int) 12765)
0x463: Push((int) -1)
0x464: Push((int) 13960)
0x465: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x466: Pop(3)
0x467: Push((int) 12766)
0x468: Push((int) -1)
0x469: Push((int) 13961)
0x46a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46b: Pop(3)
0x46c: Return(); Pop(0)

0x46d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x46e: PushEmpty(bool)
0x46f: Call 0x6e2

0x470: Pop(0)
0x471: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x472: @ lshStopAnimation()
0x473: Pop(0)
0x474: GOTO 0x477

0x475: @ StopAnimation()
0x476: Pop(0)
0x477: Return(); Pop(0)

0x478: GOTO 0x102

0x479: Return(); Pop(0)

0x47a: PushEmpty()
0x47b: PushEmpty(int, object)
0x47c: Stack[-1] = Stack[-3]
0x47d: Push(-2, 1); TaskCall(0)
0x47e: Call 0x0

0x47f: Pop(-2, 1); TaskReturn
0x480: Pop(2)
0x481: Return(); Pop(0)

0x482: @ Hold()
0x483: Pop(0)
0x484: GOTO 0x482

0x485: Return(); Pop(0)

0x486: PushEmpty(bool, bool)
0x487: Push("cleanup")
0x488: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x489: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x48a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x48b: @ IsLoaded(Stack[-1])
0x48c: Pop(0)
0x48d: PushEmpty(bool)
0x48e: Stack[-1] = (bool) 0
0x48f: Pop(0); Push((bool) Stack[-2] == 0)
0x490: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x491: PushEmpty(bool)
0x492: Call 0x4b2

0x493: Pop(0)
0x494: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x495: Stack[-1] = (bool) 1
0x496: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x497: PushEmpty(object)
0x498: Call 0x509

0x499: Pop(0)
0x49a: @ RemoveActor(Stack[-1])
0x49b: Pop(1)
0x49c: GOTO 0x4a1

0x49d: Push("restore")
0x49e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x49f: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x4a0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4a1: Return(); Pop(2)

0x4a2: PushEmpty(bool)
0x4a3: Stack[-1] = (bool) 0
0x4a4: Push( Stack[0 + Tasks[-1].StackPointer] )
0x4a5: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a6: PushEmpty(bool)
0x4a7: Call 0x4b2

0x4a8: Pop(0)
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4aa: Stack[-1] = (bool) 1
0x4ab: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4ac: PushEmpty(object)
0x4ad: Call 0x509

0x4ae: Pop(0)
0x4af: @ RemoveActor(Stack[-1])
0x4b0: Pop(1)
0x4b1: Return(); Pop(0)

0x4b2: Stack[-1] = (bool) 1
0x4b3: Return(); Pop(0)

0x4b4: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x4b5: @@ GetPosition(Stack[-7])
0x4b6: Pop(0)
0x4b7: @@ GetEyesHeight(Stack[-8])
0x4b8: Pop(0)
0x4b9: Push(CvectorIndex(Stack[-7], 1))
0x4ba: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x4bb: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x4bc: @ GetPosition(Stack[-6])
0x4bd: Pop(0)
0x4be: @ GetEyesHeight(Stack[-8])
0x4bf: Pop(0)
0x4c0: Push(CvectorIndex(Stack[-6], 1))
0x4c1: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x4c2: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x4c3: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x4c4: Push(CvectorIndex(Stack[-5], 1))
0x4c5: Stack[-1] = (int) 0
0x4c6: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x4c7: Pop(0); Push(Stack[-5] | Stack[-5]);
0x4c8: Pop(1); Push(Sqrt(Stack[-1]))
0x4c9: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x4ca: Stack[-4] = -Stack[-5]; Pop(0);
0x4cb: Push((int) 70)
0x4cc: Pop(1); Push(Stack[-6] * Stack[-1]);
0x4cd: PushEmpty(cvector, cvector)
0x4ce: Push(CVector(0.0, 1.0, 0.0))
0x4cf: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x4d0: Call 0x50f

0x4d1: Pop(1)
0x4d2: Push((int) 25)
0x4d3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4d4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4d5: Push(CVector(0.0, 10.0, 0.0))
0x4d6: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x4d7: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x4d8: @ IsOverrideActive(Stack[-1])
0x4d9: Pop(0)
0x4da: Push(Stack[-1])
0x4db: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dc: Stack[-18] = (bool) 0
0x4dd: Return(); Pop(16)

0x4de: @ StopWorld()
0x4df: Pop(0)
0x4e0: @ CameraTransit(Stack[-2], Stack[-4])
0x4e1: Pop(0)
0x4e2: Push(CvectorIndex(Stack[-3], 0))
0x4e3: Push(CvectorIndex(Stack[-4], 2))
0x4e4: @ Rotate(Stack[-2], Stack[-1])
0x4e5: Pop(2)
0x4e6: @ CameraWaitForPlayFinish()
0x4e7: Pop(0)
0x4e8: @ ResumeWorld()
0x4e9: Pop(0)
0x4ea: Stack[-18] = (bool) 1
0x4eb: Return(); Pop(16)

0x4ec: PushEmpty()
0x4ed: @ CameraSwitchToNormal()
0x4ee: Pop(0)
0x4ef: Return(); Pop(0)

0x4f0: PushEmpty(float, float, float, float)
0x4f1: Push("playing ")
0x4f2: Pop(1); Push(Stack[-1] + Stack[-6]);
0x4f3: @ Trace(Stack[-1])
0x4f4: Pop(1)
0x4f5: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x4f6: Pop(0)
0x4f7: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x4f8: Pop(0)
0x4f9: Push("start: ")
0x4fa: Pop(1); Push(Stack[-1] + Stack[-3]);
0x4fb: @ Trace(Stack[-1])
0x4fc: Pop(1)
0x4fd: Push("end: ")
0x4fe: Pop(1); Push(Stack[-1] + Stack[-2]);
0x4ff: @ Trace(Stack[-1])
0x500: Pop(1)
0x501: Return(); Pop(4)

0x502: PushEmpty(bool)
0x503: Call 0x6e2

0x504: Pop(0)
0x505: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x506: @ lshStopSpeech()
0x507: Pop(0)
0x508: Return(); Pop(0)

0x509: PushEmpty(object, object)
0x50a: @ self(Stack[-1])
0x50b: Pop(0)
0x50c: Stack[-3] = Stack[-1]
0x50d: Return(); Pop(2)

0x50e: Stack[-1] = 0
0x50f: PushEmpty(float, float)
0x510: Pop(0); Push(Stack[-3] | Stack[-3]);
0x511: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x512: Push((float)0.0)
0x513: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x514: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x515: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x516: Return(); Pop(2)

0x517: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x518: Return(); Pop(2)

0x519: PushEmpty(int, int)
0x51a: @ GetVariable(Stack[-3], Stack[-1])
0x51b: Pop(0)
0x51c: Stack[-4] = Stack[-1]
0x51d: Return(); Pop(2)

0x51e: PushEmpty(int, int, bool, int, int, bool)
0x51f: @@ GetItemID(Stack[-3])
0x520: Pop(0)
0x521: Push("Category")
0x522: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x523: Pop(1)
0x524: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x525: Pop(0)
0x526: Pop(0); Push((bool) Stack[-1] == 0)
0x527: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x528: @@ DropItems(Stack[-8], Stack[-7])
0x529: Pop(0)
0x52a: Return(); Pop(6)

0x52b: PushEmpty(object, object)
0x52c: @ CreateInvItem(Stack[-1])
0x52d: Pop(0)
0x52e: @@ SetItemName(Stack[-4])
0x52f: Pop(0)
0x530: PushEmpty(object, object, int)
0x531: Stack[-3] = Stack[-8]
0x532: Stack[-2] = Stack[-4]
0x533: Stack[-1] = Stack[-6]
0x534: Call 0x51e

0x535: Pop(3)
0x536: Return(); Pop(2)

0x537: Stack[-1] = 0
0x538: PushEmpty(object, object)
0x539: @ FindActor(Stack[-1], Stack[-4])
0x53a: Pop(0)
0x53b: Pop(0); Push((bool) Stack[-1] == 0)
0x53c: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53d: Stack[-5] = (bool) 0
0x53e: Return(); Pop(2)

0x53f: @ Trigger(Stack[-1], Stack[-3])
0x540: Pop(0)
0x541: Stack[-5] = (bool) 1
0x542: Return(); Pop(2)

0x543: Stack[-1] = 0
0x544: PushEmpty()
0x545: PushEmpty()
0x546: Call 0x6ce

0x547: Pop(0)
0x548: Push("klara blood is given")
0x549: @ Trace(Stack[-1])
0x54a: Pop(1)
0x54b: PushEmpty(object, string, int)
0x54c: Stack[-3] = Stack[-5]
0x54d: Stack[-2] = "d6q01_klara_blood"
0x54e: Stack[-1] = (int) 1
0x54f: Call 0x52b

0x550: Pop(3)
0x551: Return(); Pop(0)

0x552: PushEmpty()
0x553: Push("playsound")
0x554: Push("giveitem")
0x555: @ TriggerWorld(Stack[-2], Stack[-1])
0x556: Pop(2)
0x557: Return(); Pop(0)

0x558: PushEmpty()
0x559: Push("ood6Klara1")
0x55a: Push((int) 1)
0x55b: @ SetVariable(Stack[-2], Stack[-1])
0x55c: Pop(2)
0x55d: Return(); Pop(0)

0x55e: PushEmpty()
0x55f: Push("ood6Klara2")
0x560: Push((int) 1)
0x561: @ SetVariable(Stack[-2], Stack[-1])
0x562: Pop(2)
0x563: Return(); Pop(0)

0x564: PushEmpty(object, object, object, object)
0x565: Push("d6q01KlaraVolonteer")
0x566: Push((int) 1)
0x567: @ SetVariable(Stack[-2], Stack[-1])
0x568: Pop(2)
0x569: PushEmpty(object)
0x56a: Call 0x6ac

0x56b: Stack[-3] = Stack[-1]
0x56c: Pop(1)
0x56d: Push("d6q01AlexandrGotoJulia")
0x56e: @@ FindMark(Stack[-2], Stack[-1])
0x56f: Pop(1)
0x570: Push(Stack[-1])
0x571: IF (Stack[-1] == 0) GOTO 0x574; Pop(1)

0x572: @@ Remove()
0x573: Pop(0)
0x574: Push("d6q01AlexandrGotoKaterina")
0x575: @@ FindMark(Stack[-2], Stack[-1])
0x576: Pop(1)
0x577: Push(Stack[-1])
0x578: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x579: @@ Remove()
0x57a: Pop(0)
0x57b: Push("d6q01AlexandrGotoLara")
0x57c: @@ FindMark(Stack[-2], Stack[-1])
0x57d: Pop(1)
0x57e: Push(Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x580: @@ Remove()
0x581: Pop(0)
0x582: Push("d6q01AlexangrGotoJulLaraSelf")
0x583: @@ FindMark(Stack[-2], Stack[-1])
0x584: Pop(1)
0x585: Push(Stack[-1])
0x586: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x587: @@ Remove()
0x588: Pop(0)
0x589: Push("d6q01BigVladGotoAnna")
0x58a: @@ FindMark(Stack[-2], Stack[-1])
0x58b: Pop(1)
0x58c: Push(Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x58e: @@ Remove()
0x58f: Pop(0)
0x590: Push("d6q01BigVladGotoAnnaOspinaSelf")
0x591: @@ FindMark(Stack[-2], Stack[-1])
0x592: Pop(1)
0x593: Push(Stack[-1])
0x594: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x595: @@ Remove()
0x596: Pop(0)
0x597: Push("d6q01BigVladGotoOspina")
0x598: @@ FindMark(Stack[-2], Stack[-1])
0x599: Pop(1)
0x59a: Push(Stack[-1])
0x59b: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59c: @@ Remove()
0x59d: Pop(0)
0x59e: Push("d6q01KaterinaGotoLaska")
0x59f: @@ FindMark(Stack[-2], Stack[-1])
0x5a0: Pop(1)
0x5a1: Push(Stack[-1])
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a5; Pop(1)

0x5a3: @@ Remove()
0x5a4: Pop(0)
0x5a5: Push("d6q01KaterinagotoLaskaSelf")
0x5a6: @@ FindMark(Stack[-2], Stack[-1])
0x5a7: Pop(1)
0x5a8: Push(Stack[-1])
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5aa: @@ Remove()
0x5ab: Pop(0)
0x5ac: Push("d6q01KillerIsKlara")
0x5ad: @@ FindMark(Stack[-2], Stack[-1])
0x5ae: Pop(1)
0x5af: Push(Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x5b1: @@ Remove()
0x5b2: Pop(0)
0x5b3: Push("d6q01LaskaGotoAlbinos")
0x5b4: @@ FindMark(Stack[-2], Stack[-1])
0x5b5: Pop(1)
0x5b6: Push(Stack[-1])
0x5b7: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5b8: @@ Remove()
0x5b9: Pop(0)
0x5ba: Push("d6q01ViktorGotoAlexandr")
0x5bb: @@ FindMark(Stack[-2], Stack[-1])
0x5bc: Pop(1)
0x5bd: Push(Stack[-1])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bf: @@ Remove()
0x5c0: Pop(0)
0x5c1: Push("d6q01ViktorGotoAlxBigSelf")
0x5c2: @@ FindMark(Stack[-2], Stack[-1])
0x5c3: Pop(1)
0x5c4: Push(Stack[-1])
0x5c5: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c6: @@ Remove()
0x5c7: Pop(0)
0x5c8: Push("d6q01ViktorGotoBigVlad")
0x5c9: @@ FindMark(Stack[-2], Stack[-1])
0x5ca: Pop(1)
0x5cb: Push(Stack[-1])
0x5cc: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5cd: @@ Remove()
0x5ce: Pop(0)
0x5cf: PushEmpty(bool, int)
0x5d0: Stack[-1] = (int) 112
0x5d1: Call 0x69b

0x5d2: Pop(2)
0x5d3: PushEmpty(bool, int)
0x5d4: Stack[-1] = (int) 113
0x5d5: Call 0x69b

0x5d6: Pop(2)
0x5d7: PushEmpty(bool, int)
0x5d8: Stack[-1] = (int) 114
0x5d9: Call 0x69b

0x5da: Pop(2)
0x5db: PushEmpty(bool, int)
0x5dc: Stack[-1] = (int) 115
0x5dd: Call 0x69b

0x5de: Pop(2)
0x5df: PushEmpty(bool, int)
0x5e0: Stack[-1] = (int) 116
0x5e1: Call 0x69b

0x5e2: Pop(2)
0x5e3: PushEmpty(bool, int)
0x5e4: Stack[-1] = (int) 117
0x5e5: Call 0x69b

0x5e6: Pop(2)
0x5e7: PushEmpty(bool, int)
0x5e8: Stack[-1] = (int) 122
0x5e9: Call 0x69b

0x5ea: Pop(2)
0x5eb: PushEmpty(bool, string, string)
0x5ec: Stack[-2] = "quest_d6_01"
0x5ed: Stack[-1] = "completed"
0x5ee: Call 0x538

0x5ef: Pop(3)
0x5f0: Return(); Pop(4)

0x5f1: Stack[-1] = 0
0x5f2: Stack[-2] = 0
0x5f3: PushEmpty()
0x5f4: Push("ood6Klara3")
0x5f5: Push((int) 1)
0x5f6: @ SetVariable(Stack[-2], Stack[-1])
0x5f7: Pop(2)
0x5f8: Return(); Pop(0)

0x5f9: PushEmpty()
0x5fa: PushEmpty(int, string)
0x5fb: Stack[-1] = "d6q01"
0x5fc: Call 0x519

0x5fd: Pop(1)
0x5fe: Push((int) 2)
0x5ff: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x600: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x601: Stack[-2] = (bool) 1
0x602: Return(); Pop(0)

0x603: Stack[-2] = (bool) 0
0x604: Return(); Pop(0)

0x605: PushEmpty()
0x606: PushEmpty(int, string)
0x607: Stack[-1] = "d6q01"
0x608: Call 0x519

0x609: Pop(1)
0x60a: Push((int) 2)
0x60b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x60c: IF (Stack[-1] == 0) GOTO 0x60f; Pop(1)

0x60d: Stack[-2] = (bool) 1
0x60e: Return(); Pop(0)

0x60f: Stack[-2] = (bool) 0
0x610: Return(); Pop(0)

0x611: PushEmpty()
0x612: PushEmpty(int, string)
0x613: Stack[-1] = "d6q01"
0x614: Call 0x519

0x615: Pop(1)
0x616: Push((int) 4)
0x617: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x619: Stack[-2] = (bool) 1
0x61a: Return(); Pop(0)

0x61b: Stack[-2] = (bool) 0
0x61c: Return(); Pop(0)

0x61d: PushEmpty()
0x61e: PushEmpty(int, string)
0x61f: Stack[-1] = "ood6Klara1"
0x620: Call 0x519

0x621: Pop(1)
0x622: Push((int) 0)
0x623: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x624: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x625: Stack[-2] = (bool) 1
0x626: Return(); Pop(0)

0x627: Stack[-2] = (bool) 0
0x628: Return(); Pop(0)

0x629: PushEmpty()
0x62a: PushEmpty(int, string)
0x62b: Stack[-1] = "d6q01"
0x62c: Call 0x519

0x62d: Pop(1)
0x62e: Push((int) 3)
0x62f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x630: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x631: Stack[-2] = (bool) 1
0x632: Return(); Pop(0)

0x633: Stack[-2] = (bool) 0
0x634: Return(); Pop(0)

0x635: PushEmpty()
0x636: PushEmpty(int, string)
0x637: Stack[-1] = "ood6Klara2"
0x638: Call 0x519

0x639: Pop(1)
0x63a: Push((int) 0)
0x63b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x63c: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63d: Stack[-2] = (bool) 1
0x63e: Return(); Pop(0)

0x63f: Stack[-2] = (bool) 0
0x640: Return(); Pop(0)

0x641: PushEmpty()
0x642: PushEmpty(int, string)
0x643: Stack[-1] = "microscope_d6q01_klara_blood"
0x644: Call 0x519

0x645: Pop(1)
0x646: Push((int) 0)
0x647: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x648: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x649: Stack[-2] = (bool) 1
0x64a: Return(); Pop(0)

0x64b: Stack[-2] = (bool) 0
0x64c: Return(); Pop(0)

0x64d: PushEmpty()
0x64e: PushEmpty(int, string)
0x64f: Stack[-1] = "d6q01"
0x650: Call 0x519

0x651: Pop(1)
0x652: Push((int) 1000)
0x653: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x654: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x655: Stack[-2] = (bool) 1
0x656: Return(); Pop(0)

0x657: Stack[-2] = (bool) 0
0x658: Return(); Pop(0)

0x659: PushEmpty()
0x65a: PushEmpty(int, string)
0x65b: Stack[-1] = "d6q01"
0x65c: Call 0x519

0x65d: Pop(1)
0x65e: Push((int) -1)
0x65f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x660: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x661: Stack[-2] = (bool) 1
0x662: Return(); Pop(0)

0x663: Stack[-2] = (bool) 0
0x664: Return(); Pop(0)

0x665: PushEmpty()
0x666: PushEmpty(int, string)
0x667: Stack[-1] = "ood6Klara3"
0x668: Call 0x519

0x669: Pop(1)
0x66a: Push((int) 0)
0x66b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x66c: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x66d: Stack[-2] = (bool) 1
0x66e: Return(); Pop(0)

0x66f: Stack[-2] = (bool) 0
0x670: Return(); Pop(0)

0x671: PushEmpty(object, object)
0x672: @ GetDiaryRoot(Stack[-1])
0x673: Pop(0)
0x674: Pop(0); Push((bool) Stack[-1] == 0)
0x675: IF (Stack[-1] == 0) GOTO 0x67b; Pop(1)

0x676: Push("Can't retrieve diary root")
0x677: @ Trace(Stack[-1])
0x678: Pop(1)
0x679: Stack[-3] = (bool) 0
0x67a: Return(); Pop(2)

0x67b: Stack[-3] = Stack[-1]
0x67c: Return(); Pop(2)

0x67d: Stack[-1] = 0
0x67e: PushEmpty(object, object, int, object, object, int)
0x67f: PushEmpty(object)
0x680: Call 0x671

0x681: Stack[-4] = Stack[-1]
0x682: Pop(1)
0x683: @@ Find(Stack[-7], Stack[-2])
0x684: Pop(0)
0x685: Pop(0); Push((bool) Stack[-2] == 0)
0x686: IF (Stack[-1] == 0) GOTO 0x68d; Pop(1)

0x687: Push("Can't find diary parent with id: ")
0x688: Pop(1); Push(Stack[-1] + Stack[-8]);
0x689: @ Trace(Stack[-1])
0x68a: Pop(1)
0x68b: Stack[-9] = (bool) 0
0x68c: Return(); Pop(6)

0x68d: @@ AddChild(Stack[-8])
0x68e: Pop(0)
0x68f: Push("player_diary")
0x690: Push((int) 1)
0x691: @ SetVariable(Stack[-2], Stack[-1])
0x692: Pop(2)
0x693: @@ GetCategory(Stack[-1])
0x694: Pop(0)
0x695: @ SetDiarySection(Stack[-1])
0x696: Pop(0)
0x697: Stack[-9] = (bool) 0
0x698: Return(); Pop(6)

0x699: Stack[-2] = 0
0x69a: Stack[-3] = 0
0x69b: PushEmpty(object, object, object, object)
0x69c: PushEmpty(object)
0x69d: Call 0x671

0x69e: Stack[-3] = Stack[-1]
0x69f: Pop(1)
0x6a0: @@ Find(Stack[-5], Stack[-1])
0x6a1: Pop(0)
0x6a2: Pop(0); Push((bool) Stack[-1] == 0)
0x6a3: IF (Stack[-1] == 0) GOTO 0x6a6; Pop(1)

0x6a4: Stack[-6] = (bool) 0
0x6a5: Return(); Pop(4)

0x6a6: @@ Remove()
0x6a7: Pop(0)
0x6a8: Stack[-6] = (bool) 1
0x6a9: Return(); Pop(4)

0x6aa: Stack[-1] = 0
0x6ab: Stack[-2] = 0
0x6ac: PushEmpty(object, object, object, object)
0x6ad: @ GetMainOutdoorScene(Stack[-2])
0x6ae: Pop(0)
0x6af: Pop(0); Push((bool) Stack[-2] == 0)
0x6b0: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x6b1: Push("Can't find main outdoor scene")
0x6b2: @ Trace(Stack[-1])
0x6b3: Pop(1)
0x6b4: Stack[-1] = 0
0x6b5: Stack[-5] = Stack[-1]
0x6b6: Return(); Pop(4)

0x6b7: @@ GetMap(Stack[-1])
0x6b8: Pop(0)
0x6b9: Stack[-5] = Stack[-1]
0x6ba: Return(); Pop(4)

0x6bb: Stack[-1] = 0
0x6bc: Stack[-2] = 0
0x6bd: PushEmpty(int, int)
0x6be: Push("player")
0x6bf: @ GetVariable(Stack[-1], Stack[-2])
0x6c0: Pop(1)
0x6c1: Push((int) 0)
0x6c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c3: IF (Stack[-1] == 0) GOTO 0x6c7; Pop(1)

0x6c4: Stack[-3] = (int) 200001
0x6c5: Return(); Pop(2)

0x6c6: GOTO 0x6cc

0x6c7: Push((int) 1)
0x6c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6c9: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6ca: Stack[-3] = (int) 200002
0x6cb: Return(); Pop(2)

0x6cc: Stack[-3] = (int) 200003
0x6cd: Return(); Pop(2)

0x6ce: PushEmpty(object, object)
0x6cf: Push("Adding diary entry")
0x6d0: @ Trace(Stack[-1])
0x6d1: Pop(1)
0x6d2: Push((int) 163)
0x6d3: Push((int) 1)
0x6d4: Push((int) 15405)
0x6d5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6d6: Pop(3)
0x6d7: PushEmpty(bool, object, int)
0x6d8: Stack[-2] = Stack[-4]
0x6d9: Stack[-1] = (int) 111
0x6da: Call 0x67e

0x6db: Pop(3)
0x6dc: Return(); Pop(2)

0x6dd: Stack[-1] = 0
0x6de: Stack[-1] = (int) 2865
0x6df: Return(); Pop(0)

0x6e0: Stack[-1] = "ui/NPC_Klara.png"
0x6e1: Return(); Pop(0)

0x6e2: Stack[-1] = (bool) 1
0x6e3: Return(); Pop(0)

