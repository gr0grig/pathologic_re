GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
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
	head
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	powder is given
	powder
	ood11ULittleGirl1
	d11q02
	quest_d11_02
	init_graveyard
	completed
	ood11ULittleGirl2
	SetReturnValue
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png

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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x20e
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe6 Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x213 Vars = (object)
		EVENT_26 Op = 0x225 Vars = (string)
		EVENT_6 Op = 0x241 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x253

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x40c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x40a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x40e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x410

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3f9

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x298

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x36d

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0xd0

0x58: Pop(1)
0x59: Push((int) 514156)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 514169)
0x5f: Push((int) 15384)
0x60: Push((int) 15383)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 539603)
0x64: Push((int) 15384)
0x65: Push((int) 41547)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0xb2

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0xd0

0x6c: Pop(1)
0x6d: Push((int) 514161)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: PushEmpty(bool)
0x73: Stack[-1] = (bool) 1
0x74: PushEmpty(bool)
0x75: Stack[-1] = (bool) 0
0x76: PushEmpty(bool, object)
0x77: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x78: Call2 0x379

0x79: Pop(1)
0x7a: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7b: PushEmpty(bool, object)
0x7c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d: Call2 0x391

0x7e: Pop(1)
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: Stack[-1] = (bool) 1
0x81: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x82: PushEmpty(bool)
0x83: Stack[-1] = (bool) 0
0x84: PushEmpty(bool, object)
0x85: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86: Call2 0x39d

0x87: Pop(1)
0x88: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x89: PushEmpty(bool, object)
0x8a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b: Call2 0x391

0x8c: Pop(1)
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: Stack[-1] = (bool) 1
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: Stack[-1] = (bool) 0
0x91: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x92: Push((int) 514162)
0x93: Push((int) 15377)
0x94: Push((int) 15376)
0x95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(3)
0x97: PushEmpty(bool)
0x98: Stack[-1] = (bool) 0
0x99: PushEmpty(bool, object)
0x9a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b: Call2 0x385

0x9c: Pop(1)
0x9d: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x9e: PushEmpty(bool, object)
0x9f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0: Call2 0x361

0xa1: Pop(1)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Stack[-1] = (bool) 1
0xa4: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa5: Push((int) 514165)
0xa6: Push((int) 15380)
0xa7: Push((int) 15379)
0xa8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9: Pop(3)
0xaa: Push((int) 514168)
0xab: Push((int) -1)
0xac: Push((int) 15382)
0xad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae: Pop(3)
0xaf: GOTO 0xb2

0xb0: Return(); Pop(0)

0xb1: GOTO 0x4e

0xb2: PushEmpty(bool)
0xb3: Call2 0x412

0xb4: Pop(0)
0xb5: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xb6: @ lshWaitForAnimEnd()
0xb7: Pop(0)
0xb8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: GOTO 0xc0

0xbb: PushEmpty(string)
0xbc: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbd: Call2 0x2aa

0xbe: Pop(1)
0xbf: GOTO 0xb6

0xc0: GOTO 0xcf

0xc1: Push("all")
0xc2: Push("idle")
0xc3: @ PlayAnimation(Stack[-2], Stack[-1])
0xc4: Pop(2)
0xc5: @ WaitForAnimEnd()
0xc6: Pop(0)
0xc7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc9: GOTO 0xcf

0xca: Push("all")
0xcb: Push("idle")
0xcc: @ PlayAnimation(Stack[-2], Stack[-1])
0xcd: Pop(2)
0xce: GOTO 0xc5

0xcf: Return(); Pop(0)

0xd0: PushEmpty()
0xd1: PushEmpty(bool)
0xd2: Call2 0x412

0xd3: Pop(0)
0xd4: Pop(1); Push((bool) Stack[-1] == 0)
0xd5: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd6: Return(); Pop(0)

0xd7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd8: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd9: Return(); Pop(0)

