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
	revolver ammo6 is given
	revolver_ammo
	d11q02
	quest_d11_02
	init_graveyard
	completed
	ood11ULittleBoy1
	ood11ULittleBoy2
	SetReturnValue
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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

RunOp = 0x1ce
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe6 Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x1d3 Vars = (object)
		EVENT_26 Op = 0x1e5 Vars = (string)
		EVENT_6 Op = 0x201 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x213

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3cc

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3ca

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3ce

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3d0

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3b9

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
0x41: Call2 0x258

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
0x52: Call2 0x321

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0xd0

0x58: Pop(1)
0x59: Push((int) 514142)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 514143)
0x5f: Push((int) 41559)
0x60: Push((int) 15357)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 539612)
0x64: Push((int) 41559)
0x65: Push((int) 41558)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0xb2

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0xd0

0x6c: Pop(1)
0x6d: Push((int) 514147)
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
0x78: Call2 0x32d

0x79: Pop(1)
0x7a: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7b: PushEmpty(bool, object)
0x7c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d: Call2 0x351

0x7e: Pop(1)
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: Stack[-1] = (bool) 1
0x81: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x82: PushEmpty(bool)
0x83: Stack[-1] = (bool) 0
0x84: PushEmpty(bool, object)
0x85: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86: Call2 0x345

0x87: Pop(1)
0x88: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x89: PushEmpty(bool, object)
0x8a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b: Call2 0x351

0x8c: Pop(1)
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: Stack[-1] = (bool) 1
0x8f: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x90: Stack[-1] = (bool) 0
0x91: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x92: Push((int) 514149)
0x93: Push((int) 15364)
0x94: Push((int) 15363)
0x95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96: Pop(3)
0x97: PushEmpty(bool)
0x98: Stack[-1] = (bool) 0
0x99: PushEmpty(bool, object)
0x9a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b: Call2 0x339

0x9c: Pop(1)
0x9d: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x9e: PushEmpty(bool, object)
0x9f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0: Call2 0x35d

0xa1: Pop(1)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Stack[-1] = (bool) 1
0xa4: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa5: Push((int) 514152)
0xa6: Push((int) 15367)
0xa7: Push((int) 15366)
0xa8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9: Pop(3)
0xaa: Push((int) 514148)
0xab: Push((int) -1)
0xac: Push((int) 15362)
0xad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae: Pop(3)
0xaf: GOTO 0xb2

0xb0: Return(); Pop(0)

0xb1: GOTO 0x4e

0xb2: PushEmpty(bool)
0xb3: Call2 0x3d2

0xb4: Pop(0)
0xb5: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xb6: @ lshWaitForAnimEnd()
0xb7: Pop(0)
0xb8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: GOTO 0xc0

0xbb: PushEmpty(string)
0xbc: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbd: Call2 0x26a

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
0xd2: Call2 0x3d2

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
0xe2: Call2 0x27a

0xe3: Pop(2)
0xe4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe5: Return(); Pop(0)

0xe6: PushEmpty()
0xe7: Push((int) 1)
0xe8: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0xe9: PushEmpty()
0xea: Call2 0x289

0xeb: Pop(0)
0xec: Push((int) 15360)
0xed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0x2ee

0xf3: Pop(2)
0xf4: Push((int) 15363)
0xf5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf7: PushEmpty(object, object)
0xf8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfa: Call2 0x310

0xfb: Pop(2)
0xfc: Push((int) 15365)
0xfd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfe: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0x2ff

0x103: Pop(2)
0x104: PushEmpty(object, object)
0x105: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x106: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x107: Call2 0x2e3

0x108: Pop(2)
0x109: PushEmpty(object, object)
0x10a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Call2 0x2dd

0x10d: Pop(2)
0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x31c

0x112: Pop(2)
0x113: Push((int) 15366)
0x114: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x116: PushEmpty(object, object)
0x117: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x118: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x119: Call2 0x316

0x11a: Pop(2)
0x11b: Push((int) 15368)
0x11c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11d: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x11e: PushEmpty(object, object)
0x11f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x120: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x121: Call2 0x31c

