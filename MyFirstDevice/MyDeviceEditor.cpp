#include "MyDeviceEditor.h"

#include <iostream>
FBDeviceLayoutImplementation(MyDeviceEditor);
FBRegisterDeviceLayout(MyDeviceEditor,
    "MyDevice",
    FB_DEFAULT_SDK_ICON
    )

void MyDeviceEditor::FBDestroy()
{
    _button.OnClick.Remove(this,(FBCallback)&MyDeviceEditor::OnButtonClick);
    FBDeviceLayout::FBDestroy();
}

bool MyDeviceEditor::FBCreate()
{
    _device= (MyDevice*)(FBDevice*) Device;
    CreatUI()  ;
    return FBDeviceLayout::FBCreate();
}

void MyDeviceEditor::CreatUI()
{
    int w=80;
    int h =25;
    int space =10;
    AddRegion("Color","Color",
        space,FBAttachType::kFBAttachNone,"",1,
        space,FBAttachType::kFBAttachNone,"",1,
        w,FBAttachType::kFBAttachNone,"",1,
        h,FBAttachType::kFBAttachNone,"",1
        );
    SetControl("Color",_color);
    _color.Value=FBColor(0.2,0.4,0.6);
    


    AddRegion("Button","Button",
        space,FBAttachType::kFBAttachRight,"Color",1,
        space,FBAttachType::kFBAttachNone,"",1,
        0,FBAttachType::kFBAttachWidth,"Color",2,
        h,FBAttachType::kFBAttachNone,"",1
        );
    SetControl("Button",_button);
    _button.Caption="标题";
    _button.OnClick.Add(this,(FBCallback)&MyDeviceEditor::OnButtonClick);
}
void MyDeviceEditor::OnButtonClick(HISender sender,HKEvent event)
{
    std::cout << "Click"<<std::endl;
    _color.Value=FBColor(0.2,0.4,0.6);
}