0xda: PushEmpty(string, bool)
0xdb: Stack[-2] = Stack[-3]
0xdc: Push("")
0xdd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdf: Stack[-1] = (bool) 0
0xe0: GOTO 0xe2

0xe1: Stack[-1] = (bool) 1
0xe2: Call2 0x2ba

0xe3: Pop(2)
0xe4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe5: Return(); Pop(0)

0xe6: PushEmpty()
0xe7: Push((int) 1)
0xe8: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0xe9: PushEmpty()
0xea: Call2 0x2c9

0xeb: Pop(0)
0xec: Push((int) 15373)
0xed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0x334

0xf3: Pop(2)
0xf4: Push((int) 15376)
0xf5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf7: PushEmpty(object, object)
0xf8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfa: Call2 0x356

0xfb: Pop(2)
0xfc: Push((int) 15378)
0xfd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0x345

0x103: Pop(2)
0x104: PushEmpty(object, object)
0x105: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x106: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x107: Call2 0x323

0x108: Pop(2)
0x109: PushEmpty(object, object)
0x10a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Call2 0x31d

0x10d: Pop(2)
0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x35c

0x112: Pop(2)
0x113: Push((int) 41554)
0x114: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x116: PushEmpty(object, object)
0x117: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x118: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x119: Call2 0x345

0x11a: Pop(2)
0x11b: PushEmpty(object, object)
0x11c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11e: Call2 0x35c

0x11f: Pop(2)
0x120: Push((int) 15379)
0x121: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x123: PushEmpty(object, object)
0x124: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x125: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x126: Call2 0x32e

0x127: Pop(2)
0x128: Push((int) 15381)
0x129: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12b: PushEmpty(object, object)
0x12c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12e: Call2 0x35c

0x12f: Pop(2)
0x130: Push((int) 15370)
0x131: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x133: PushEmpty(bool, object)
0x134: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x135: Call2 0x36d

0x136: Pop(1)
0x137: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral"
0x13a: Call2 0xd0

0x13b: Pop(1)
0x13c: Push((int) 514156)
0x13d: @@ SetMessage(Stack[-1])
0x13e: Pop(1)
0x13f: @@ ClearReplies()
0x140: Pop(0)
0x141: Push((int) 514169)
0x142: Push((int) 15384)
0x143: Push((int) 15383)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Push((int) 539603)
0x147: Push((int) 15384)
0x148: Push((int) 41547)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: PushEmpty(string)
0x14d: Stack[-1] = "Neutral"
0x14e: Call2 0xd0

0x14f: Pop(1)
0x150: Push((int) 514161)
0x151: @@ SetMessage(Stack[-1])
0x152: Pop(1)
0x153: @@ ClearReplies()
0x154: Pop(0)
0x155: PushEmpty(bool)
0x156: Stack[-1] = (bool) 1
0x157: PushEmpty(bool)
0x158: Stack[-1] = (bool) 0
0x159: PushEmpty(bool, object)
0x15a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15b: Call2 0x379

0x15c: Pop(1)
0x15d: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15e: PushEmpty(bool, object)
0x15f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x160: Call2 0x391

0x161: Pop(1)
0x162: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x163: Stack[-1] = (bool) 1
0x164: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x165: PushEmpty(bool)
0x166: Stack[-1] = (bool) 0
0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x169: Call2 0x39d

0x16a: Pop(1)
0x16b: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16c: PushEmpty(bool, object)
0x16d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16e: Call2 0x391

0x16f: Pop(1)
0x170: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x171: Stack[-1] = (bool) 1
0x172: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x173: Stack[-1] = (bool) 0
0x174: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x175: Push((int) 514162)
0x176: Push((int) 15377)
0x177: Push((int) 15376)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: PushEmpty(bool)
0x17b: Stack[-1] = (bool) 0
0x17c: PushEmpty(bool, object)
0x17d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17e: Call2 0x385

0x17f: Pop(1)
0x180: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x181: PushEmpty(bool, object)
0x182: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x183: Call2 0x361

