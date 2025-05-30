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
	player_diary
	GetCategory
	player
	Adding diary entry
	ui/NPC_None.png

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
	CreateDiaryEntry (4 args)

RunOp = 0x1b3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd0 Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x1b8 Vars = (object)
		EVENT_26 Op = 0x1ca Vars = (string)
		EVENT_6 Op = 0x1e6 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x1f8

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x37f

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x381

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x33e

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
0x36: Call 0x230

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
0x44: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x2cc

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x59; Pop(1)

0x4a: PushEmpty(string)
0x4b: Stack[-1] = "Neutral"
0x4c: Call 0xc0

0x4d: Pop(1)
0x4e: Push((int) 14142)
0x4f: @@ SetMessage(Stack[-1])
0x50: Pop(1)
0x51: @@ ClearReplies()
0x52: Pop(0)
0x53: Push((int) 14143)
0x54: Push((int) 15359)
0x55: Push((int) 15357)
0x56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(3)
0x58: GOTO 0xa2

0x59: PushEmpty(string)
0x5a: Stack[-1] = "Neutral"
0x5b: Call 0xc0

0x5c: Pop(1)
0x5d: Push((int) 14147)
0x5e: @@ SetMessage(Stack[-1])
0x5f: Pop(1)
0x60: @@ ClearReplies()
0x61: Pop(0)
0x62: PushEmpty(bool)
0x63: Stack[-1] = (bool) 1
0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 0
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call 0x2d8

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6b: PushEmpty(bool, object)
0x6c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6d: Call 0x2fc

0x6e: Pop(1)
0x6f: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x70: Stack[-1] = (bool) 1
0x71: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x72: PushEmpty(bool)
0x73: Stack[-1] = (bool) 0
0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call 0x2f0

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call 0x2fc

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x7e: Stack[-1] = (bool) 1
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: Stack[-1] = (bool) 0
0x81: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x82: Push((int) 14149)
0x83: Push((int) 15364)
0x84: Push((int) 15363)
0x85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86: Pop(3)
0x87: PushEmpty(bool)
0x88: Stack[-1] = (bool) 0
0x89: PushEmpty(bool, object)
0x8a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b: Call 0x2e4

0x8c: Pop(1)
0x8d: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8e: PushEmpty(bool, object)
0x8f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90: Call 0x308

0x91: Pop(1)
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Stack[-1] = (bool) 1
0x94: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x95: Push((int) 14152)
0x96: Push((int) 15367)
0x97: Push((int) 15366)
0x98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99: Pop(3)
0x9a: Push((int) 14148)
0x9b: Push((int) -1)
0x9c: Push((int) 15362)
0x9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e: Pop(3)
0x9f: GOTO 0xa2

0xa0: Return(); Pop(0)

0xa1: GOTO 0x43

0xa2: PushEmpty(bool)
0xa3: Call 0x383

0xa4: Pop(0)
0xa5: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa6: @ lshWaitForAnimEnd()
0xa7: Pop(0)
0xa8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: GOTO 0xb0

0xab: PushEmpty(string)
0xac: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xad: Call 0x234

0xae: Pop(1)
0xaf: GOTO 0xa6

0xb0: GOTO 0xbf

0xb1: Push("all")
0xb2: Push("idle")
0xb3: @ PlayAnimation(Stack[-2], Stack[-1])
0xb4: Pop(2)
0xb5: @ WaitForAnimEnd()
0xb6: Pop(0)
0xb7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: GOTO 0xbf

0xba: Push("all")
0xbb: Push("idle")
0xbc: @ PlayAnimation(Stack[-2], Stack[-1])
0xbd: Pop(2)
0xbe: GOTO 0xb5

0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: PushEmpty(bool)
0xc2: Call 0x383

0xc3: Pop(0)
0xc4: Pop(1); Push((bool) Stack[-1] == 0)
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: Return(); Pop(0)

0xc7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc9: Return(); Pop(0)

0xca: PushEmpty(string)
0xcb: Stack[-1] = Stack[-2]
0xcc: Call 0x234

