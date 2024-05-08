Entity1 = {
	Name = "Camera",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-9.600000381469727|4.0|14.0",
				Rotation = "false|1.0|0|0|0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "CAMERA",
			Arguments = {
			}
		},
		{
            Name = "BUTTON_FUNCTIONS",
            Arguments = {
			}
        }
	}
}

Entity2 = {
	Name = "UI_Cursor",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
				OverlayName= "image",
				XPos = "0",
				YPos = "0",
				Width = "5",
				Height = "5",
				Texture = "Cursor.png",
				Depth = "10"
			}
		},
		{
			Name = "CURSOR",
			Arguments = {
			}
		}
	}		
}

Entity3 = {
	Name = "Background",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
				OverlayName = "pausebgimg",
				XPos = "50",
                YPos = "50",
                Width = "100",
                Height = "100",
                Texture = "winMenuBackground.png",
                Depth = "0"
			}
		}
	}
}

Entity5 = {
	Name = "MainMenuButton",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "mmbutton",
				XPos = "50",
                YPos = "90",
                Width = "35",
                Height = "10",
                Texture1 = "mainmenu_white.png",
                Texture2 = "mainmenu_red.png",
                Texture3 = "mainmenu_darkred.png",
                Depth = "2"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "ButtonScript"
			}
        }
	}	
}

Entity6 = {
	Name = "FinalScoreText",
	Components = {
		{
			Name = "TEXT",
			Arguments = {
				OverlayName = "FinalScoreText",
				XPos = "50",
				YPos = "25",
				Depth = "1",
				Tam = "12",
				Text = "FINAL SCORE: ",
				Font = "DooM.ttf",
				Color = "241|175|59"
			}
		}
	}
}

Entity7 = {
	Name = "UI_MANAGER",
	Components = {
		{
			Name = "UIMANAGER",
			Arguments = {
			}
		}
	}
}

Entities = { Entity1, Entity2, Entity3, Entity4, Entity5, Entity6, Entity7 }

CollisionLayers = {
	Layers = {
		DEFAULT = ""
	}
}