0x184: Pop(1)
0x185: IF (Stack[-1] == 0) GOTO 0x187; Pop(1)

0x186: Stack[-1] = (bool) 1
0x187: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x188: Push((int) 514165)
0x189: Push((int) 15380)
0x18a: Push((int) 15379)
0x18b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18c: Pop(3)
0x18d: Push((int) 514168)
0x18e: Push((int) -1)
0x18f: Push((int) 15382)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: Return(); Pop(0)

0x193: Push((int) 15380)
0x194: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x196: PushEmpty(string)
0x197: Stack[-1] = "Neutral"
0x198: Call2 0xd0

0x199: Pop(1)
0x19a: Push((int) 514166)
0x19b: @@ SetMessage(Stack[-1])
0x19c: Pop(1)
0x19d: @@ ClearReplies()
0x19e: Pop(0)
0x19f: Push((int) 514167)
0x1a0: Push((int) -1)
0x1a1: Push((int) 15381)
0x1a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a3: Pop(3)
0x1a4: Return(); Pop(0)

0x1a5: Push((int) 15377)
0x1a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1a8: PushEmpty(string)
0x1a9: Stack[-1] = "Neutral"
0x1aa: Call2 0xd0

0x1ab: Pop(1)
0x1ac: Push((int) 514163)
0x1ad: @@ SetMessage(Stack[-1])
0x1ae: Pop(1)
0x1af: @@ ClearReplies()
0x1b0: Pop(0)
0x1b1: Push((int) 514164)
0x1b2: Push((int) -1)
0x1b3: Push((int) 15378)
0x1b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b5: Pop(3)
0x1b6: Push((int) 539608)
0x1b7: Push((int) -1)
0x1b8: Push((int) 41554)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Return(); Pop(0)

0x1bc: Push((int) 15384)
0x1bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1bf: PushEmpty(string)
0x1c0: Stack[-1] = "Neutral"
0x1c1: Call2 0xd0

0x1c2: Pop(1)
0x1c3: Push((int) 514170)
0x1c4: @@ SetMessage(Stack[-1])
0x1c5: Pop(1)
0x1c6: @@ ClearReplies()
0x1c7: Pop(0)
0x1c8: Push((int) 514157)
0x1c9: Push((int) 15372)
0x1ca: Push((int) 15371)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: Push((int) 539604)
0x1ce: Push((int) 41550)
0x1cf: Push((int) 41549)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Return(); Pop(0)

0x1d3: Push((int) 41550)
0x1d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1d6: PushEmpty(string)
0x1d7: Stack[-1] = "Neutral"
0x1d8: Call2 0xd0

0x1d9: Pop(1)
0x1da: Push((int) 539605)
0x1db: @@ SetMessage(Stack[-1])
0x1dc: Pop(1)
0x1dd: @@ ClearReplies()
0x1de: Pop(0)
0x1df: Push((int) 539606)
0x1e0: Push((int) 15372)
0x1e1: Push((int) 41551)
0x1e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e3: Pop(3)
0x1e4: Push((int) 539609)
0x1e5: Push((int) -1)
0x1e6: Push((int) 41555)
0x1e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e8: Pop(3)
0x1e9: Return(); Pop(0)

0x1ea: Push((int) 15372)
0x1eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1ed: PushEmpty(string)
0x1ee: Stack[-1] = "Neutral"
0x1ef: Call2 0xd0

0x1f0: Pop(1)
0x1f1: Push((int) 514158)
0x1f2: @@ SetMessage(Stack[-1])
0x1f3: Pop(1)
0x1f4: @@ ClearReplies()
0x1f5: Pop(0)
0x1f6: Push((int) 514159)
0x1f7: Push((int) -1)
0x1f8: Push((int) 15373)
0x1f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fa: Pop(3)
0x1fb: Push((int) 514160)
0x1fc: Push((int) -1)
0x1fd: Push((int) 15374)
0x1fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ff: Pop(3)
0x200: Return(); Pop(0)

