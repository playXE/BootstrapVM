project('waffle', 'c',
          version: '0.1.0',
    meson_version: '>= 0.50.0',
  default_options: [ 'warning_level=2',
                     'c_std=gnu11',
                   ],
)


config_h = configuration_data()
config_h.set_quoted('PACKAGE_VERSION', meson.project_version())
if target_machine.endian() == 'little'
	config_h.set('ORDER_LITTLE_ENDIAN', 1)
elif
	config_h.set('ORDER_BIG_ENDIAN',1)
endif
configure_file(
  output: 'waffle-config.h',
  configuration: config_h,
)
add_project_arguments([
  '-I' + meson.build_root(),
], language: 'c')

subdir('src')