0x122: Pop(2)
0x123: Push((int) 15356)
0x124: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x126: PushEmpty(bool, object)
0x127: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x128: Call2 0x321

0x129: Pop(1)
0x12a: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Neutral"
0x12d: Call2 0xd0

0x12e: Pop(1)
0x12f: Push((int) 514142)
0x130: @@ SetMessage(Stack[-1])
0x131: Pop(1)
0x132: @@ ClearReplies()
0x133: Pop(0)
0x134: Push((int) 514143)
0x135: Push((int) 41559)
0x136: Push((int) 15357)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Push((int) 539612)
0x13a: Push((int) 41559)
0x13b: Push((int) 41558)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Return(); Pop(0)

0x13f: PushEmpty(string)
0x140: Stack[-1] = "Neutral"
0x141: Call2 0xd0

0x142: Pop(1)
0x143: Push((int) 514147)
0x144: @@ SetMessage(Stack[-1])
0x145: Pop(1)
0x146: @@ ClearReplies()
0x147: Pop(0)
0x148: PushEmpty(bool)
0x149: Stack[-1] = (bool) 1
0x14a: PushEmpty(bool)
0x14b: Stack[-1] = (bool) 0
0x14c: PushEmpty(bool, object)
0x14d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14e: Call2 0x32d

0x14f: Pop(1)
0x150: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x151: PushEmpty(bool, object)
0x152: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x153: Call2 0x351

0x154: Pop(1)
0x155: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x156: Stack[-1] = (bool) 1
0x157: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x158: PushEmpty(bool)
0x159: Stack[-1] = (bool) 0
0x15a: PushEmpty(bool, object)
0x15b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Call2 0x345

0x15d: Pop(1)
0x15e: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x15f: PushEmpty(bool, object)
0x160: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x161: Call2 0x351

0x162: Pop(1)
0x163: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x164: Stack[-1] = (bool) 1
0x165: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x166: Stack[-1] = (bool) 0
0x167: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x168: Push((int) 514149)
0x169: Push((int) 15364)
0x16a: Push((int) 15363)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: PushEmpty(bool)
0x16e: Stack[-1] = (bool) 0
0x16f: PushEmpty(bool, object)
0x170: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x171: Call2 0x339

0x172: Pop(1)
0x173: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x174: PushEmpty(bool, object)
0x175: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x176: Call2 0x35d

0x177: Pop(1)
0x178: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x179: Stack[-1] = (bool) 1
0x17a: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17b: Push((int) 514152)
0x17c: Push((int) 15367)
0x17d: Push((int) 15366)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Push((int) 514148)
0x181: Push((int) -1)
0x182: Push((int) 15362)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Return(); Pop(0)

0x186: Push((int) 15367)
0x187: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x189: PushEmpty(string)
0x18a: Stack[-1] = "Neutral"
0x18b: Call2 0xd0

0x18c: Pop(1)
0x18d: Push((int) 514153)
0x18e: @@ SetMessage(Stack[-1])
0x18f: Pop(1)
0x190: @@ ClearReplies()
0x191: Pop(0)
0x192: Push((int) 514154)
0x193: Push((int) -1)
0x194: Push((int) 15368)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: Push((int) 15364)
0x199: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19a: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x19b: PushEmpty(string)
0x19c: Stack[-1] = "Neutral"
0x19d: Call2 0xd0

0x19e: Pop(1)
0x19f: Push((int) 514150)
0x1a0: @@ SetMessage(Stack[-1])
0x1a1: Pop(1)
0x1a2: @@ ClearReplies()
0x1a3: Pop(0)
0x1a4: Push((int) 514151)
0x1a5: Push((int) -1)
0x1a6: Push((int) 15365)
0x1a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a8: Pop(3)
0x1a9: Return(); Pop(0)

0x1aa: Push((int) 41559)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Neutral"
0x1af: Call2 0xd0