0x201: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x202: PushEmpty(bool)
0x203: Call2 0x412

0x204: Pop(0)
0x205: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x206: @ lshStopAnimation()
0x207: Pop(0)
0x208: GOTO 0x20b

0x209: @ StopAnimation()
0x20a: Pop(0)
0x20b: Return(); Pop(0)

0x20c: GOTO 0xe7

0x20d: Return(); Pop(0)

0x20e: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x20f: PushEmpty()
0x210: Call2 0x221

0x211: Pop(0)
0x212: Return(); Pop(0)

0x213: PushEmpty()
0x214: Push( Stack[1 + Tasks[-1].StackPointer] )
0x215: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x216: PushEmpty(int, object)
0x217: Stack[-1] = Stack[-3]
0x218: Push(-2, 1); TaskCall(0)
0x219: Call2 0x0

0x21a: Pop(-2, 1); TaskReturn
0x21b: Pop(1)
0x21c: Push((int) 1000)
0x21d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21f: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x220: Return(); Pop(0)

0x221: @ Hold()
0x222: Pop(0)
0x223: GOTO 0x221

0x224: Return(); Pop(0)

0x225: PushEmpty(bool, bool)
0x226: Push("cleanup")
0x227: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x229: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x22a: @ IsLoaded(Stack[-1])
0x22b: Pop(0)
0x22c: PushEmpty(bool)
0x22d: Stack[-1] = (bool) 0
0x22e: Pop(0); Push((bool) Stack[-2] == 0)
0x22f: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x230: PushEmpty(bool)
0x231: Call2 0x251

0x232: Pop(0)
0x233: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x234: Stack[-1] = (bool) 1
0x235: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x236: PushEmpty(object)
0x237: Call2 0x2d0

0x238: Pop(0)
0x239: @ RemoveActor(Stack[-1])
0x23a: Pop(1)
0x23b: GOTO 0x240

0x23c: Push("restore")
0x23d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x240: Return(); Pop(2)

0x241: PushEmpty(bool)
0x242: Stack[-1] = (bool) 0
0x243: Push( Stack[0 + Tasks[-1].StackPointer] )
0x244: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x245: PushEmpty(bool)
0x246: Call2 0x251

0x247: Pop(0)
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: Stack[-1] = (bool) 1
0x24a: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24b: PushEmpty(object)
0x24c: Call2 0x2d0

0x24d: Pop(0)
0x24e: @ RemoveActor(Stack[-1])
0x24f: Pop(1)
0x250: Return(); Pop(0)

0x251: Stack[-1] = (bool) 1
0x252: Return(); Pop(0)

0x253: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x254: @@ GetPosition(Stack[-8])
0x255: Pop(0)
0x256: @@ GetEyesHeight(Stack[-9])
0x257: Pop(0)
0x258: Push(CvectorIndex(Stack[-8], 1))
0x259: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x25a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x25b: @ GetPosition(Stack[-7])
0x25c: Pop(0)
0x25d: @ GetEyesHeight(Stack[-9])
0x25e: Pop(0)
0x25f: Push(CvectorIndex(Stack[-7], 1))
0x260: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x261: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x262: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x263: Push(CvectorIndex(Stack[-6], 1))
0x264: Stack[-1] = (int) 0
0x265: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x266: Pop(0); Push(Stack[-6] | Stack[-6]);
0x267: Pop(1); Push(Sqrt(Stack[-1]))
0x268: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x269: Stack[-5] = -Stack[-6]; Pop(0);
0x26a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x26b: PushEmpty(cvector, cvector)
0x26c: Push(CVector(0.0, 1.0, 0.0))
0x26d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x26e: Call2 0x2d6