0xcd: Pop(1)
0xce: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcf: Return(); Pop(0)

0xd0: PushEmpty()
0xd1: Push((int) 1)
0xd2: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0xd3: PushEmpty()
0xd4: Call 0x246

0xd5: Pop(0)
0xd6: Push((int) 15360)
0xd7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd9: PushEmpty(object, object)
0xda: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc: Call 0x299

0xdd: Pop(2)
0xde: Push((int) 15363)
0xdf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe1: PushEmpty(object, object)
0xe2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Call 0x2bb

0xe5: Pop(2)
0xe6: Push((int) 15365)
0xe7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call 0x2aa

0xed: Pop(2)
0xee: PushEmpty(object, object)
0xef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1: Call 0x28e

0xf2: Pop(2)
0xf3: PushEmpty(object, object)
0xf4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf6: Call 0x288

0xf7: Pop(2)
0xf8: PushEmpty(object, object)
0xf9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfb: Call 0x2c7

0xfc: Pop(2)
0xfd: Push((int) 15366)
0xfe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x100: PushEmpty(object, object)
0x101: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call 0x2c1

0x104: Pop(2)
0x105: Push((int) 15368)
0x106: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call 0x2c7

0x10c: Pop(2)
0x10d: Push((int) 15356)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x110: PushEmpty(bool, object)
0x111: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x112: Call 0x2cc

0x113: Pop(1)
0x114: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x115: PushEmpty(string)
0x116: Stack[-1] = "Neutral"
0x117: Call 0xc0

0x118: Pop(1)
0x119: Push((int) 14142)
0x11a: @@ SetMessage(Stack[-1])
0x11b: Pop(1)
0x11c: @@ ClearReplies()
0x11d: Pop(0)
0x11e: Push((int) 14143)
0x11f: Push((int) 15359)
0x120: Push((int) 15357)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Neutral"
0x126: Call 0xc0

0x127: Pop(1)
0x128: Push((int) 14147)
0x129: @@ SetMessage(Stack[-1])
0x12a: Pop(1)
0x12b: @@ ClearReplies()
0x12c: Pop(0)
0x12d: PushEmpty(bool)
0x12e: Stack[-1] = (bool) 1
0x12f: PushEmpty(bool)
0x130: Stack[-1] = (bool) 0
0x131: PushEmpty(bool, object)
0x132: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x133: Call 0x2d8

0x134: Pop(1)
0x135: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x136: PushEmpty(bool, object)
0x137: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x138: Call 0x2fc

0x139: Pop(1)
0x13a: IF (Stack[-1] == 0) GOTO 0x13c; Pop(1)

0x13b: Stack[-1] = (bool) 1
0x13c: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x13d: PushEmpty(bool)
0x13e: Stack[-1] = (bool) 0
0x13f: PushEmpty(bool, object)
0x140: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x141: Call 0x2f0

0x142: Pop(1)
0x143: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x146: Call 0x2fc

0x147: Pop(1)
0x148: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x149: Stack[-1] = (bool) 1
0x14a: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x14b: Stack[-1] = (bool) 0
0x14c: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x14d: Push((int) 14149)
0x14e: Push((int) 15364)
0x14f: Push((int) 15363)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: PushEmpty(bool)
0x153: Stack[-1] = (bool) 0
0x154: PushEmpty(bool, object)
0x155: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x156: Call 0x2e4

0x157: Pop(1)
0x158: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x159: PushEmpty(bool, object)
0x15a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15b: Call 0x308

0x15c: Pop(1)
0x15d: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15e: Stack[-1] = (bool) 1
0x15f: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x160: Push((int) 14152)
0x161: Push((int) 15367)
0x162: Push((int) 15366)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Push((int) 14148)
0x166: Push((int) -1)
0x167: Push((int) 15362)
0x168: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169: Pop(3)
0x16a: Return(); Pop(0)