0x1b0: Pop(1)
0x1b1: Push((int) 539613)
0x1b2: @@ SetMessage(Stack[-1])
0x1b3: Pop(1)
0x1b4: @@ ClearReplies()
0x1b5: Pop(0)
0x1b6: Push((int) 514146)
0x1b7: Push((int) -1)
0x1b8: Push((int) 15360)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Push((int) 514144)
0x1bc: Push((int) -1)
0x1bd: Push((int) 15358)
0x1be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c2: PushEmpty(bool)
0x1c3: Call2 0x3d2

0x1c4: Pop(0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c6: @ lshStopAnimation()
0x1c7: Pop(0)
0x1c8: GOTO 0x1cb

0x1c9: @ StopAnimation()
0x1ca: Pop(0)
0x1cb: Return(); Pop(0)

0x1cc: GOTO 0xe7

0x1cd: Return(); Pop(0)

0x1ce: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1cf: PushEmpty()
0x1d0: Call2 0x1e1

0x1d1: Pop(0)
0x1d2: Return(); Pop(0)

0x1d3: PushEmpty()
0x1d4: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d6: PushEmpty(int, object)
0x1d7: Stack[-1] = Stack[-3]
0x1d8: Push(-2, 1); TaskCall(0)
0x1d9: Call2 0x0

0x1da: Pop(-2, 1); TaskReturn
0x1db: Pop(1)
0x1dc: Push((int) 1000)
0x1dd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1df: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1e0: Return(); Pop(0)

0x1e1: @ Hold()
0x1e2: Pop(0)
0x1e3: GOTO 0x1e1

0x1e4: Return(); Pop(0)

0x1e5: PushEmpty(bool, bool)
0x1e6: Push("cleanup")
0x1e7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1e9: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1ea: @ IsLoaded(Stack[-1])
0x1eb: Pop(0)
0x1ec: PushEmpty(bool)
0x1ed: Stack[-1] = (bool) 0
0x1ee: Pop(0); Push((bool) Stack[-2] == 0)
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f0: PushEmpty(bool)
0x1f1: Call2 0x211

0x1f2: Pop(0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f4: Stack[-1] = (bool) 1
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f6: PushEmpty(object)
0x1f7: Call2 0x290

0x1f8: Pop(0)
0x1f9: @ RemoveActor(Stack[-1])
0x1fa: Pop(1)
0x1fb: GOTO 0x200

0x1fc: Push("restore")
0x1fd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ff: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x200: Return(); Pop(2)

0x201: PushEmpty(bool)
0x202: Stack[-1] = (bool) 0
0x203: Push( Stack[0 + Tasks[-1].StackPointer] )
0x204: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x205: PushEmpty(bool)
0x206: Call2 0x211

0x207: Pop(0)
0x208: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x209: Stack[-1] = (bool) 1
0x20a: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20b: PushEmpty(object)
0x20c: Call2 0x290

0x20d: Pop(0)
0x20e: @ RemoveActor(Stack[-1])
0x20f: Pop(1)
0x210: Return(); Pop(0)

0x211: Stack[-1] = (bool) 1
0x212: Return(); Pop(0)

0x213: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x214: @@ GetPosition(Stack[-8])
0x215: Pop(0)
0x216: @@ GetEyesHeight(Stack[-9])
0x217: Pop(0)
0x218: Push(CvectorIndex(Stack[-8], 1))
0x219: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x21a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x21b: @ GetPosition(Stack[-7])
0x21c: Pop(0)
0x21d: @ GetEyesHeight(Stack[-9])
0x21e: Pop(0)
0x21f: Push(CvectorIndex(Stack[-7], 1))
0x220: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x221: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x222: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x223: Push(CvectorIndex(Stack[-6], 1))
0x224: Stack[-1] = (int) 0
0x225: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x226: Pop(0); Push(Stack[-6] | Stack[-6]);
0x227: Pop(1); Push(Sqrt(Stack[-1]))
0x228: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x229: Stack[-5] = -Stack[-6]; Pop(0);
0x22a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x22b: PushEmpty(cvector, cvector)
0x22c: Push(CVector(0.0, 1.0, 0.0))
0x22d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x22e: Call2 0x296

0x22f: Pop(1)
0x230: Push((int) 25)
0x231: Pop(2); Push(Stack[-2] * Stack[-1]);
0x232: Pop(2); Push(Stack[-2] + Stack[-1]);
0x233: Push(CVector(0.0, 10.0, 0.0))
0x234: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x235: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x236: @ IsOverrideActive(Stack[-2])
0x237: Pop(0)
0x238: Push(Stack[-2])
0x239: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23a: Stack[-21] = (bool) 0
0x23b: Return(); Pop(18)

0x23c: @ StopWorld()
0x23d: Pop(0)
0x23e: Push((bool) 1)
0x23f: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x240: Pop(1)
0x241: Push(CvectorIndex(Stack[-4], 0))
0x242: Push(CvectorIndex(Stack[-5], 2))
0x243: @ Rotate(Stack[-2], Stack[-1])
0x244: Pop(2)
0x245: PushEmpty(bool)
0x246: Call2 0x3d2

0x247: Pop(0)
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: GOTO 0x252

0x24a: Push("head")
0x24b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x24c: Pop(1)
0x24d: Push(Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24f: Push("head")
0x250: @ LookAsyncCamera(Stack[-1])
0x251: Pop(1)
0x252: @ CameraWaitForPlayFinish()
0x253: Pop(0)
0x254: @ ResumeWorld()
0x255: Pop(0)
0x256: Stack[-21] = (bool) 1
0x257: Return(); Pop(18)

0x258: PushEmpty(bool, bool)
0x259: Push((bool) 1)
0x25a: @ CameraSwitchToNormal(Stack[-1])
0x25b: Pop(1)
0x25c: PushEmpty(bool)
0x25d: Call2 0x3d2

0x25e: Pop(0)
0x25f: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x260: GOTO 0x269

0x261: Push("head")
0x262: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x263: Pop(1)
0x264: Push(Stack[-1])
0x265: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x266: Push("head")
0x267: @ UnlookAsync(Stack[-1])
0x268: Pop(1)
0x269: Return(); Pop(2)

0x26a: PushEmpty(bool, float, float, bool, float, float)
0x26b: @ lshHasAnimation(Stack[-3], Stack[-7])
0x26c: Pop(0)
0x26d: Push(Stack[-3])
0x26e: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x26f: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x270: Pop(0)
0x271: Push((bool) 0)
0x272: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x273: Pop(1)
0x274: GOTO 0x279

0x275: Push("Can't find lsh animation : ")
0x276: Pop(1); Push(Stack[-1] + Stack[-8]);
0x277: @ Trace(Stack[-1])
0x278: Pop(1)
0x279: Return(); Pop(6)

0x27a: PushEmpty(bool, float, float, bool, float, float)
0x27b: @ lshHasAnimation(Stack[-3], Stack[-8])
0x27c: Pop(0)
0x27d: Push(Stack[-3])
0x27e: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27f: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x280: Pop(0)
0x281: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x282: Pop(0)
0x283: GOTO 0x288

0x284: Push("Can't find lsh animation : ")
0x285: Pop(1); Push(Stack[-1] + Stack[-9]);
0x286: @ Trace(Stack[-1])
0x287: Pop(1)
0x288: Return(); Pop(6)

0x289: PushEmpty(bool)
0x28a: Call2 0x3d2

0x28b: Pop(0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28d: @ lshStopSpeech()
0x28e: Pop(0)
0x28f: Return(); Pop(0)

0x290: PushEmpty(object, object)
0x291: @ self(Stack[-1])
0x292: Pop(0)
0x293: Stack[-3] = Stack[-1]
0x294: Return(); Pop(2)

0x295: Stack[-1] = 0
0x296: PushEmpty(float, float)
0x297: Pop(0); Push(Stack[-3] | Stack[-3]);
0x298: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x299: Push((float)0.0)
0x29a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x29b: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29c: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x29d: Return(); Pop(2)

0x29e: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x29f: Return(); Pop(2)

0x2a0: PushEmpty(int, int)
0x2a1: @ GetVariable(Stack[-3], Stack[-1])
0x2a2: Pop(0)
0x2a3: Stack[-4] = Stack[-1]
0x2a4: Return(); Pop(2)

0x2a5: PushEmpty(object, object)
0x2a6: @ CreateIntVector(Stack[-1])
0x2a7: Pop(0)
0x2a8: @@ add(Stack[-4])
0x2a9: Pop(0)
0x2aa: @@ add(Stack[-3])
0x2ab: Pop(0)
0x2ac: Push((int) 3)
0x2ad: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x2ae: Pop(1)
0x2af: Return(); Pop(2)

0x2b0: Stack[-1] = 0
0x2b1: PushEmpty(int, int, bool, int, int, bool)
0x2b2: @@ GetItemID(Stack[-3])
0x2b3: Pop(0)
0x2b4: Push("Category")
0x2b5: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x2b6: Pop(1)
0x2b7: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x2b8: Pop(0)
0x2b9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bb: @@ DropItems(Stack[-8], Stack[-7])
0x2bc: Pop(0)
0x2bd: GOTO 0x2c3

0x2be: PushEmpty(int, int)
0x2bf: Stack[-2] = Stack[-5]
0x2c0: Stack[-1] = Stack[-9]
0x2c1: Call2 0x2a5

0x2c2: Pop(2)
0x2c3: Return(); Pop(6)

0x2c4: PushEmpty(object, object)
0x2c5: @ CreateInvItem(Stack[-1])
0x2c6: Pop(0)
0x2c7: @@ SetItemName(Stack[-4])
0x2c8: Pop(0)
0x2c9: PushEmpty(object, object, int)
0x2ca: Stack[-3] = Stack[-8]
0x2cb: Stack[-2] = Stack[-4]
0x2cc: Stack[-1] = Stack[-6]
0x2cd: Call2 0x2b1

0x2ce: Pop(3)
0x2cf: Return(); Pop(2)

0x2d0: Stack[-1] = 0
0x2d1: PushEmpty(object, object)
0x2d2: @ FindActor(Stack[-1], Stack[-4])
0x2d3: Pop(0)
0x2d4: Pop(0); Push((bool) Stack[-1] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d6: Stack[-5] = (bool) 0
0x2d7: Return(); Pop(2)

0x2d8: @ Trigger(Stack[-1], Stack[-3])
0x2d9: Pop(0)
0x2da: Stack[-5] = (bool) 1
0x2db: Return(); Pop(2)

0x2dc: Stack[-1] = 0
0x2dd: PushEmpty()
0x2de: Push("playsound")
0x2df: Push("giveitem")
0x2e0: @ TriggerWorld(Stack[-2], Stack[-1])
0x2e1: Pop(2)
0x2e2: Return(); Pop(0)

0x2e3: PushEmpty()
0x2e4: Push("revolver ammo6 is given")
0x2e5: @ Trace(Stack[-1])
0x2e6: Pop(1)
0x2e7: PushEmpty(object, string, int)
0x2e8: Stack[-3] = Stack[-5]
0x2e9: Stack[-2] = "revolver_ammo"
0x2ea: Stack[-1] = (int) 6
0x2eb: Call2 0x2c4

0x2ec: Pop(3)
0x2ed: Return(); Pop(0)

0x2ee: PushEmpty()
0x2ef: Push("d11q02")
0x2f0: Push((int) 1)
0x2f1: @ SetVariable(Stack[-2], Stack[-1])
0x2f2: Pop(2)
0x2f3: PushEmpty()
0x2f4: Call2 0x369

0x2f5: Pop(0)
0x2f6: PushEmpty()
0x2f7: Call2 0x383

0x2f8: Pop(0)
0x2f9: PushEmpty(bool, string, string)
0x2fa: Stack[-2] = "quest_d11_02"
0x2fb: Stack[-1] = "init_graveyard"
0x2fc: Call2 0x2d1

0x2fd: Pop(3)
0x2fe: Return(); Pop(0)

0x2ff: PushEmpty()
0x300: PushEmpty(int, string)
0x301: Stack[-1] = "d11q02"
0x302: Call2 0x2a0

0x303: Pop(1)
0x304: Push((int) 1000)
0x305: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x307: PushEmpty()
0x308: Call2 0x376

0x309: Pop(0)
0x30a: PushEmpty(bool, string, string)
0x30b: Stack[-2] = "quest_d11_02"
0x30c: Stack[-1] = "completed"
0x30d: Call2 0x2d1

0x30e: Pop(3)
0x30f: Return(); Pop(0)

0x310: PushEmpty()
0x311: Push("ood11ULittleBoy1")
0x312: Push((int) 1)
0x313: @ SetVariable(Stack[-2], Stack[-1])
0x314: Pop(2)
0x315: Return(); Pop(0)

0x316: PushEmpty()
0x317: Push("ood11ULittleBoy2")
0x318: Push((int) 1)
0x319: @ SetVariable(Stack[-2], Stack[-1])
0x31a: Pop(2)
0x31b: Return(); Pop(0)

0x31c: PushEmpty()
0x31d: Push((int) 1000)
0x31e: @@ SetReturnValue(Stack[-1])
0x31f: Pop(1)
0x320: Return(); Pop(0)

0x321: PushEmpty()
0x322: PushEmpty(int, string)
0x323: Stack[-1] = "d11q02"
0x324: Call2 0x2a0

0x325: Pop(1)
0x326: Push((int) 0)
0x327: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x329: Stack[-2] = (bool) 1
0x32a: Return(); Pop(0)

0x32b: Stack[-2] = (bool) 0
0x32c: Return(); Pop(0)

0x32d: PushEmpty()
0x32e: PushEmpty(int, string)
0x32f: Stack[-1] = "d11q02"
0x330: Call2 0x2a0

0x331: Pop(1)
0x332: Push((int) 2)
0x333: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x335: Stack[-2] = (bool) 1
0x336: Return(); Pop(0)

0x337: Stack[-2] = (bool) 0
0x338: Return(); Pop(0)

0x339: PushEmpty()
0x33a: PushEmpty(int, string)
0x33b: Stack[-1] = "d11q02"
0x33c: Call2 0x2a0

0x33d: Pop(1)
0x33e: Push((int) -1)
0x33f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x340: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x341: Stack[-2] = (bool) 1
0x342: Return(); Pop(0)

0x343: Stack[-2] = (bool) 0
0x344: Return(); Pop(0)

0x345: PushEmpty()
0x346: PushEmpty(int, string)
0x347: Stack[-1] = "d11q02"
0x348: Call2 0x2a0

0x349: Pop(1)
0x34a: Push((int) 1000)
0x34b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x34c: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34d: Stack[-2] = (bool) 1
0x34e: Return(); Pop(0)

0x34f: Stack[-2] = (bool) 0
0x350: Return(); Pop(0)

0x351: PushEmpty()
0x352: PushEmpty(int, string)
0x353: Stack[-1] = "ood11ULittleBoy1"
0x354: Call2 0x2a0

0x355: Pop(1)
0x356: Push((int) 0)
0x357: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x358: IF (Stack[-1] == 0) GOTO 0x35b; Pop(1)

0x359: Stack[-2] = (bool) 1
0x35a: Return(); Pop(0)

0x35b: Stack[-2] = (bool) 0
0x35c: Return(); Pop(0)

0x35d: PushEmpty()
0x35e: PushEmpty(int, string)
0x35f: Stack[-1] = "ood11ULittleBoy2"
0x360: Call2 0x2a0

0x361: Pop(1)
0x362: Push((int) 0)
0x363: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x365: Stack[-2] = (bool) 1
0x366: Return(); Pop(0)

0x367: Stack[-2] = (bool) 0
0x368: Return(); Pop(0)

0x369: PushEmpty(object, object)
0x36a: Push((int) 197)
0x36b: Push((int) 2)
0x36c: Push((int) 515485)
0x36d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x36e: Pop(3)
0x36f: PushEmpty(bool, object, int)
0x370: Stack[-2] = Stack[-4]
0x371: Stack[-1] = (int) -1
0x372: Call2 0x39d

0x373: Pop(3)
0x374: Return(); Pop(2)

0x375: Stack[-1] = 0
0x376: PushEmpty(object, object)
0x377: Push((int) 198)
0x378: Push((int) 2)
0x379: Push((int) 515486)
0x37a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x37b: Pop(3)
0x37c: PushEmpty(bool, object, int)
0x37d: Stack[-2] = Stack[-4]
0x37e: Stack[-1] = (int) 197
0x37f: Call2 0x39d

0x380: Pop(3)
0x381: Return(); Pop(2)

0x382: Stack[-1] = 0
0x383: PushEmpty(object, object)
0x384: Push((int) 199)
0x385: Push((int) 2)
0x386: Push((int) 515487)
0x387: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x388: Pop(3)
0x389: PushEmpty(bool, object, int)
0x38a: Stack[-2] = Stack[-4]
0x38b: Stack[-1] = (int) 197
0x38c: Call2 0x39d

0x38d: Pop(3)
0x38e: Return(); Pop(2)

0x38f: Stack[-1] = 0
0x390: PushEmpty(object, object)
0x391: @ GetDiaryRoot(Stack[-1])
0x392: Pop(0)
0x393: Pop(0); Push((bool) Stack[-1] == 0)
0x394: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x395: Push("Can't retrieve diary root")
0x396: @ Trace(Stack[-1])
0x397: Pop(1)
0x398: Stack[-3] = (bool) 0
0x399: Return(); Pop(2)

0x39a: Stack[-3] = Stack[-1]
0x39b: Return(); Pop(2)

0x39c: Stack[-1] = 0
0x39d: PushEmpty(object, object, int, object, object, int)
0x39e: PushEmpty(object)
0x39f: Call2 0x390

0x3a0: Stack[-4] = Stack[-1]
0x3a1: Pop(1)
0x3a2: @@ Find(Stack[-7], Stack[-2])
0x3a3: Pop(0)
0x3a4: Pop(0); Push((bool) Stack[-2] == 0)
0x3a5: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x3a6: Push("Can't find diary parent with id: ")
0x3a7: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3a8: @ Trace(Stack[-1])
0x3a9: Pop(1)
0x3aa: Stack[-9] = (bool) 0
0x3ab: Return(); Pop(6)

0x3ac: @@ AddChild(Stack[-8])
0x3ad: Pop(0)
0x3ae: Push((int) 7)
0x3af: @ SendWorldWndMessage(Stack[-1])
0x3b0: Pop(1)
0x3b1: @@ GetCategory(Stack[-1])
0x3b2: Pop(0)
0x3b3: @ SetDiarySection(Stack[-1])
0x3b4: Pop(0)
0x3b5: Stack[-9] = (bool) 0
0x3b6: Return(); Pop(6)

0x3b7: Stack[-2] = 0
0x3b8: Stack[-3] = 0
0x3b9: PushEmpty(int, int)
0x3ba: Push("branch")
0x3bb: @ GetVariable(Stack[-1], Stack[-2])
0x3bc: Pop(1)
0x3bd: Push((int) 0)
0x3be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c0: Stack[-3] = (int) 1
0x3c1: Return(); Pop(2)

0x3c2: GOTO 0x3c8

0x3c3: Push((int) 1)
0x3c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c6: Stack[-3] = (int) 2
0x3c7: Return(); Pop(2)

0x3c8: Stack[-3] = (int) 3
0x3c9: Return(); Pop(2)

0x3ca: Stack[-1] = (int) 515560
0x3cb: Return(); Pop(0)

0x3cc: Stack[-1] = (int) 503345
0x3cd: Return(); Pop(0)

0x3ce: Stack[-1] = "ui/NPC_Citizen3.png"
0x3cf: Return(); Pop(0)

0x3d0: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x3d1: Return(); Pop(0)

0x3d2: Stack[-1] = (bool) 0
0x3d3: Return(); Pop(0)