0x26f: Pop(1)
0x270: Push((int) 25)
0x271: Pop(2); Push(Stack[-2] * Stack[-1]);
0x272: Pop(2); Push(Stack[-2] + Stack[-1]);
0x273: Push(CVector(0.0, 10.0, 0.0))
0x274: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x275: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x276: @ IsOverrideActive(Stack[-2])
0x277: Pop(0)
0x278: Push(Stack[-2])
0x279: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27a: Stack[-21] = (bool) 0
0x27b: Return(); Pop(18)

0x27c: @ StopWorld()
0x27d: Pop(0)
0x27e: Push((bool) 1)
0x27f: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x280: Pop(1)
0x281: Push(CvectorIndex(Stack[-4], 0))
0x282: Push(CvectorIndex(Stack[-5], 2))
0x283: @ Rotate(Stack[-2], Stack[-1])
0x284: Pop(2)
0x285: PushEmpty(bool)
0x286: Call2 0x412

0x287: Pop(0)
0x288: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x289: GOTO 0x292

0x28a: Push("head")
0x28b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x28c: Pop(1)
0x28d: Push(Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x28f: Push("head")
0x290: @ LookAsyncCamera(Stack[-1])
0x291: Pop(1)
0x292: @ CameraWaitForPlayFinish()
0x293: Pop(0)
0x294: @ ResumeWorld()
0x295: Pop(0)
0x296: Stack[-21] = (bool) 1
0x297: Return(); Pop(18)

0x298: PushEmpty(bool, bool)
0x299: Push((bool) 1)
0x29a: @ CameraSwitchToNormal(Stack[-1])
0x29b: Pop(1)
0x29c: PushEmpty(bool)
0x29d: Call2 0x412

0x29e: Pop(0)
0x29f: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x2a0: GOTO 0x2a9

0x2a1: Push("head")
0x2a2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a3: Pop(1)
0x2a4: Push(Stack[-1])
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a6: Push("head")
0x2a7: @ UnlookAsync(Stack[-1])
0x2a8: Pop(1)
0x2a9: Return(); Pop(2)

0x2aa: PushEmpty(bool, float, float, bool, float, float)
0x2ab: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2ac: Pop(0)
0x2ad: Push(Stack[-3])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2af: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2b0: Pop(0)
0x2b1: Push((bool) 0)
0x2b2: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(1)
0x2b4: GOTO 0x2b9

0x2b5: Push("Can't find lsh animation : ")
0x2b6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2b7: @ Trace(Stack[-1])
0x2b8: Pop(1)
0x2b9: Return(); Pop(6)

0x2ba: PushEmpty(bool, float, float, bool, float, float)
0x2bb: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2bc: Pop(0)
0x2bd: Push(Stack[-3])
0x2be: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2bf: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2c0: Pop(0)
0x2c1: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2c2: Pop(0)
0x2c3: GOTO 0x2c8

0x2c4: Push("Can't find lsh animation : ")
0x2c5: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2c6: @ Trace(Stack[-1])
0x2c7: Pop(1)
0x2c8: Return(); Pop(6)

0x2c9: PushEmpty(bool)
0x2ca: Call2 0x412

0x2cb: Pop(0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2cd: @ lshStopSpeech()
0x2ce: Pop(0)
0x2cf: Return(); Pop(0)

0x2d0: PushEmpty(object, object)
0x2d1: @ self(Stack[-1])
0x2d2: Pop(0)
0x2d3: Stack[-3] = Stack[-1]
0x2d4: Return(); Pop(2)

0x2d5: Stack[-1] = 0
0x2d6: PushEmpty(float, float)
0x2d7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2d8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2d9: Push((float)0.0)
0x2da: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dc: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2dd: Return(); Pop(2)

0x2de: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2df: Return(); Pop(2)

0x2e0: PushEmpty(int, int)
0x2e1: @ GetVariable(Stack[-3], Stack[-1])
0x2e2: Pop(0)
0x2e3: Stack[-4] = Stack[-1]
0x2e4: Return(); Pop(2)

0x2e5: PushEmpty(object, object)
0x2e6: @ CreateIntVector(Stack[-1])
0x2e7: Pop(0)
0x2e8: @@ add(Stack[-4])
0x2e9: Pop(0)
0x2ea: @@ add(Stack[-3])
0x2eb: Pop(0)
0x2ec: Push((int) 3)
0x2ed: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x2ee: Pop(1)
0x2ef: Return(); Pop(2)

0x2f0: Stack[-1] = 0
0x2f1: PushEmpty(int, int, bool, int, int, bool)
0x2f2: @@ GetItemID(Stack[-3])
0x2f3: Pop(0)
0x2f4: Push("Category")
0x2f5: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x2f6: Pop(1)
0x2f7: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x2f8: Pop(0)
0x2f9: Pop(0); Push((bool) Stack[-1] == 0)
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fb: @@ DropItems(Stack[-8], Stack[-7])
0x2fc: Pop(0)
0x2fd: GOTO 0x303

0x2fe: PushEmpty(int, int)
0x2ff: Stack[-2] = Stack[-5]
0x300: Stack[-1] = Stack[-9]
0x301: Call2 0x2e5

0x302: Pop(2)
0x303: Return(); Pop(6)

0x304: PushEmpty(object, object)
0x305: @ CreateInvItem(Stack[-1])
0x306: Pop(0)
0x307: @@ SetItemName(Stack[-4])
0x308: Pop(0)
0x309: PushEmpty(object, object, int)
0x30a: Stack[-3] = Stack[-8]
0x30b: Stack[-2] = Stack[-4]
0x30c: Stack[-1] = Stack[-6]
0x30d: Call2 0x2f1

0x30e: Pop(3)
0x30f: Return(); Pop(2)

0x310: Stack[-1] = 0
0x311: PushEmpty(object, object)
0x312: @ FindActor(Stack[-1], Stack[-4])
0x313: Pop(0)
0x314: Pop(0); Push((bool) Stack[-1] == 0)
0x315: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x316: Stack[-5] = (bool) 0
0x317: Return(); Pop(2)

0x318: @ Trigger(Stack[-1], Stack[-3])
0x319: Pop(0)
0x31a: Stack[-5] = (bool) 1
0x31b: Return(); Pop(2)

0x31c: Stack[-1] = 0
0x31d: PushEmpty()
0x31e: Push("playsound")
0x31f: Push("giveitem")
0x320: @ TriggerWorld(Stack[-2], Stack[-1])
0x321: Pop(2)
0x322: Return(); Pop(0)

0x323: PushEmpty()
0x324: Push("powder is given")
0x325: @ Trace(Stack[-1])
0x326: Pop(1)
0x327: PushEmpty(object, string, int)
0x328: Stack[-3] = Stack[-5]
0x329: Stack[-2] = "powder"
0x32a: Stack[-1] = (int) 1
0x32b: Call2 0x304

0x32c: Pop(3)
0x32d: Return(); Pop(0)

0x32e: PushEmpty()
0x32f: Push("ood11ULittleGirl1")
0x330: Push((int) 1)
0x331: @ SetVariable(Stack[-2], Stack[-1])
0x332: Pop(2)
0x333: Return(); Pop(0)

0x334: PushEmpty()
0x335: Push("d11q02")
0x336: Push((int) 1)
0x337: @ SetVariable(Stack[-2], Stack[-1])
0x338: Pop(2)
0x339: PushEmpty()
0x33a: Call2 0x3a9

0x33b: Pop(0)
0x33c: PushEmpty()
0x33d: Call2 0x3c3

0x33e: Pop(0)
0x33f: PushEmpty(bool, string, string)
0x340: Stack[-2] = "quest_d11_02"
0x341: Stack[-1] = "init_graveyard"
0x342: Call2 0x311

0x343: Pop(3)
0x344: Return(); Pop(0)

0x345: PushEmpty()
0x346: PushEmpty(int, string)
0x347: Stack[-1] = "d11q02"
0x348: Call2 0x2e0

0x349: Pop(1)
0x34a: Push((int) 1000)
0x34b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x34d: PushEmpty()
0x34e: Call2 0x3b6

0x34f: Pop(0)
0x350: PushEmpty(bool, string, string)
0x351: Stack[-2] = "quest_d11_02"
0x352: Stack[-1] = "completed"
0x353: Call2 0x311

0x354: Pop(3)
0x355: Return(); Pop(0)

0x356: PushEmpty()
0x357: Push("ood11ULittleGirl2")
0x358: Push((int) 1)
0x359: @ SetVariable(Stack[-2], Stack[-1])
0x35a: Pop(2)
0x35b: Return(); Pop(0)

0x35c: PushEmpty()
0x35d: Push((int) 1000)
0x35e: @@ SetReturnValue(Stack[-1])
0x35f: Pop(1)
0x360: Return(); Pop(0)

0x361: PushEmpty()
0x362: PushEmpty(int, string)
0x363: Stack[-1] = "ood11ULittleGirl1"
0x364: Call2 0x2e0

0x365: Pop(1)
0x366: Push((int) 0)
0x367: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x369: Stack[-2] = (bool) 1
0x36a: Return(); Pop(0)

0x36b: Stack[-2] = (bool) 0
0x36c: Return(); Pop(0)

0x36d: PushEmpty()
0x36e: PushEmpty(int, string)
0x36f: Stack[-1] = "d11q02"
0x370: Call2 0x2e0

0x371: Pop(1)
0x372: Push((int) 0)
0x373: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x374: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x375: Stack[-2] = (bool) 1
0x376: Return(); Pop(0)

0x377: Stack[-2] = (bool) 0
0x378: Return(); Pop(0)

0x379: PushEmpty()
0x37a: PushEmpty(int, string)
0x37b: Stack[-1] = "d11q02"
0x37c: Call2 0x2e0

0x37d: Pop(1)
0x37e: Push((int) 2)
0x37f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x380: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x381: Stack[-2] = (bool) 1
0x382: Return(); Pop(0)

0x383: Stack[-2] = (bool) 0
0x384: Return(); Pop(0)

0x385: PushEmpty()
0x386: PushEmpty(int, string)
0x387: Stack[-1] = "d11q02"
0x388: Call2 0x2e0

0x389: Pop(1)
0x38a: Push((int) -1)
0x38b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x38c: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38d: Stack[-2] = (bool) 1
0x38e: Return(); Pop(0)

0x38f: Stack[-2] = (bool) 0
0x390: Return(); Pop(0)

0x391: PushEmpty()
0x392: PushEmpty(int, string)
0x393: Stack[-1] = "ood11ULittleGirl2"
0x394: Call2 0x2e0

0x395: Pop(1)
0x396: Push((int) 0)
0x397: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x399: Stack[-2] = (bool) 1
0x39a: Return(); Pop(0)

0x39b: Stack[-2] = (bool) 0
0x39c: Return(); Pop(0)

0x39d: PushEmpty()
0x39e: PushEmpty(int, string)
0x39f: Stack[-1] = "d11q02"
0x3a0: Call2 0x2e0

0x3a1: Pop(1)
0x3a2: Push((int) 1000)
0x3a3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a5: Stack[-2] = (bool) 1
0x3a6: Return(); Pop(0)

0x3a7: Stack[-2] = (bool) 0
0x3a8: Return(); Pop(0)

0x3a9: PushEmpty(object, object)
0x3aa: Push((int) 197)
0x3ab: Push((int) 2)
0x3ac: Push((int) 515485)
0x3ad: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3ae: Pop(3)
0x3af: PushEmpty(bool, object, int)
0x3b0: Stack[-2] = Stack[-4]
0x3b1: Stack[-1] = (int) -1
0x3b2: Call2 0x3dd

0x3b3: Pop(3)
0x3b4: Return(); Pop(2)

0x3b5: Stack[-1] = 0
0x3b6: PushEmpty(object, object)
0x3b7: Push((int) 198)
0x3b8: Push((int) 2)
0x3b9: Push((int) 515486)
0x3ba: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3bb: Pop(3)
0x3bc: PushEmpty(bool, object, int)
0x3bd: Stack[-2] = Stack[-4]
0x3be: Stack[-1] = (int) 197
0x3bf: Call2 0x3dd

0x3c0: Pop(3)
0x3c1: Return(); Pop(2)

0x3c2: Stack[-1] = 0
0x3c3: PushEmpty(object, object)
0x3c4: Push((int) 199)
0x3c5: Push((int) 2)
0x3c6: Push((int) 515487)
0x3c7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3c8: Pop(3)
0x3c9: PushEmpty(bool, object, int)
0x3ca: Stack[-2] = Stack[-4]
0x3cb: Stack[-1] = (int) 197
0x3cc: Call2 0x3dd

0x3cd: Pop(3)
0x3ce: Return(); Pop(2)

0x3cf: Stack[-1] = 0
0x3d0: PushEmpty(object, object)
0x3d1: @ GetDiaryRoot(Stack[-1])
0x3d2: Pop(0)
0x3d3: Pop(0); Push((bool) Stack[-1] == 0)
0x3d4: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d5: Push("Can't retrieve diary root")
0x3d6: @ Trace(Stack[-1])
0x3d7: Pop(1)
0x3d8: Stack[-3] = (bool) 0
0x3d9: Return(); Pop(2)

0x3da: Stack[-3] = Stack[-1]
0x3db: Return(); Pop(2)

0x3dc: Stack[-1] = 0
0x3dd: PushEmpty(object, object, int, object, object, int)
0x3de: PushEmpty(object)
0x3df: Call2 0x3d0

0x3e0: Stack[-4] = Stack[-1]
0x3e1: Pop(1)
0x3e2: @@ Find(Stack[-7], Stack[-2])
0x3e3: Pop(0)
0x3e4: Pop(0); Push((bool) Stack[-2] == 0)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3e6: Push("Can't find diary parent with id: ")
0x3e7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3e8: @ Trace(Stack[-1])
0x3e9: Pop(1)
0x3ea: Stack[-9] = (bool) 0
0x3eb: Return(); Pop(6)

0x3ec: @@ AddChild(Stack[-8])
0x3ed: Pop(0)
0x3ee: Push((int) 7)
0x3ef: @ SendWorldWndMessage(Stack[-1])
0x3f0: Pop(1)
0x3f1: @@ GetCategory(Stack[-1])
0x3f2: Pop(0)
0x3f3: @ SetDiarySection(Stack[-1])
0x3f4: Pop(0)
0x3f5: Stack[-9] = (bool) 0
0x3f6: Return(); Pop(6)

0x3f7: Stack[-2] = 0
0x3f8: Stack[-3] = 0
0x3f9: PushEmpty(int, int)
0x3fa: Push("branch")
0x3fb: @ GetVariable(Stack[-1], Stack[-2])
0x3fc: Pop(1)
0x3fd: Push((int) 0)
0x3fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x400: Stack[-3] = (int) 1
0x401: Return(); Pop(2)

0x402: GOTO 0x408

0x403: Push((int) 1)
0x404: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x405: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x406: Stack[-3] = (int) 2
0x407: Return(); Pop(2)

0x408: Stack[-3] = (int) 3
0x409: Return(); Pop(2)

0x40a: Stack[-1] = (int) 515561
0x40b: Return(); Pop(0)

0x40c: Stack[-1] = (int) 503346
0x40d: Return(); Pop(0)

0x40e: Stack[-1] = "ui/NPC_Citizen1.png"
0x40f: Return(); Pop(0)

0x410: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x411: Return(); Pop(0)

0x412: Stack[-1] = (bool) 0
0x413: Return(); Pop(0)