0x16b: Push((int) 15367)
0x16c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x16e: PushEmpty(string)
0x16f: Stack[-1] = "Neutral"
0x170: Call 0xc0

0x171: Pop(1)
0x172: Push((int) 14153)
0x173: @@ SetMessage(Stack[-1])
0x174: Pop(1)
0x175: @@ ClearReplies()
0x176: Pop(0)
0x177: Push((int) 14154)
0x178: Push((int) -1)
0x179: Push((int) 15368)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: Return(); Pop(0)

0x17d: Push((int) 15364)
0x17e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x180: PushEmpty(string)
0x181: Stack[-1] = "Neutral"
0x182: Call 0xc0

0x183: Pop(1)
0x184: Push((int) 14150)
0x185: @@ SetMessage(Stack[-1])
0x186: Pop(1)
0x187: @@ ClearReplies()
0x188: Pop(0)
0x189: Push((int) 14151)
0x18a: Push((int) -1)
0x18b: Push((int) 15365)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: Return(); Pop(0)

0x18f: Push((int) 15359)
0x190: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x192: PushEmpty(string)
0x193: Stack[-1] = "Neutral"
0x194: Call 0xc0

0x195: Pop(1)
0x196: Push((int) 14145)
0x197: @@ SetMessage(Stack[-1])
0x198: Pop(1)
0x199: @@ ClearReplies()
0x19a: Pop(0)
0x19b: Push((int) 14146)
0x19c: Push((int) -1)
0x19d: Push((int) 15360)
0x19e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19f: Pop(3)
0x1a0: Push((int) 14144)
0x1a1: Push((int) -1)
0x1a2: Push((int) 15358)
0x1a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a4: Pop(3)
0x1a5: Return(); Pop(0)

0x1a6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a7: PushEmpty(bool)
0x1a8: Call 0x383

0x1a9: Pop(0)
0x1aa: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x1ab: @ lshStopAnimation()
0x1ac: Pop(0)
0x1ad: GOTO 0x1b0

0x1ae: @ StopAnimation()
0x1af: Pop(0)
0x1b0: Return(); Pop(0)

0x1b1: GOTO 0xd1

0x1b2: Return(); Pop(0)

0x1b3: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1b4: PushEmpty()
0x1b5: Call 0x1c6

0x1b6: Pop(0)
0x1b7: Return(); Pop(0)

0x1b8: PushEmpty()
0x1b9: Push( Stack[1 + Tasks[-1].StackPointer] )
0x1ba: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1bb: PushEmpty(int, object)
0x1bc: Stack[-1] = Stack[-3]
0x1bd: Push(-2, 1); TaskCall(0)
0x1be: Call 0x0

0x1bf: Pop(-2, 1); TaskReturn
0x1c0: Pop(1)
0x1c1: Push((int) 1000)
0x1c2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1c3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1c4: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1c5: Return(); Pop(0)

0x1c6: @ Hold()
0x1c7: Pop(0)
0x1c8: GOTO 0x1c6

0x1c9: Return(); Pop(0)

