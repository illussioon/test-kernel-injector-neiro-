 # test-kernel-injector-neiro-
kernel_injector Созданый нейросетью (это всё тестовое и я не заверяю что работает)

# Структура проекта:
  project/</br>
  ├── driver/
  │   └── kernel_injector.cpp
  ├── test_app/
  │   └── main.cpp
  ├── injector/
  │   └── injector.cpp
  └── imgui_dll/
      ├── dllmain.cpp
      └── imgui/              # Папка с файлами ImGui
          ├── imgui.h
          ├── imgui.cpp
          ├── imgui_internal.h
          ├── imgui_draw.cpp
          ├── imgui_widgets.cpp
          ├── imgui_tables.cpp
          ├── imconfig.h
          └── backends/       # Подпапка с бэкендами
              ├── imgui_impl_dx11.h
              ├── imgui_impl_dx11.cpp
              ├── imgui_impl_win32.h
              └── imgui_impl_win32.cpp