0x1ca: PushEmpty(bool, bool)
0x1cb: Push("cleanup")
0x1cc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1ce: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1cf: @ IsLoaded(Stack[-1])
0x1d0: Pop(0)
0x1d1: PushEmpty(bool)
0x1d2: Stack[-1] = (bool) 0
0x1d3: Pop(0); Push((bool) Stack[-2] == 0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d5: PushEmpty(bool)
0x1d6: Call 0x1f6

0x1d7: Pop(0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d9: Stack[-1] = (bool) 1
0x1da: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1db: PushEmpty(object)
0x1dc: Call 0x24d

0x1dd: Pop(0)
0x1de: @ RemoveActor(Stack[-1])
0x1df: Pop(1)
0x1e0: GOTO 0x1e5

0x1e1: Push("restore")
0x1e2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e4: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1e5: Return(); Pop(2)

0x1e6: PushEmpty(bool)
0x1e7: Stack[-1] = (bool) 0
0x1e8: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1e9: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ea: PushEmpty(bool)
0x1eb: Call 0x1f6

0x1ec: Pop(0)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ee: Stack[-1] = (bool) 1
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f0: PushEmpty(object)
0x1f1: Call 0x24d

0x1f2: Pop(0)
0x1f3: @ RemoveActor(Stack[-1])
0x1f4: Pop(1)
0x1f5: Return(); Pop(0)

0x1f6: Stack[-1] = (bool) 1
0x1f7: Return(); Pop(0)

0x1f8: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1f9: @@ GetPosition(Stack[-7])
0x1fa: Pop(0)
0x1fb: @@ GetEyesHeight(Stack[-8])
0x1fc: Pop(0)
0x1fd: Push(CvectorIndex(Stack[-7], 1))
0x1fe: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1ff: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x200: @ GetPosition(Stack[-6])
0x201: Pop(0)
0x202: @ GetEyesHeight(Stack[-8])
0x203: Pop(0)
0x204: Push(CvectorIndex(Stack[-6], 1))
0x205: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x206: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x207: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x208: Push(CvectorIndex(Stack[-5], 1))
0x209: Stack[-1] = (int) 0
0x20a: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x20b: Pop(0); Push(Stack[-5] | Stack[-5]);
0x20c: Pop(1); Push(Sqrt(Stack[-1]))
0x20d: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x20e: Stack[-4] = -Stack[-5]; Pop(0);
0x20f: Push((int) 70)
0x210: Pop(1); Push(Stack[-6] * Stack[-1]);
0x211: PushEmpty(cvector, cvector)
0x212: Push(CVector(0.0, 1.0, 0.0))
0x213: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x214: Call 0x253

0x215: Pop(1)
0x216: Push((int) 25)
0x217: Pop(2); Push(Stack[-2] * Stack[-1]);
0x218: Pop(2); Push(Stack[-2] + Stack[-1]);
0x219: Push(CVector(0.0, 10.0, 0.0))
0x21a: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x21b: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x21c: @ IsOverrideActive(Stack[-1])
0x21d: Pop(0)
0x21e: Push(Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x220: Stack[-18] = (bool) 0
0x221: Return(); Pop(16)

0x222: @ StopWorld()
0x223: Pop(0)
0x224: @ CameraTransit(Stack[-2], Stack[-4])
0x225: Pop(0)
0x226: Push(CvectorIndex(Stack[-3], 0))
0x227: Push(CvectorIndex(Stack[-4], 2))
0x228: @ Rotate(Stack[-2], Stack[-1])
0x229: Pop(2)
0x22a: @ CameraWaitForPlayFinish()
0x22b: Pop(0)
0x22c: @ ResumeWorld()
0x22d: Pop(0)
0x22e: Stack[-18] = (bool) 1
0x22f: Return(); Pop(16)

0x230: PushEmpty()
0x231: @ CameraSwitchToNormal()
0x232: Pop(0)
0x233: Return(); Pop(0)

0x234: PushEmpty(float, float, float, float)
0x235: Push("playing ")
0x236: Pop(1); Push(Stack[-1] + Stack[-6]);
0x237: @ Trace(Stack[-1])
0x238: Pop(1)
0x239: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x23a: Pop(0)
0x23b: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x23c: Pop(0)
0x23d: Push("start: ")
0x23e: Pop(1); Push(Stack[-1] + Stack[-3]);
0x23f: @ Trace(Stack[-1])
0x240: Pop(1)
0x241: Push("end: ")
0x242: Pop(1); Push(Stack[-1] + Stack[-2]);
0x243: @ Trace(Stack[-1])
0x244: Pop(1)
0x245: Return(); Pop(4)

0x246: PushEmpty(bool)
0x247: Call 0x383

0x248: Pop(0)
0x249: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24a: @ lshStopSpeech()
0x24b: Pop(0)
0x24c: Return(); Pop(0)

0x24d: PushEmpty(object, object)
0x24e: @ self(Stack[-1])
0x24f: Pop(0)
0x250: Stack[-3] = Stack[-1]
0x251: Return(); Pop(2)

0x252: Stack[-1] = 0
0x253: PushEmpty(float, float)
0x254: Pop(0); Push(Stack[-3] | Stack[-3]);
0x255: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x256: Push((float)0.0)
0x257: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x258: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x259: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x25a: Return(); Pop(2)

0x25b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x25c: Return(); Pop(2)

0x25d: PushEmpty(int, int)
0x25e: @ GetVariable(Stack[-3], Stack[-1])
0x25f: Pop(0)
0x260: Stack[-4] = Stack[-1]
0x261: Return(); Pop(2)

0x262: PushEmpty(int, int, bool, int, int, bool)
0x263: @@ GetItemID(Stack[-3])
0x264: Pop(0)
0x265: Push("Category")
0x266: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x267: Pop(1)
0x268: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x269: Pop(0)
0x26a: Pop(0); Push((bool) Stack[-1] == 0)
0x26b: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26c: @@ DropItems(Stack[-8], Stack[-7])
0x26d: Pop(0)
0x26e: Return(); Pop(6)

0x26f: PushEmpty(object, object)
0x270: @ CreateInvItem(Stack[-1])
0x271: Pop(0)
0x272: @@ SetItemName(Stack[-4])
0x273: Pop(0)
0x274: PushEmpty(object, object, int)
0x275: Stack[-3] = Stack[-8]
0x276: Stack[-2] = Stack[-4]
0x277: Stack[-1] = Stack[-6]
0x278: Call 0x262

0x279: Pop(3)
0x27a: Return(); Pop(2)

0x27b: Stack[-1] = 0
0x27c: PushEmpty(object, object)
0x27d: @ FindActor(Stack[-1], Stack[-4])
0x27e: Pop(0)
0x27f: Pop(0); Push((bool) Stack[-1] == 0)
0x280: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x281: Stack[-5] = (bool) 0
0x282: Return(); Pop(2)

0x283: @ Trigger(Stack[-1], Stack[-3])
0x284: Pop(0)
0x285: Stack[-5] = (bool) 1
0x286: Return(); Pop(2)

0x287: Stack[-1] = 0
0x288: PushEmpty()
0x289: Push("playsound")
0x28a: Push("giveitem")
0x28b: @ TriggerWorld(Stack[-2], Stack[-1])
0x28c: Pop(2)
0x28d: Return(); Pop(0)

0x28e: PushEmpty()
0x28f: Push("revolver ammo6 is given")
0x290: @ Trace(Stack[-1])
0x291: Pop(1)
0x292: PushEmpty(object, string, int)
0x293: Stack[-3] = Stack[-5]
0x294: Stack[-2] = "revolver_ammo"
0x295: Stack[-1] = (int) 6
0x296: Call 0x26f

0x297: Pop(3)
0x298: Return(); Pop(0)

0x299: PushEmpty()
0x29a: Push("d11q02")
0x29b: Push((int) 1)
0x29c: @ SetVariable(Stack[-2], Stack[-1])
0x29d: Pop(2)
0x29e: PushEmpty()
0x29f: Call 0x34f

0x2a0: Pop(0)
0x2a1: PushEmpty()
0x2a2: Call 0x36f

0x2a3: Pop(0)
0x2a4: PushEmpty(bool, string, string)
0x2a5: Stack[-2] = "quest_d11_02"
0x2a6: Stack[-1] = "init_graveyard"
0x2a7: Call 0x27c

0x2a8: Pop(3)
0x2a9: Return(); Pop(0)

0x2aa: PushEmpty()
0x2ab: PushEmpty(int, string)
0x2ac: Stack[-1] = "d11q02"
0x2ad: Call 0x25d

0x2ae: Pop(1)
0x2af: Push((int) 1000)
0x2b0: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b2: PushEmpty()
0x2b3: Call 0x35f

0x2b4: Pop(0)
0x2b5: PushEmpty(bool, string, string)
0x2b6: Stack[-2] = "quest_d11_02"
0x2b7: Stack[-1] = "completed"
0x2b8: Call 0x27c

0x2b9: Pop(3)
0x2ba: Return(); Pop(0)

0x2bb: PushEmpty()
0x2bc: Push("ood11ULittleBoy1")
0x2bd: Push((int) 1)
0x2be: @ SetVariable(Stack[-2], Stack[-1])
0x2bf: Pop(2)
0x2c0: Return(); Pop(0)

0x2c1: PushEmpty()
0x2c2: Push("ood11ULittleBoy2")
0x2c3: Push((int) 1)
0x2c4: @ SetVariable(Stack[-2], Stack[-1])
0x2c5: Pop(2)
0x2c6: Return(); Pop(0)

0x2c7: PushEmpty()
0x2c8: Push((int) 1000)
0x2c9: @@ SetReturnValue(Stack[-1])
0x2ca: Pop(1)
0x2cb: Return(); Pop(0)

0x2cc: PushEmpty()
0x2cd: PushEmpty(int, string)
0x2ce: Stack[-1] = "d11q02"
0x2cf: Call 0x25d

0x2d0: Pop(1)
0x2d1: Push((int) 0)
0x2d2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d4: Stack[-2] = (bool) 1
0x2d5: Return(); Pop(0)

0x2d6: Stack[-2] = (bool) 0
0x2d7: Return(); Pop(0)

0x2d8: PushEmpty()
0x2d9: PushEmpty(int, string)
0x2da: Stack[-1] = "d11q02"
0x2db: Call 0x25d

0x2dc: Pop(1)
0x2dd: Push((int) 2)
0x2de: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e0: Stack[-2] = (bool) 1
0x2e1: Return(); Pop(0)

0x2e2: Stack[-2] = (bool) 0
0x2e3: Return(); Pop(0)

0x2e4: PushEmpty()
0x2e5: PushEmpty(int, string)
0x2e6: Stack[-1] = "d11q02"
0x2e7: Call 0x25d

0x2e8: Pop(1)
0x2e9: Push((int) -1)
0x2ea: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ec: Stack[-2] = (bool) 1
0x2ed: Return(); Pop(0)

0x2ee: Stack[-2] = (bool) 0
0x2ef: Return(); Pop(0)

0x2f0: PushEmpty()
0x2f1: PushEmpty(int, string)
0x2f2: Stack[-1] = "d11q02"
0x2f3: Call 0x25d

0x2f4: Pop(1)
0x2f5: Push((int) 1000)
0x2f6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f8: Stack[-2] = (bool) 1
0x2f9: Return(); Pop(0)

0x2fa: Stack[-2] = (bool) 0
0x2fb: Return(); Pop(0)

0x2fc: PushEmpty()
0x2fd: PushEmpty(int, string)
0x2fe: Stack[-1] = "ood11ULittleBoy1"
0x2ff: Call 0x25d

0x300: Pop(1)
0x301: Push((int) 0)
0x302: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x303: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x304: Stack[-2] = (bool) 1
0x305: Return(); Pop(0)

0x306: Stack[-2] = (bool) 0
0x307: Return(); Pop(0)

0x308: PushEmpty()
0x309: PushEmpty(int, string)
0x30a: Stack[-1] = "ood11ULittleBoy2"
0x30b: Call 0x25d

0x30c: Pop(1)
0x30d: Push((int) 0)
0x30e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x310: Stack[-2] = (bool) 1
0x311: Return(); Pop(0)

0x312: Stack[-2] = (bool) 0
0x313: Return(); Pop(0)

0x314: PushEmpty(object, object)
0x315: @ GetDiaryRoot(Stack[-1])
0x316: Pop(0)
0x317: Pop(0); Push((bool) Stack[-1] == 0)
0x318: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x319: Push("Can't retrieve diary root")
0x31a: @ Trace(Stack[-1])
0x31b: Pop(1)
0x31c: Stack[-3] = (bool) 0
0x31d: Return(); Pop(2)

0x31e: Stack[-3] = Stack[-1]
0x31f: Return(); Pop(2)

0x320: Stack[-1] = 0
0x321: PushEmpty(object, object, int, object, object, int)
0x322: PushEmpty(object)
0x323: Call 0x314

0x324: Stack[-4] = Stack[-1]
0x325: Pop(1)
0x326: @@ Find(Stack[-7], Stack[-2])
0x327: Pop(0)
0x328: Pop(0); Push((bool) Stack[-2] == 0)
0x329: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32a: Push("Can't find diary parent with id: ")
0x32b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x32c: @ Trace(Stack[-1])
0x32d: Pop(1)
0x32e: Stack[-9] = (bool) 0
0x32f: Return(); Pop(6)

0x330: @@ AddChild(Stack[-8])
0x331: Pop(0)
0x332: Push("player_diary")
0x333: Push((int) 1)
0x334: @ SetVariable(Stack[-2], Stack[-1])
0x335: Pop(2)
0x336: @@ GetCategory(Stack[-1])
0x337: Pop(0)
0x338: @ SetDiarySection(Stack[-1])
0x339: Pop(0)
0x33a: Stack[-9] = (bool) 0
0x33b: Return(); Pop(6)

0x33c: Stack[-2] = 0
0x33d: Stack[-3] = 0
0x33e: PushEmpty(int, int)
0x33f: Push("player")
0x340: @ GetVariable(Stack[-1], Stack[-2])
0x341: Pop(1)
0x342: Push((int) 0)
0x343: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x345: Stack[-3] = (int) 200001
0x346: Return(); Pop(2)

0x347: GOTO 0x34d

0x348: Push((int) 1)
0x349: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34a: IF (Stack[-1] == 0) GOTO 0x34d; Pop(1)

0x34b: Stack[-3] = (int) 200002
0x34c: Return(); Pop(2)

0x34d: Stack[-3] = (int) 200003
0x34e: Return(); Pop(2)

0x34f: PushEmpty(object, object)
0x350: Push("Adding diary entry")
0x351: @ Trace(Stack[-1])
0x352: Pop(1)
0x353: Push((int) 197)
0x354: Push((int) 2)
0x355: Push((int) 15485)
0x356: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x357: Pop(3)
0x358: PushEmpty(bool, object, int)
0x359: Stack[-2] = Stack[-4]
0x35a: Stack[-1] = (int) -1
0x35b: Call 0x321

0x35c: Pop(3)
0x35d: Return(); Pop(2)

0x35e: Stack[-1] = 0
0x35f: PushEmpty(object, object)
0x360: Push("Adding diary entry")
0x361: @ Trace(Stack[-1])
0x362: Pop(1)
0x363: Push((int) 198)
0x364: Push((int) 2)
0x365: Push((int) 15486)
0x366: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x367: Pop(3)
0x368: PushEmpty(bool, object, int)
0x369: Stack[-2] = Stack[-4]
0x36a: Stack[-1] = (int) 197
0x36b: Call 0x321

0x36c: Pop(3)
0x36d: Return(); Pop(2)

0x36e: Stack[-1] = 0
0x36f: PushEmpty(object, object)
0x370: Push("Adding diary entry")
0x371: @ Trace(Stack[-1])
0x372: Pop(1)
0x373: Push((int) 199)
0x374: Push((int) 2)
0x375: Push((int) 15487)
0x376: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x377: Pop(3)
0x378: PushEmpty(bool, object, int)
0x379: Stack[-2] = Stack[-4]
0x37a: Stack[-1] = (int) 197
0x37b: Call 0x321

0x37c: Pop(3)
0x37d: Return(); Pop(2)

0x37e: Stack[-1] = 0
0x37f: Stack[-1] = (int) 3345
0x380: Return(); Pop(0)

0x381: Stack[-1] = "ui/NPC_None.png"
0x382: Return(); Pop(0)

0x383: Stack[-1] = (bool) 0
0x384: Return(); Pop(0)

